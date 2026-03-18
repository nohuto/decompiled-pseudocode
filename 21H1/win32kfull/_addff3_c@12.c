/*
 * XREFs of _addff3_c@12 @ 0xEF0B5
 * Callers:
 *     ?efHalfDiff@@YG?AVEFLOAT@@JJ@Z @ 0x22EA2 (-efHalfDiff@@YG-AVEFLOAT@@JJ@Z.c)
 *     ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A (-lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z.c)
 *     _FLOATOBJ_Add@8 @ 0xF6F66 (_FLOATOBJ_Add@8.c)
 *     ?bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z @ 0x1EA00C (-bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z.c)
 *     _FLOATOBJ_AddFloat@8 @ 0x1F3001 (_FLOATOBJ_AddFloat@8.c)
 *     _FLOATOBJ_AddLong@8 @ 0x1F3034 (_FLOATOBJ_AddLong@8.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     ??YEPOINTFL@@QAEXAAV0@@Z @ 0x214A85 (--YEPOINTFL@@QAEXAAV0@@Z.c)
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 *     ?efHalf@@YG?AVEFLOAT@@K@Z @ 0x21522E (-efHalf@@YG-AVEFLOAT@@K@Z.c)
 *     ?ptlXform@EBOX@@QAE?AU_POINTL@@AAVEPOINTFL@@@Z @ 0x215265 (-ptlXform@EBOX@@QAE-AU_POINTL@@AAVEPOINTFL@@@Z.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 *     ?vCosSin@@YGXVEFLOAT@@PAV1@1@Z @ 0x2154BB (-vCosSin@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     ?vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z @ 0x2156A8 (-vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 *     ?vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z @ 0x2252AD (-vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z.c)
 *     ?bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z @ 0x234D9E (-bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z.c)
 *     ?bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z @ 0x235446 (-bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z.c)
 *     ?efWorldLength@STYLER@@IAE?AVEFLOAT@@VEVECTORFX@@@Z @ 0x23605B (-efWorldLength@STYLER@@IAE-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 * Callees:
 *     _addff@0 @ 0xEEFF5 (_addff@0.c)
 */

int *__stdcall addff3_c(int *a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // ecx
  char v5; // of

  v3 = addff(*a2, *a3, a2[1], a3[1]);
  if ( !v5 )
  {
    *a1 = v3;
    a1[1] = v4;
  }
  return a1;
}
