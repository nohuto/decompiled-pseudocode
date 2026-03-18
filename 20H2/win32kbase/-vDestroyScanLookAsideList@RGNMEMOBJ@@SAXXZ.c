/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C0084430
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePagedLookasideList @ 0x1C00851C0 (Win32FreePagedLookasideList.c)
 */

void RGNMEMOBJ::vDestroyScanLookAsideList(void)
{
  if ( RGNMEMOBJ::s_pSCANLookAsideList )
  {
    Win32FreePagedLookasideList();
    RGNMEMOBJ::s_pSCANLookAsideList = 0LL;
  }
}
