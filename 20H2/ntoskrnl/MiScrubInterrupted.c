/*
 * XREFs of MiScrubInterrupted @ 0x140561F88
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14056257C (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1296LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
