/*
 * XREFs of MiScrubInterrupted @ 0x14055E5B8
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14055EBAC (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x1408D8A10 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1296LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
