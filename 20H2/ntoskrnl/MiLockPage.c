/*
 * XREFs of MiLockPage @ 0x14054DE34
 * Callers:
 *     MiReadyLargePageToFree @ 0x1402AD140 (MiReadyLargePageToFree.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402F1050 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiScanPagefileSpace @ 0x1408D3010 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C8CE0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiLockPageInline(a1, a2, a3, a4);
}
