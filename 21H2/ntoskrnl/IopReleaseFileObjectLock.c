/*
 * XREFs of IopReleaseFileObjectLock @ 0x1403584A0
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2068 (IopValidateAndGetWriteParameters.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
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
