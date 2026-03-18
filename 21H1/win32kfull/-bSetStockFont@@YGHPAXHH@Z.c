/*
 * XREFs of ?bSetStockFont@@YGHPAXHH@Z @ 0xDBF22
 * Callers:
 *     _FinishStockFontReinit@4 @ 0xD9D62 (_FinishStockFontReinit@4.c)
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 *     _bInitOneStockFontInternal@16 @ 0x2925F6 (_bInitOneStockFontInternal@16.c)
 *     _bInitSystemFont@8 @ 0x293D42 (_bInitSystemFont@8.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge bSetStockFont@<eax>(int a1@<edx>, int a2@<ecx>, void *a3, int a4, int a5)
{
  void **v5; // eax

  if ( a2 )
  {
    v5 = gahStockObjects96;
    if ( !a3 )
      v5 = gahStockObjects;
    *((_DWORD *)*v5 + a1) = a2;
  }
  return a2 != 0;
}
