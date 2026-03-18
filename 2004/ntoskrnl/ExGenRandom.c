/*
 * XREFs of ExGenRandom @ 0x140250640
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x140251114 (RtlpHeapGenerateRandomValue64.c)
 *     RtlRandomEx @ 0x1402E2150 (RtlRandomEx.c)
 *     MiGenerateRandomPte @ 0x140311B64 (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140359454 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiInitializeColorTable @ 0x1403A842C (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x1403B1F94 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403B31B0 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403D8390 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F282C (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x1404FEE80 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x1405837C0 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1405844A8 (RtlpCreateHeapEncoding.c)
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 *     sub_1405C7010 @ 0x1405C7010 (sub_1405C7010.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     PspSetupUserStack @ 0x140603EA8 (PspSetupUserStack.c)
 *     MiSelectImageBase @ 0x140605F18 (MiSelectImageBase.c)
 *     PspPrepareSystemDllInitBlock @ 0x14065D530 (PspPrepareSystemDllInitBlock.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406B47A0 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406B4878 (MiInitializeProcessBottomUpEntropy.c)
 *     PspUserThreadStartup @ 0x1406B5110 (PspUserThreadStartup.c)
 *     sub_1406D9894 @ 0x1406D9894 (sub_1406D9894.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406E5598 (PspWow64InitThreadGuestx86.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x14070AF20 (RtlRandom.c)
 *     MiProcessLoadConfigForDriver @ 0x1407472A8 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x1407820A4 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1407C05E8 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408D46FC (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x14090951C (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x140942ACC (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     ExpTimerInitialization @ 0x140A391CC (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A39658 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x140A46988 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A46B60 (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x140A49010 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140A49290 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A49380 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x140A49458 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeRelocations @ 0x140A53AF8 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140A55D3C (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140A63C94 (MiAssignSessionRanges.c)
 *     ExInitializePoolTracker @ 0x140A643EC (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140A6490C (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A6ADD4 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x140A6B1B4 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140A6DEE4 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
