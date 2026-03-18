/*
 * XREFs of ?ptfxFraction@@YG?AU_POINTFIX@@U1@PAVLINEDATA@@AAVEFLOAT@@2@Z @ 0x2360E3
 * Callers:
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

FIX __userpurge ptfxFraction@<eax>(
        __int64 a1@<edx:eax>,
        _DWORD *a2@<ecx>,
        struct _POINTFIX a3,
        struct LINEDATA *a4,
        struct EFLOAT *a5,
        struct EFLOAT *a6)
{
  __int64 v8; // rax
  _DWORD *v9; // [esp+Ch] [ebp-30h]
  int v10; // [esp+14h] [ebp-28h] BYREF
  int v11; // [esp+18h] [ebp-24h] BYREF
  int v12[2]; // [esp+1Ch] [ebp-20h] BYREF
  int v13[2]; // [esp+24h] [ebp-18h] BYREF
  int v14[2]; // [esp+2Ch] [ebp-10h] BYREF

  LODWORD(a1) = a3.x;
  v9 = (_DWORD *)HIDWORD(a1);
  if ( !*(_QWORD *)a3.x )
    return a3.y;
  if ( (*(_BYTE *)a2 & 0x10) == 0 )
  {
    LODWORD(v8) = ltoef_c(a1, a2[8], a2 + 18);
    ltoef_c(v8, a2[9], a2 + 20);
    v12[0] = _FP_1_0[0];
    v12[1] = _FP_1_0[1];
    divff3_c(v12, v12, (int *)a3.x);
    mulff3_c(a2 + 18, a2 + 18, v12);
    mulff3_c(a2 + 20, a2 + 20, v12);
    *a2 |= 0x10u;
  }
  v13[0] = a2[18];
  v13[1] = a2[19];
  v14[0] = a2[20];
  v14[1] = a2[21];
  mulff3_c(v13, v13, v9);
  mulff3_c(v14, v14, v9);
  v11 = 0;
  v10 = 0;
  eftol_c(v13, &v11, 1);
  eftol_c(v14, &v10, 1);
  return a3.y + v11;
}
