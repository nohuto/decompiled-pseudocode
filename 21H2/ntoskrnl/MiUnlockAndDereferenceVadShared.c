/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14030EA70
 * Callers:
 *     MiWaitForRotateToComplete @ 0x140201E8C (MiWaitForRotateToComplete.c)
 *     MiCleanCfg @ 0x14024CB6C (MiCleanCfg.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiPrefetchPreallocatePages @ 0x140594C08 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x1405AA214 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MiCheckForUserStackOverflow @ 0x1406B42F4 (MiCheckForUserStackOverflow.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x140881A9A (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x140978EDC (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  if ( v5 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
