/*
 * XREFs of BgpGxConvertRectangle @ 0x1403CE804
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x1403CE780 (BgpGxProcessQrCodeBitmap.c)
 *     BgConvertResources @ 0x1409F7550 (BgConvertResources.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x14039C5BC (BgpGxConvertRectangleEx.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxConvertRectangle(__int64 *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1;
  if ( *(_DWORD *)(v4 + 8) != (_DWORD)a2 )
  {
    v6 = 0LL;
    v3 = BgpGxConvertRectangleEx(v4, a2, &v6, 0);
    if ( v3 >= 0 )
    {
      BgpGxRectangleDestroy(*a1);
      *a1 = v6;
    }
  }
  return (unsigned int)v3;
}
