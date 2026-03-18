/*
 * XREFs of _MNIsFlatMenu@0 @ 0x1846E0
 * Callers:
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall MNIsFlatMenu()
{
  return ((unsigned int)_gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
}
