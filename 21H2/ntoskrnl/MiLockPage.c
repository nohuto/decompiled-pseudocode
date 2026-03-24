/*
 * XREFs of MiLockPage @ 0x14054F904
 * Callers:
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x14028FF00 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x14029167C (MiLargeFreePageToMdl.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiReadyLargePageToFree @ 0x140329D30 (MiReadyLargePageToFree.c)
 *     MiScanPagefileSpace @ 0x1408D07D0 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C5CD0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiLockPageInline(a1, a2, a3, a4);
}
