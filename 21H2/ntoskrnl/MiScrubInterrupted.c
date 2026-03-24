/*
 * XREFs of MiScrubInterrupted @ 0x140563A58
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140556E38 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14056404C (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x1408DC010 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1296LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
