/*
 * XREFs of ExGenRandom @ 0x1402D1110
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402240DC (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x1402499E4 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x1402970C0 (RtlRandomEx.c)
 *     MiGenerateRandomPte @ 0x14029EF88 (MiGenerateRandomPte.c)
 *     MiInitializeColorTable @ 0x1403B0E8C (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x1403B60F4 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403B72D0 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403DBB00 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F89C4 (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x140504250 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x140589A48 (RtlpCreateHeapEncoding.c)
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     sub_1405E69A0 @ 0x1405E69A0 (sub_1405E69A0.c)
 *     PspWow64InitThreadGuestx86 @ 0x1405F50DC (PspWow64InitThreadGuestx86.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x14061C280 (RtlRandom.c)
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     PspSetupUserStack @ 0x1406411A4 (PspSetupUserStack.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406A1478 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406C0078 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406C0150 (MiInitializeProcessBottomUpEntropy.c)
 *     MiSelectImageBase @ 0x1406C2B74 (MiSelectImageBase.c)
 *     MiProcessLoadConfigForDriver @ 0x14075CEFC (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x140790E60 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1407D33D8 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408D7E5C (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x14090CA4C (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14094622C (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     ExpTimerInitialization @ 0x140A3DD34 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A3E1B8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x140A518A8 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140A51B28 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A51C18 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x140A51CF0 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeRelocations @ 0x140A56780 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140A589E0 (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140A694D4 (MiAssignSessionRanges.c)
 *     ExInitializePoolTracker @ 0x140A69AF4 (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140A6A014 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A6F660 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x140A6FA40 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140A7260C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
