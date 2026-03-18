/*
 * XREFs of ?GetTrueClipRgn@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0xC3732
 * Callers:
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 * Callees:
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 */

int __fastcall GetTrueClipRgn(int a1, int a2)
{
  HRGN EmptyRgn; // esi
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v6 = 0;
  v7 = 0;
  EmptyRgn = (HRGN)CreateEmptyRgn();
  v8 = GreCopyVisRgn(a1, a2);
  if ( !GreGetDCOrg(a1, &v6) )
    return 0;
  if ( GreGetRandomRgn(a1, EmptyRgn, 1) )
  {
    GreOffsetRgn(EmptyRgn, v6, v7);
    v8 = GreCombineRgn(a2, a2, EmptyRgn, 1);
  }
  GreOffsetRgn(a2, -v6, -v7);
  GreDeleteObject(EmptyRgn);
  return v8;
}
