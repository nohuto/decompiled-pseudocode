/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14027C7C0
 * Callers:
 *     MiCleanCfg @ 0x140241B54 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140251070 (MiWaitForRotateToComplete.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiPrefetchPreallocatePages @ 0x140539860 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x14054B974 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x140552500 (MiProcessVaContiguityInformation.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x1405F4DDC (MiCheckShadowStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x14061C730 (NtAreMappedFilesTheSame.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x1408C41A4 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x1408CA7B8 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE664 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D1E68 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D84E8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
{
  signed __int32 v2; // eax
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
