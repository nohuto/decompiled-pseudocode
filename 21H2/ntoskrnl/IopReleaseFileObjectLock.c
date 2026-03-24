/*
 * XREFs of IopReleaseFileObjectLock @ 0x14034D750
 * Callers:
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D24 (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140890E54 (IopAllocateIrpCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 */

void __fastcall IopReleaseFileObjectLock(PADAPTER_OBJECT DmaAdapter)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 0);
  if ( *(_DWORD *)&DmaAdapter[7].Version )
    KeSetEventBoostPriorityEx((__int64)&DmaAdapter[8], (__int64)&v3, (__int64)&Priority, &DmaAdapter[8].Version, 0, 1);
  KeAbPostRelease((ULONG_PTR)&DmaAdapter[8]);
  HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegion();
}
