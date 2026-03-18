/*
 * XREFs of ?efWorldLength@STYLER@@IAE?AVEFLOAT@@VEVECTORFX@@@Z @ 0x23605B
 * Callers:
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 *     ?vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2377B1 (-vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _sqrtf2_c@8 @ 0xEF21B (_sqrtf2_c@8.c)
 */

int *__thiscall STYLER::efWorldLength(int this, int *a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7[2]; // [esp+4h] [ebp-8h] BYREF

  EXFORMOBJ::bXform((EXFORMOBJ *)(this + 808), (struct _VECTORFX *)&a3, (struct _VECTORL *)&a3, 1u);
  LODWORD(v4) = 0;
  v7[0] = 0;
  v7[1] = 0;
  *a2 = 0;
  a2[1] = 0;
  if ( a3 || a4 )
  {
    ltoef_c(v4, a3, a2);
    LODWORD(v5) = v7;
    ltoef_c(v5, a4, v7);
    mulff3_c(a2, a2, a2);
    mulff3_c(v7, v7, v7);
    addff3_c(a2, a2, v7);
    sqrtf2_c(a2, (unsigned int *)a2);
  }
  else
  {
    *a2 = _FP_0_0[0];
    a2[1] = _FP_0_0[1];
  }
  return a2;
}
