/*
 * XREFs of MiReadPteShadow @ 0x140305A30
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiChargeSegmentCommit @ 0x14061FED0 (MiChargeSegmentCommit.c)
 *     MiPrefetchDriverPages @ 0x1406885A0 (MiPrefetchDriverPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x1406EF710 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiIsRangeFullyCommitted @ 0x1406F02C0 (MiIsRangeFullyCommitted.c)
 *     MmFreeIndependentPages @ 0x1407645D0 (MmFreeIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14079F9BC (MiMarkBootGuardPage.c)
 *     MiInitializeShadowPageTable @ 0x1407A0368 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1470 (MiProtectLargeKernelHalRange.c)
 *     MmFreeNonCachedMemory @ 0x1408C68E0 (MmFreeNonCachedMemory.c)
 *     MiCaptureSparsePages @ 0x1408D8564 (MiCaptureSparsePages.c)
 *     MiConvertHiberPhasePte @ 0x1409957D0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B0300 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0520 (MiMarkNonPagedHiberPhasePte.c)
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
