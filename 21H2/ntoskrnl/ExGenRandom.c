/*
 * XREFs of ExGenRandom @ 0x14022C890
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402A6C9C (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x1402CB0F4 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x1402E5D70 (RtlRandomEx.c)
 *     MiGenerateRandomPte @ 0x14035A1EC (MiGenerateRandomPte.c)
 *     MiInitializeColorTable @ 0x1403B0D1C (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x1403B5F84 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403B7160 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403DB990 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F8994 (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x1405042D0 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x140589818 (RtlpCreateHeapEncoding.c)
 *     sub_1405BF1D0 @ 0x1405BF1D0 (sub_1405BF1D0.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406119C8 (PspPrepareSystemDllInitBlock.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 *     PspSetupUserStack @ 0x14064C384 (PspSetupUserStack.c)
 *     sub_140687840 @ 0x140687840 (sub_140687840.c)
 *     PspWow64InitThreadGuestx86 @ 0x140695B8C (PspWow64InitThreadGuestx86.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x1406BD150 (RtlRandom.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140711A28 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140711B00 (MiInitializeProcessBottomUpEntropy.c)
 *     MiSelectImageBase @ 0x140714524 (MiSelectImageBase.c)
 *     MiProcessLoadConfigForDriver @ 0x14075CD3C (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x14075FEA4 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x14078F8B0 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1407D3268 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408D7CFC (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x14090C8EC (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409422B8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14094605C (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     ExpTimerInitialization @ 0x140A3CD34 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A3D1B8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x140A508A8 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140A50B28 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A50C18 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x140A50CF0 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeRelocations @ 0x140A55780 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140A684D4 (MiAssignSessionRanges.c)
 *     ExInitializePoolTracker @ 0x140A68AF4 (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140A69014 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A6E660 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x140A6EA40 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140A7160C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
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
