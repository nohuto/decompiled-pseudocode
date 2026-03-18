/*
 * XREFs of IopReleaseFileObjectLock @ 0x1402238A0
 * Callers:
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F0F00 (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F11C0 (IopValidateAndGetWriteParameters.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     IoSetInformation @ 0x140778120 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 */

void __fastcall IopReleaseFileObjectLock(PADAPTER_OBJECT DmaAdapter)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 0);
  if ( *(_DWORD *)&DmaAdapter[7].Version )
    KeSetEventBoostPriorityEx(
      (_DWORD)DmaAdapter + 128,
      (unsigned int)&v3,
      (unsigned int)&Priority,
      (_DWORD)DmaAdapter + 128,
      0,
      1);
  KeAbPostRelease((ULONG_PTR)&DmaAdapter[8]);
  HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegion();
}
