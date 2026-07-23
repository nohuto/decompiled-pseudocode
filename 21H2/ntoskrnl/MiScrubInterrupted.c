/*
 * XREFs of MiScrubInterrupted @ 0x140563C98
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14056428C (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1296LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
