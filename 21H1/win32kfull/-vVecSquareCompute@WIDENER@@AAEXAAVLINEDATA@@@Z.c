/*
 * XREFs of ?vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2377B1
 * Callers:
 *     ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5 (-vAddEndCap@WIDENER@@IAEXXZ.c)
 *     ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0 (-vAddStartCap@WIDENER@@IAEXXZ.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ?efWorldLength@STYLER@@IAE?AVEFLOAT@@VEVECTORFX@@@Z @ 0x23605B (-efWorldLength@STYLER@@IAE-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __thiscall WIDENER::vVecSquareCompute(WIDENER *this, struct LINEDATA *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // [esp+4h] [ebp-28h] BYREF
  int v5[2]; // [esp+Ch] [ebp-20h] BYREF
  int v6[2]; // [esp+14h] [ebp-18h] BYREF
  int v7[2]; // [esp+1Ch] [ebp-10h] BYREF
  int v8; // [esp+24h] [ebp-8h] BYREF
  int v9; // [esp+28h] [ebp-4h]

  v8 = *((_DWORD *)this + 274);
  v9 = *((_DWORD *)this + 275);
  LODWORD(v2) = STYLER::efWorldLength((int)this, &v4, *((_DWORD *)a2 + 10), *((_DWORD *)a2 + 11));
  v5[0] = *(_DWORD *)v2;
  LODWORD(v2) = *(_DWORD *)(v2 + 4);
  v5[1] = v2;
  if ( v5[0] || (_DWORD)v2 )
  {
    divff3_c(&v8, &v8, v5);
  }
  else
  {
    v8 = _FP_0_0[0];
    v9 = _FP_0_0[1];
  }
  LODWORD(v2) = v7;
  ltoef_c(v2, *((_DWORD *)a2 + 10), v7);
  LODWORD(v3) = v6;
  ltoef_c(v3, *((_DWORD *)a2 + 11), v6);
  mulff3_c(v7, v7, &v8);
  mulff3_c(v6, v6, &v8);
  eftol_c(v7, (int *)a2 + 12, 1);
  eftol_c(v6, (int *)a2 + 13, 1);
  *(_DWORD *)a2 |= 2u;
}
