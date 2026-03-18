/*
 * XREFs of ?SetMargins@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z @ 0x180060644
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x1800606A0 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetMargins(
        CGdiSpriteBitmap *a1,
        __int128 *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  __int128 v5; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v5 = *a2;
  if ( (int)*a2 < 0 || SDWORD1(v5) < 0 || SDWORD2(v5) < 0 || v5 < 0 )
  {
    v2 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003303421, 0x114u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0xCEu, 0LL);
  }
  else
  {
    *((_OWORD *)a1 + 5) = *a2;
    CGdiSpriteBitmap::OnMarginsChanged(a1);
  }
  return v2;
}
