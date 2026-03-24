/*
 * XREFs of BgpGxDrawBitmapImage @ 0x1409F7704
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F71B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14039BE98 (BgpGxDrawRectangle.c)
 *     BgpGxParseBitmap @ 0x1409F1880 (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawBitmapImage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  _BYTE *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = BgpGxParseBitmap(a1, &v8);
  if ( v3 >= 0 )
  {
    v3 = BgpGxDrawRectangle(v8, a2);
    BgpGxRectangleDestroy((__int64)v8, v4, v5, v6);
  }
  return (unsigned int)v3;
}
