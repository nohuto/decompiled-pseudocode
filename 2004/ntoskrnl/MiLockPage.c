/*
 * XREFs of MiLockPage @ 0x14054A464
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiReadyLargePageToFree @ 0x1402B5DF0 (MiReadyLargePageToFree.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140324060 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x140353B98 (MiLargeFreePageToMdl.c)
 *     MiScanPagefileSpace @ 0x1408CD1D0 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CC0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiLockPageInline(a1, a2, a3, a4);
}
