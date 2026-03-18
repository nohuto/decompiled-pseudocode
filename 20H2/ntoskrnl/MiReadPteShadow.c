/*
 * XREFs of MiReadPteShadow @ 0x1402366E0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140680B90 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiIsRangeFullyCommitted @ 0x140681740 (MiIsRangeFullyCommitted.c)
 *     MiPrefetchDriverPages @ 0x1406B26C0 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 *     MiInitializeShadowPageTable @ 0x140795E48 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MmFreeNonCachedMemory @ 0x1408C9120 (MmFreeNonCachedMemory.c)
 *     MiCaptureSparsePages @ 0x1408DADA4 (MiCaptureSparsePages.c)
 *     MiConvertHiberPhasePte @ 0x140997FE0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B3400 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B3620 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadPteShadow(unsigned __int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v4; // rax

  if ( (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
