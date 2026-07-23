/*
 * XREFs of MiLockPage @ 0x14054FB44
 * Callers:
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x14020DE70 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiReadyLargePageToFree @ 0x140334A80 (MiReadyLargePageToFree.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C6CD0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiLockPageInline(a1, a2, a3, a4);
}
