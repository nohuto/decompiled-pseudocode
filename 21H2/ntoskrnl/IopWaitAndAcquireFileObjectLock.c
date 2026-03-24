/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x1406E7BB8
 * Callers:
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140698D00 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     IopWaitForLockAlertable @ 0x1402F0BA0 (IopWaitForLockAlertable.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     KeAbPreWait @ 0x1402F30C0 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *Object,
        char a2,
        char a3,
        __int64 a4,
        _BYTE *a5)
{
  NTSTATUS v9; // ebp
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  int Priority; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement(Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange(Object + 29, 1) )
    {
      if ( a4 )
        *(_BYTE *)(a4 + 26) |= 1u;
      ObfReferenceObject((PVOID)Object);
      _InterlockedDecrement(Object + 28);
      return 0;
    }
    if ( a4 )
      KeAbPreWait(a4);
    v9 = IopWaitForLockAlertable((PVOID)(Object + 32), a2, a3);
    if ( a4 )
      a4 = KeAbPreAcquire((ULONG_PTR)(Object + 32), a4, 0);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(Object + 28);
  if ( !*((_DWORD *)Object + 29) && *((_DWORD *)Object + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx((__int64)(Object + 32), (__int64)v11, (__int64)&Priority, (_DWORD *)Object + 32, 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((ULONG_PTR)(Object + 32), a4);
  *a5 = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
