/*
 * XREFs of MiReadPteShadow @ 0x1402AD460
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiIsRangeFullyCommitted @ 0x140616270 (MiIsRangeFullyCommitted.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x140631D10 (MmHardFaultBytesRequired.c)
 *     MiChargeSegmentCommit @ 0x140640FF0 (MiChargeSegmentCommit.c)
 *     MiPrefetchDriverPages @ 0x1406B97B0 (MiPrefetchDriverPages.c)
 *     MmFreeIndependentPages @ 0x14074CF40 (MmFreeIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x140781E08 (MiMarkBootGuardPage.c)
 *     MiInitializeShadowPageTable @ 0x1407827B4 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MmFreeNonCachedMemory @ 0x1408C1F90 (MmFreeNonCachedMemory.c)
 *     MiCaptureSparsePages @ 0x1408D3C14 (MiCaptureSparsePages.c)
 *     MiConvertHiberPhasePte @ 0x140991030 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409AC630 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409AC850 (MiMarkNonPagedHiberPhasePte.c)
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
