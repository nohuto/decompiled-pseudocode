/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x140709FAC
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopWaitForLockAlertable @ 0x14029ED34 (IopWaitForLockAlertable.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  char v6; // r14
  char v7; // r15
  NTSTATUS v9; // ebp
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  int Priority; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v7 = a2;
  _InterlockedIncrement(Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange(Object + 29, 1) )
    {
      if ( a4 )
        *(_BYTE *)(a4 + 18) = 1;
      ObfReferenceObject((PVOID)Object);
      _InterlockedDecrement(Object + 28);
      return 0;
    }
    if ( a4 )
      KeAbPreWait((__int64 *)a4, a2, a3);
    v9 = IopWaitForLockAlertable((PVOID)(Object + 32), v7, v6);
    if ( a4 )
      a4 = KeAbPreAcquire((__int64)(Object + 32), a4);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(Object + 28);
  if ( !*((_DWORD *)Object + 29) && *((_DWORD *)Object + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx(Object + 32, (__int64)v11, (__int64)&Priority, (_DWORD *)Object + 32, 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((ULONG_PTR)(Object + 32), a4);
  *a5 = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
