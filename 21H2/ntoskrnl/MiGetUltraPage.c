/*
 * XREFs of MiGetUltraPage @ 0x14026A6C4
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x14026A5DC (MiCreateUltraThreadContextHelper.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 */

__int64 __fastcall MiGetUltraPage(unsigned int a1)
{
  __int64 Page; // rax
  __int64 v2; // r8
  _QWORD *v3; // rcx

  Page = MiGetPage(&MiSystemPartition, a1, 778LL);
  v2 = Page;
  if ( Page != -1 )
  {
    v3 = (_QWORD *)(48 * Page - 0x21FFFFFFFFF0LL);
    *v3 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v3, ZeroPte, Page);
  }
  return v2;
}
