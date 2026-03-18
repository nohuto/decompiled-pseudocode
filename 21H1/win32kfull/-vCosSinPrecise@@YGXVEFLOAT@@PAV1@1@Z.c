/*
 * XREFs of ?vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z @ 0x2156A8
 * Callers:
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     _fraction_c@8 @ 0xEEFAF (_fraction_c@8.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

int __fastcall vCosSinPrecise(_DWORD *a1, int *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  unsigned int i; // ebx
  int *v9; // eax
  _DWORD *v10; // ecx
  int *v11; // ecx
  int result; // eax
  int v13[2]; // [esp+Ch] [ebp-58h] BYREF
  int v14[2]; // [esp+14h] [ebp-50h] BYREF
  int v15; // [esp+1Ch] [ebp-48h] BYREF
  int v16; // [esp+20h] [ebp-44h]
  int v17; // [esp+24h] [ebp-40h] BYREF
  int v18; // [esp+28h] [ebp-3Ch]
  int v19; // [esp+2Ch] [ebp-38h] BYREF
  int v20; // [esp+30h] [ebp-34h]
  int v21; // [esp+34h] [ebp-30h] BYREF
  int v22; // [esp+38h] [ebp-2Ch]
  int v23; // [esp+3Ch] [ebp-28h] BYREF
  int v24; // [esp+40h] [ebp-24h]
  int v25; // [esp+44h] [ebp-20h] BYREF
  int v26; // [esp+48h] [ebp-1Ch]
  int v27; // [esp+4Ch] [ebp-18h] BYREF
  int v28; // [esp+50h] [ebp-14h]
  int *v29; // [esp+54h] [ebp-10h]
  _DWORD *v30; // [esp+58h] [ebp-Ch]
  int v31; // [esp+5Ch] [ebp-8h]
  int v32; // [esp+60h] [ebp-4h]

  v4 = a3;
  v29 = a2;
  v5 = 0;
  v30 = a1;
  v15 = 0;
  v16 = 0;
  v31 = 0;
  v23 = 0;
  v24 = 0;
  if ( a3 >= 0 )
  {
    v32 = 0;
  }
  else
  {
    v32 = 1;
    EFLOAT::vNegate((EFLOAT *)&a3);
    v4 = a3;
  }
  v27 = v4;
  v28 = a4;
  divff3_c(&v27, &v27, _FP_360_0);
  fraction_c(&v15, &v27);
  a3 = v15;
  a4 = v16;
  mulff3_c(&a3, &a3, _FP_360_0);
  v27 = _FP_180_0;
  v28 = *((_DWORD *)&_FP_180_0 + 1);
  subff3_c(&v27, &v27, &a3);
  if ( v27 < 0 )
  {
    v5 = 1;
    v27 = _FP_360_0;
    v28 = *((_DWORD *)&_FP_360_0 + 1);
    subff3_c(&v27, &v27, &a3);
    a3 = v27;
    a4 = v28;
  }
  v27 = _FP_90_0[0];
  v28 = _FP_90_0[1];
  subff3_c(&v27, &v27, &a3);
  if ( v27 >= 0 )
  {
    v7 = a4;
    v6 = a3;
  }
  else
  {
    v31 = 1;
    v27 = _FP_180_0;
    v28 = *((_DWORD *)&_FP_180_0 + 1);
    subff3_c(&v27, &v27, &a3);
    v6 = v27;
    v7 = v28;
    a3 = v27;
    a4 = v28;
  }
  v25 = v6;
  v26 = v7;
  mulff3_c(&v25, &v25, _FP_PI);
  divff3_c(&v25, &v25, _FP_180_0);
  v19 = _FP_1_0[0];
  v20 = _FP_1_0[1];
  v17 = v25;
  v18 = v26;
  v14[0] = _FP_2_0[0];
  v14[1] = _FP_2_0[1];
  v13[0] = _FP_2_0[0];
  v13[1] = _FP_2_0[1];
  v21 = v25;
  v22 = v26;
  for ( i = 2; i < 0xD; ++i )
  {
    mulff3_c(&v21, &v21, &v25);
    v23 = v21;
    v24 = v22;
    divff3_c(&v23, &v23, v13);
    if ( (i & 2) != 0 )
      EFLOAT::vNegate((EFLOAT *)&v23);
    v9 = &v17;
    if ( (i & 1) == 0 )
      v9 = &v19;
    addff3_c(v9, v9, &v23);
    addff3_c(v14, v14, (int *)_FP_1_0[0]);
    mulff3_c(v13, v13, v14);
  }
  if ( !v32 )
  {
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( !v5 )
LABEL_19:
    EFLOAT::vNegate((EFLOAT *)&v17);
LABEL_20:
  if ( v31 )
    EFLOAT::vNegate((EFLOAT *)&v19);
  v10 = v30;
  *v30 = v19;
  v10[1] = v20;
  v11 = v29;
  *v29 = v17;
  result = v18;
  v11[1] = v18;
  return result;
}
