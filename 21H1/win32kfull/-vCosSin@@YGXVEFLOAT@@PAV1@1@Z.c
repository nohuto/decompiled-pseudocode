/*
 * XREFs of ?vCosSin@@YGXVEFLOAT@@PAV1@1@Z @ 0x2154BB
 * Callers:
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _fraction_c@8 @ 0xEEFAF (_fraction_c@8.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __fastcall vCosSin(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v6; // esi
  int v7; // ebx
  int v8; // edx
  int v9; // esi
  int *v10; // eax
  _DWORD *v11; // ecx
  char v12; // bl
  int v13; // esi
  int v14; // ebx
  int *v15; // eax
  _DWORD *v16; // ecx
  int result; // eax
  int v18[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-18h] BYREF
  int v20; // [esp+1Ch] [ebp-10h] BYREF
  int v21; // [esp+20h] [ebp-Ch]
  _DWORD *v22; // [esp+24h] [ebp-8h]
  _DWORD *v23; // [esp+28h] [ebp-4h]

  v4 = a3;
  v5 = 0;
  v23 = a2;
  v6 = 0;
  v22 = a1;
  if ( a3 >= 0 )
  {
    v6 = 1;
  }
  else
  {
    v5 = 1;
    EFLOAT::vNegate((EFLOAT *)&a3);
    v4 = a3;
  }
  v18[0] = v4;
  v18[1] = a4;
  mulff3_c(v18, v18, _FP_SINE_FACTOR);
  a4 = 0;
  eftol_c(v18, &a4, 0);
  v19[0] = 0;
  v19[1] = 0;
  fraction_c(v19, v18);
  v7 = a4 >> 5;
  if ( ((a4 >> 5) & 2) != 0 )
    v5 = v6;
  v8 = a4 & 0x1F;
  if ( (v7 & 1) != 0 )
  {
    v9 = 32 - v8;
    v20 = _gaefSin[2 * (32 - v8)];
    v21 = _gaefSin[2 * (32 - v8) + 1];
    subff3_c(&v20, &v20, &_gaefSin[2 * (32 - v8) - 2]);
    mulff3_c(&v20, &v20, v19);
    EFLOAT::vNegate((EFLOAT *)&v20);
    v10 = &_gaefSin[2 * v9];
  }
  else
  {
    a4 &= 0x1Fu;
    v20 = _gaefSin[2 * v8 + 2];
    v21 = _gaefSin[2 * v8 + 3];
    subff3_c(&v20, &v20, &_gaefSin[2 * v8]);
    mulff3_c(&v20, &v20, v19);
    v10 = &_gaefSin[2 * a4];
  }
  addff3_c(&v20, &v20, v10);
  if ( v5 )
    EFLOAT::vNegate((EFLOAT *)&v20);
  v11 = v23;
  v12 = v7 + 1;
  v13 = v12 & 2;
  *v23 = v20;
  v11[1] = v21;
  if ( (v12 & 1) != 0 )
  {
    v14 = 32 - (a4 & 0x1F);
    v20 = _gaefSin[2 * v14];
    v21 = _gaefSin[2 * v14 + 1];
    subff3_c(&v20, &v20, &_gaefSin[2 * v14 - 2]);
    mulff3_c(&v20, &v20, v19);
    EFLOAT::vNegate((EFLOAT *)&v20);
    v15 = &_gaefSin[2 * v14];
  }
  else
  {
    a4 &= 0x1Fu;
    v20 = _gaefSin[2 * a4 + 2];
    v21 = _gaefSin[2 * a4 + 3];
    subff3_c(&v20, &v20, &_gaefSin[2 * a4]);
    mulff3_c(&v20, &v20, v19);
    v15 = &_gaefSin[2 * a4];
  }
  addff3_c(&v20, &v20, v15);
  if ( v13 )
    EFLOAT::vNegate((EFLOAT *)&v20);
  v16 = v22;
  *v22 = v20;
  result = v21;
  v16[1] = v21;
  return result;
}
