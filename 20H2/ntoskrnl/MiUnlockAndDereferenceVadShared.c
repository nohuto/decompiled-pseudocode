/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14022C070
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiCleanCfg @ 0x1403222CC (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140330980 (MiWaitForRotateToComplete.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140549C34 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x1406BC158 (MiCheckShadowStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408C6884 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408D0D44 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D4548 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408DABC8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  if ( v5 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
