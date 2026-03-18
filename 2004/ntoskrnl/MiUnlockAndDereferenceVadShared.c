/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14024B570
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x1403517D4 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x14035FBF0 (MiWaitForRotateToComplete.c)
 *     MiPrefetchPreallocatePages @ 0x140534150 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140546264 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x1406E5298 (MiCheckShadowStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14070B3D0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408C0A44 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CAF04 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408CE708 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D4D88 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
