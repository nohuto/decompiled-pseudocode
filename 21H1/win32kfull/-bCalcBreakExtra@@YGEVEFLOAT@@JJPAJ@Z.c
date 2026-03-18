/*
 * XREFs of ?bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z @ 0xE29E4
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z @ 0x87CA4 (-vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z @ 0x2249F0 (-vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

bool __fastcall bCalcBreakExtra(int a1, int a2, int *a3, int a4, int a5)
{
  bool result; // al
  int v7; // eax

  result = 0;
  if ( a1 )
  {
    v7 = lCvt(a4, a5, a1);
    if ( !SafeDivide<long,long,long>(v7, a2, a3) )
      return 1;
  }
  return result;
}
