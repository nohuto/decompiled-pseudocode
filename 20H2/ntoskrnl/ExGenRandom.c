/*
 * XREFs of ExGenRandom @ 0x1402D7710
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x14030A0DC (RtlpHeapGenerateRandomValue64.c)
 *     MiGenerateRandomPte @ 0x14031B1FC (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140329C04 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x140336C50 (RtlRandomEx.c)
 *     MiInitializeColorTable @ 0x1403AAE1C (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x1403B4904 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403B5B20 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403DB020 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F6E54 (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x140502750 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x140587E08 (RtlpCreateHeapEncoding.c)
 *     sub_1405BD780 @ 0x1405BD780 (sub_1405BD780.c)
 *     sub_1405CB010 @ 0x1405CB010 (sub_1405CB010.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiSelectImageBase @ 0x14062B97C (MiSelectImageBase.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     sub_14065D824 @ 0x14065D824 (sub_14065D824.c)
 *     PspSetupUserStack @ 0x140685318 (PspSetupUserStack.c)
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406AA560 (PspWow64InitThreadGuestx86.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406AD068 (PspPrepareSystemDllInitBlock.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x1406DD300 (RtlRandom.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406EF008 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406EF0E0 (MiInitializeProcessBottomUpEntropy.c)
 *     MiProcessLoadConfigForDriver @ 0x140755E88 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140758F7C (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x1407901C0 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1407CEE78 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408DA53C (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x14090F13C (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14094888C (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     ExpTimerInitialization @ 0x140A3F1B4 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A3F638 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4CDFC (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x140A4F2A0 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140A4F520 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A4F610 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x140A4F6E8 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeRelocations @ 0x140A54178 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140A563BC (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140A6AF64 (MiAssignSessionRanges.c)
 *     ExInitializePoolTracker @ 0x140A6B6BC (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140A6BBDC (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A716E0 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x140A71AC0 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140A7468C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v14; // rax
  _DWORD *SchedulerAssist; // r8
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
    v14 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v8 = ExpLeftoverBootRngData[v14];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v14], 0, sizeof(_DWORD));
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
  if ( (KeFeatureBits & 0x100000000LL) != 0 )
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
