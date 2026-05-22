/*
 * XREFs of ST::mult_AB_3x3x3_float_ @ 0x1801A53EC
 * Callers:
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A51CC (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 * Callees:
 *     ST::mult_Atx_3x3_float_ @ 0x1801A5464 (ST--mult_Atx_3x3_float_.c)
 */

__int64 __fastcall ST::mult_AB_3x3x3_float_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx

  v3 = ST::mult_Atx_3x3_float_(a1, a3, a2, a1);
  v7 = ST::mult_Atx_3x3_float_(v4 + 12, v5, v3 + 12, v6);
  return ST::mult_Atx_3x3_float_(v8 + 24, v9, v7 + 24, v8);
}
