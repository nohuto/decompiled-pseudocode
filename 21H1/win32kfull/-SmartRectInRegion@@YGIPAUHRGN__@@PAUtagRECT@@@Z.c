/*
 * XREFs of ?SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z @ 0x34A8E
 * Callers:
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

unsigned int __fastcall SmartRectInRegion(int a1, const void *a2)
{
  int RgnBox; // eax
  int v6; // eax
  _BYTE Buf2[16]; // [esp+Ch] [ebp-14h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  if ( !GreRectInRegion(a1, a2) )
    return 0;
  RgnBox = GreGetRgnBox(a1, Buf2);
  if ( !RgnBox )
    return 3;
  if ( RgnBox == 2 )
  {
    if ( IntersectRect(a2) )
    {
      if ( memcmp(a2, Buf2, 0x10u) )
        return 1;
      return 2;
    }
    return 0;
  }
  SetRectRgnIndirect(_ghrgnInv2, a2);
  v6 = GreCombineRgn(_ghrgnInv2, _ghrgnInv2, a1, 1) - 1;
  if ( !v6 )
    return 0;
  if ( v6 != 1 )
    return 1;
  if ( !GreGetRgnBox(_ghrgnInv2, Buf2) )
    return 3;
  if ( !EqualRectInl(a2, Buf2) )
    return 1;
  return 2;
}
