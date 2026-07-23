/*
 * XREFs of MiReadPteShadow @ 0x140310780
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiPrefetchDriverPages @ 0x1405E7A30 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x140689B40 (MiChargeSegmentCommit.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140706AF0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MiIsRangeFullyCommitted @ 0x1407076A0 (MiIsRangeFullyCommitted.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14079FBBC (MiMarkBootGuardPage.c)
 *     MiInitializeShadowPageTable @ 0x1407A0568 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MmFreeNonCachedMemory @ 0x1408C6A40 (MmFreeNonCachedMemory.c)
 *     MiCaptureSparsePages @ 0x1408D86C4 (MiCaptureSparsePages.c)
 *     MiConvertHiberPhasePte @ 0x1409967D0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B1230 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B1450 (MiMarkNonPagedHiberPhasePte.c)
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
