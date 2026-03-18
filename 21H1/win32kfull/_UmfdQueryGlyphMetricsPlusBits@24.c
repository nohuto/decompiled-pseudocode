/*
 * XREFs of _UmfdQueryGlyphMetricsPlusBits@24 @ 0xF886E
 * Callers:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF86B2 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHB.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0QueryGlyphMetricsPlusBitsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF880E (--0QueryGlyphMetricsPlusBitsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAPAU_GLYPHDATA@@PAPAU_GL.c)
 */

int __fastcall UmfdQueryGlyphMetricsPlusBits(
        struct DHPDEV__ *a1,
        struct _FONTOBJEX *a2,
        unsigned int a3,
        unsigned int a4,
        struct _GLYPHDATA **a5,
        struct _GLYPHBITS **a6)
{
  _BYTE v7[36]; // [esp+0h] [ebp-50h] BYREF
  int v8; // [esp+24h] [ebp-2Ch]
  int v9; // [esp+34h] [ebp-1Ch]

  QueryGlyphMetricsPlusBitsRequest::QueryGlyphMetricsPlusBitsRequest(
    (QueryGlyphMetricsPlusBitsRequest *)v7,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6);
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_DWORD *)(v8 + 20) + 4), (int)v7) >= 0 )
    return v9;
  else
    return -1;
}
