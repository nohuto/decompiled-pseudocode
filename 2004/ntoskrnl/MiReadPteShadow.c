/*
 * XREFs of MiReadPteShadow @ 0x140254430
 * Callers:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x1405FCCD0 (MmHardFaultBytesRequired.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiIsRangeFullyCommitted @ 0x14062EEB0 (MiIsRangeFullyCommitted.c)
 *     MiPrefetchDriverPages @ 0x1406DAAC0 (MiPrefetchDriverPages.c)
 *     MmFreeIndependentPages @ 0x1407515D0 (MmFreeIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14078778C (MiMarkBootGuardPage.c)
 *     MiInitializeShadowPageTable @ 0x140788138 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MmFreeNonCachedMemory @ 0x1408C32E0 (MmFreeNonCachedMemory.c)
 *     MiCaptureSparsePages @ 0x1408D4F64 (MiCaptureSparsePages.c)
 *     MiConvertHiberPhasePte @ 0x140991F70 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409AD490 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409AD6B0 (MiMarkNonPagedHiberPhasePte.c)
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
