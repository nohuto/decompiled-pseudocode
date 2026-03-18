/*
 * XREFs of _fxtoef_c@8 @ 0xEEE93
 * Callers:
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 * Callees:
 *     _dNormalize@0 @ 0xEEE14 (_dNormalize@0.c)
 */

int __userpurge fxtoef_c@<eax>(__int64 a1@<edx:eax>, int a2, int *a3)
{
  int result; // eax
  int v4; // ecx
  char v5; // zf

  LODWORD(a1) = a2;
  result = dNormalize(a1);
  if ( !v5 )
    v4 = 28 - v4;
  *a3 = result;
  a3[1] = v4;
  return result;
}
