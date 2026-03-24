/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14025B250
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x1402C35D4 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x1402D2AF0 (MiWaitForRotateToComplete.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x14054B734 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1405522C0 (MiProcessVaContiguityInformation.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x14069588C (MiCheckShadowStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x1406BD520 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408C4044 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x1408CA658 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE504 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D1D08 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D8388 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
{
  signed __int32 v2; // eax
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rcx
  bool v6; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5);
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
