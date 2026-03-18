/*
 * XREFs of _bDeleteFont@8 @ 0x9827E
 * Callers:
 *     _vCleanupFonts@4 @ 0x98236 (_vCleanupFonts@4.c)
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall bDeleteFont(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = 1;
  v6 = 1;
  if ( HmgMarkLazyDelete(a1, 10, &v6) )
  {
    v3 = v6;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v6 = 0;
  }
  if ( !v3 && v2 )
  {
    v4 = HmgRemoveObject(a1, 0, 0, a2, 10, 0);
    if ( v4 )
    {
      FreeObject(v4, 10);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
