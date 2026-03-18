/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C000BE00
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePagedLookasideList @ 0x1C000CB90 (Win32FreePagedLookasideList.c)
 */

void RGNMEMOBJ::vDestroyScanLookAsideList(void)
{
  if ( RGNMEMOBJ::s_pSCANLookAsideList )
  {
    Win32FreePagedLookasideList();
    RGNMEMOBJ::s_pSCANLookAsideList = 0LL;
  }
}
