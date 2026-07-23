/*
 * XREFs of FsRtlCancellableWaitForMultipleObjects @ 0x1406EC2C0
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x1405E9140 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140611D50 (FsRtlCancellableWaitForSingleObject.c)
 *     FsRtlQueryInformationFile @ 0x14088C3E0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeQueryTimeIncrement @ 0x1402F0CE0 (KeQueryTimeIncrement.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForMultipleObjects(
        ULONG Count,
        PVOID ObjectArray[],
        WAIT_TYPE WaitType,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray,
        PIRP Irp)
{
  LONGLONG QuadPart; // rbx
  __int64 v11; // rbx
  NTSTATUS result; // eax
  __int64 v13; // rdi

  QuadPart = 0LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    if ( Timeout->QuadPart < 0 )
    {
      v11 = MEMORY[0xFFFFF78000000320];
      QuadPart = v11 - Timeout->QuadPart / KeQueryTimeIncrement();
    }
  }
  while ( 1 )
  {
    result = Count == 1
           ? KeWaitForSingleObject(*ObjectArray, Executive, 0, 1u, Timeout)
           : KeWaitForMultipleObjects(Count, ObjectArray, WaitType, Executive, 0, 1u, Timeout, WaitBlockArray);
    if ( result != 257 )
      break;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      return -1073741749;
    if ( Irp && Irp->Cancel )
      return -1073741536;
    if ( Timeout )
    {
      if ( Timeout->QuadPart >= 0 )
      {
        if ( MEMORY[0xFFFFF78000000014] >= QuadPart )
          return 258;
      }
      else
      {
        v13 = MEMORY[0xFFFFF78000000320];
        if ( MEMORY[0xFFFFF78000000320] >= QuadPart )
          return 258;
        Timeout->QuadPart = -((QuadPart - v13) * KeQueryTimeIncrement());
      }
    }
  }
  return result;
}
