/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C0020D40
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePagedLookasideList @ 0x1C0021AD0 (Win32FreePagedLookasideList.c)
 */

void RGNMEMOBJ::vDestroyScanLookAsideList(void)
{
  if ( RGNMEMOBJ::s_pSCANLookAsideList )
  {
    Win32FreePagedLookasideList();
    RGNMEMOBJ::s_pSCANLookAsideList = 0LL;
  }
}
