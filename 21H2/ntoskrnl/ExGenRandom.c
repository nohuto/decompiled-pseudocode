/*
 * XREFs of ExGenRandom @ 0x140363220
 * Callers:
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140236C14 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiInitializeColorTable @ 0x14025BFE0 (MiInitializeColorTable.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1403631E0 (RtlpHeapGenerateRandomValue64.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     MiGenerateRandomPte @ 0x1403747E4 (MiGenerateRandomPte.c)
 *     MiBuildDynamicRegion @ 0x1403C289C (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403C3A30 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403EAC70 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x14041A044 (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x140554988 (IopInitializeInMemoryDumpData.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140572094 (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1405E8D90 (RtlpCreateHeapEncoding.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406727EC (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406749A4 (PspWow64InitThreadGuestx86.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x1406E2E20 (RtlRandom.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14070A738 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14070A810 (MiInitializeProcessBottomUpEntropy.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     MiProcessLoadConfigForDriver @ 0x14075C2E0 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 *     sub_1407E4684 @ 0x1407E4684 (sub_1407E4684.c)
 *     PspSetupUserStack @ 0x1407E4964 (PspSetupUserStack.c)
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x14086305C (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x14097FD74 (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x1409B3020 (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1409F25A8 (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     ExpTimerInitialization @ 0x140AFF6B0 (ExpTimerInitialization.c)
 *     MiInitializeNonPagedPool @ 0x140B0681C (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B06A84 (MiInitializeSystemPtes.c)
 *     MiAssignTopLevelRanges @ 0x140B0728C (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140B0751C (MiAssignSystemVa.c)
 *     MiInitializeTopLevelBitmap @ 0x140B07614 (MiInitializeTopLevelBitmap.c)
 *     MiAddSubRegionEntropy @ 0x140B076FC (MiAddSubRegionEntropy.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     MiInitializeRelocations @ 0x140B09744 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140B0A680 (MiInitializeSharedUserData.c)
 *     ExInitializePoolTracker @ 0x140B0ABEC (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140B0B180 (ExpInitSystemPhase0.c)
 *     PspTlsInitialize @ 0x140B24668 (PspTlsInitialize.c)
 *     ExRngInitializeSystem @ 0x140B29610 (ExRngInitializeSystem.c)
 *     MiAssignSessionRanges @ 0x140B29EB4 (MiAssignSessionRanges.c)
 *     MiInitializeUltraSpace @ 0x140B2A164 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140B2DC08 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rcx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // ecx
  _DWORD *SchedulerAssist; // r8
  __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v18; // rdi
  int v19; // eax
  bool v20; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireSpinLock(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v15 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v8 = ExpLeftoverBootRngData[v15];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v15], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0LL;
    v4 = (char *)&ExpLFGRngState + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = (unsigned int)(v5 + 1);
    v7 = 0LL;
    if ( v6 != 54 )
      v7 = (unsigned int)(v6 + 1);
    v8 = *(_DWORD *)&v4[4 * v3] - *(_DWORD *)&v4[4 * v7];
    *(_DWORD *)&v4[4 * v3] = v8;
    *((_DWORD *)v4 + 55) = v3;
    *((_DWORD *)v4 + 56) = v7;
  }
  KxReleaseSpinLock(&ExpLFGRngLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v9 = ExpRNGAuxiliarySeed ^ v8;
  if ( _bittest64(&KeFeatureBits, 0x20u) )
  {
    v10 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v10 >= 0xA )
        return v9;
    }
    v9 ^= _EDX;
  }
  return v9;
}
