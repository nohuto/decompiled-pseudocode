/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x1402BF880
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x14027CC60 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     MiDeprioritizeVad @ 0x1403819E4 (MiDeprioritizeVad.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiScrubProcessLargePages @ 0x140564734 (MiScrubProcessLargePages.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140640FA0 (MiAllocateFromSubAllocatedRegion.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140657018 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiLockVadRange @ 0x140687890 (MiLockVadRange.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x140688508 (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1406893D0 (MmUnsecureVirtualMemory.c)
 *     MmSecureVirtualMemoryEx @ 0x140689890 (MmSecureVirtualMemoryEx.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BE204 (MiProcessVaRangesInfoClass.c)
 *     MiCfgInitializeProcess @ 0x1406C072C (MiCfgInitializeProcess.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     NtResetWriteWatch @ 0x140704430 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DE5C (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x1408C7010 (MmSetGraphicsPtes.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE664 (MiSetImageHotPatchAllowed.c)
 *     MiCreateEnclave @ 0x1408D293C (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1408D30F0 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D3DD4 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D4C30 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B18F0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 AbAllocationRegionCount; // [rsp+70h] [rbp+8h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  SessionId = -1;
  if ( v2 == -1 )
    __fastfail(0xEu);
  v4 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(P + 40) == 1 )
    SessionId = MmGetSessionIdEx(v6->ApcState.Process);
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
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 40) & 0x7FFFFFFFFFFFFFFCLL)
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
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)(P + 40), SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v10 + 32) |= 2u;
    if ( *(__int64 *)(v10 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v6);
  v8 = v6->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
