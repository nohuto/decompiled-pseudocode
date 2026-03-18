/*
 * XREFs of ExGenRandom @ 0x1402A9670
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402AA144 (RtlpHeapGenerateRandomValue64.c)
 *     MiGenerateRandomPte @ 0x14030CA78 (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x14031B884 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x1403284B0 (RtlRandomEx.c)
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403AD530 (MiAssignSoftwareWsleRegion.c)
 *     MiInitializeColorTable @ 0x1403AE84C (MiInitializeColorTable.c)
 *     CcBcbProfiler @ 0x1403D7550 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F1534 (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x1404FE830 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x140583D78 (RtlpCreateHeapEncoding.c)
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 *     sub_1405C6010 @ 0x1405C6010 (sub_1405C6010.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     PspSetupUserStack @ 0x140638EE8 (PspSetupUserStack.c)
 *     MiSelectImageBase @ 0x14063AF58 (MiSelectImageBase.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14064F3D0 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14064F4A8 (MiInitializeProcessBottomUpEntropy.c)
 *     sub_14065BF18 @ 0x14065BF18 (sub_14065BF18.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x1406E70D0 (RtlRandom.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406F9B48 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406FC7B8 (PspWow64InitThreadGuestx86.c)
 *     MiProcessLoadConfigForDriver @ 0x140745728 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1407BD478 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408D33AC (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x14090826C (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14094184C (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     ExpTimerInitialization @ 0x140A39368 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A397E8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A41304 (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x140A437B0 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140A43A30 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A43B20 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x140A43BF8 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeRelocations @ 0x140A4DDF8 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140A5003C (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140A60AA4 (MiAssignSessionRanges.c)
 *     ExInitializePoolTracker @ 0x140A64A0C (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140A64F2C (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A6AB74 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x140A6AF54 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140A6D83C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
