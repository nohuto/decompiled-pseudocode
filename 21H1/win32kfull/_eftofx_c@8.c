/*
 * XREFs of _eftofx_c@8 @ 0xEEF3A
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 * Callees:
 *     _eftol@0 @ 0xEEEF0 (_eftol@0.c)
 */

BOOL __stdcall eftofx_c(int *a1, int *a2)
{
  char v2; // of

  *a2 = eftol(*a1, 1, a1[1] + 4);
  return !v2;
}
