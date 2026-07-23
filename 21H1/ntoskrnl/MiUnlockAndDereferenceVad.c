/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14021A7A0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiDeprioritizeVad @ 0x14037F074 (MiDeprioritizeVad.c)
 *     MiScrubProcessLargePages @ 0x14055EA04 (MiScrubProcessLargePages.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x14062DC10 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     MiCleanVad @ 0x1406357F0 (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140639628 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14063A73C (MiFreeToSubAllocatedRegion.c)
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MiCfgInitializeProcess @ 0x14064EC3C (MiCfgInitializeProcess.c)
 *     MmSecureVirtualMemoryEx @ 0x1406BA960 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiProcessVaRangesInfoClass @ 0x1406DD768 (MiProcessVaRangesInfoClass.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E17BC (MmStoreAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x1408C2560 (MmSetGraphicsPtes.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 *     MiCreateEnclave @ 0x1408CDE8C (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1408CE640 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408CF324 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D0180 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery();
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
