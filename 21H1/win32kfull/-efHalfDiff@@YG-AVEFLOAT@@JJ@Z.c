/*
 * XREFs of ?efHalfDiff@@YG?AVEFLOAT@@JJ@Z @ 0x22EA2
 * Callers:
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 */

__int64 __fastcall efHalfDiff(int a1, int a2)
{
  unsigned __int8 v2; // di
  unsigned __int8 v3; // bl
  __int64 v5; // [esp+10h] [ebp-8h] BYREF

  v2 = a2;
  v3 = a1;
  ltoef_c((a1 >> 1) - (a2 >> 1), &v5);
  if ( ((v2 ^ v3) & 1) != 0 )
  {
    if ( (v3 & 1) != 0 )
      addff3_c(&v5, &v5, _FP_0_5);
    else
      subff3_c(&v5, &v5, _FP_0_5);
  }
  return v5;
}
