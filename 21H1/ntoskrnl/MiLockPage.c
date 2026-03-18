/*
 * XREFs of MiLockPage @ 0x140549E14
 * Callers:
 *     MiReadyLargePageToFree @ 0x140223170 (MiReadyLargePageToFree.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E91E0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CB0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiLockPageInline(a1, a2, a3, a4);
}
