/*
 * XREFs of MiScrubInterrupted @ 0x14055DF68
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14055E55C (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D1CF0 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x1408D76C0 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1296LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
