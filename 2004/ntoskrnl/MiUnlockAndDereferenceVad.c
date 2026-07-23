/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x1402AD420
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x14024BA10 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiDeprioritizeVad @ 0x14037F9E0 (MiDeprioritizeVad.c)
 *     MmUpdateUserShadowStackValue @ 0x1403EE978 (MmUpdateUserShadowStackValue.c)
 *     MiScrubProcessLargePages @ 0x14055F054 (MiScrubProcessLargePages.c)
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140600750 (MmUnsecureVirtualMemory.c)
 *     MiCleanVad @ 0x1406007B0 (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406056FC (MiFreeToSubAllocatedRegion.c)
 *     MiCfgMarkValidEntries @ 0x140607044 (MiCfgMarkValidEntries.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x1406B4E54 (MiCfgInitializeProcess.c)
 *     MmSecureVirtualMemoryEx @ 0x1406DBC70 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiProcessVaRangesInfoClass @ 0x140700488 (MiProcessVaRangesInfoClass.c)
 *     MmStoreAllocateVirtualMemory @ 0x140704130 (MmStoreAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x1408C38B0 (MmSetGraphicsPtes.c)
 *     MiPerformImageHotPatch @ 0x1408C98C4 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CAF04 (MiSetImageHotPatchAllowed.c)
 *     MiCreateEnclave @ 0x1408CF1DC (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1408CF990 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D0674 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D14D0 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ADB50 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(PVOID P)
{
  signed __int32 v2; // edx
  unsigned int SessionId; // r15d
  BOOL v4; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned int v7; // edx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 AbAllocationRegionCount; // [rsp+70h] [rbp+8h]
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  SessionId = -1;
  if ( v2 == -1 )
    __fastfail(0xEu);
  v4 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  v14 = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)P + 40) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  --v6->SpecialApcDisable;
  ++v6->AbAllocationRegionCount;
  v7 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  AbAllocationRegionCount = v6->AbAllocationRegionCount;
  v8 = !_BitScanReverse((unsigned int *)&v9, v7);
  if ( v8 )
    goto LABEL_30;
  while ( 1 )
  {
    v10 = (__int64)&v6->LockEntries[v9];
    v7 &= ~(1 << v9);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (((unsigned __int64)P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
        break;
    }
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      goto LABEL_30;
  }
  if ( !v10 )
  {
LABEL_30:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)P + 40, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v10 + 32) |= 2u;
    if ( *(__int64 *)(v10 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
    v14 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
    *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v10 + 25) &= ~1u;
    *(_QWORD *)(v10 + 32) = 0LL;
    v11 = (signed __int64)(v10 - (unsigned __int64)v6->LockEntries) / 96;
    if ( AbAllocationRegionCount == 1 )
      v6->AbEntrySummary |= 1 << v11;
    else
      _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v11);
  }
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)P + 40, &v14);
  v8 = v6->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v12);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
