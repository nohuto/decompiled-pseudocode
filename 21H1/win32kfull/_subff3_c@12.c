/*
 * XREFs of _subff3_c@12 @ 0xEF05B
 * Callers:
 *     ?efHalfDiff@@YG?AVEFLOAT@@JJ@Z @ 0x22EA2 (-efHalfDiff@@YG-AVEFLOAT@@JJ@Z.c)
 *     _FLOATOBJ_Sub@8 @ 0xF6FBA (_FLOATOBJ_Sub@8.c)
 *     ?bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z @ 0x1EA00C (-bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z.c)
 *     _FLOATOBJ_SubFloat@8 @ 0x1F3294 (_FLOATOBJ_SubFloat@8.c)
 *     _FLOATOBJ_SubLong@8 @ 0x1F32C7 (_FLOATOBJ_SubLong@8.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     ??ZEPOINTFL@@QAEXAAV0@@Z @ 0x214AAD (--ZEPOINTFL@@QAEXAAV0@@Z.c)
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 *     ?vCosSin@@YGXVEFLOAT@@PAV1@1@Z @ 0x2154BB (-vCosSin@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     ?vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z @ 0x2156A8 (-vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 *     ?bWorldMatrixInRange@@YGHPAVMATRIX@@@Z @ 0x21CA52 (-bWorldMatrixInRange@@YGHPAVMATRIX@@@Z.c)
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 * Callees:
 *     _addff@0 @ 0xEEFF5 (_addff@0.c)
 */

int *__stdcall subff3_c(int *a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  char v5; // of

  v3 = addff(-*a3, *a2, a3[1], a2[1]);
  if ( !v5 )
  {
    *a1 = v3;
    a1[1] = v4;
  }
  return a1;
}
