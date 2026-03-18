/*
 * XREFs of MiScrubInterrupted @ 0x1405C4F88
 * Callers:
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1405C5550 (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1376LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
