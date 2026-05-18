/*
 * XREFs of sub_180100020 @ 0x180100020
 * Callers:
 *     sub_1800FE67C @ 0x1800FE67C (sub_1800FE67C.c)
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 * Callees:
 *     sub_1800FD6AC @ 0x1800FD6AC (sub_1800FD6AC.c)
 */

unsigned __int64 __fastcall sub_180100020(__int64 *a1, __int64 a2, float **a3)
{
  float v3; // xmm2_4
  float *i; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  _QWORD *v9; // r15
  unsigned __int64 v10; // rsi
  float *v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rbp
  int v14; // edi
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx

  v3 = 0.0;
  a1[17] = a2;
  a1[18] = a2;
  a1[19] = a2 * a2 * a2;
  for ( i = *a3; i != a3[1]; i += 4 )
  {
    v6 = i[1];
    v7 = fmaxf(*i, v3);
    v8 = i[2];
    v3 = fmaxf(v8, fmaxf(v6, v7));
  }
  v9 = a1 + 14;
  v10 = 0LL;
  sub_1800FD6AC(a1 + 14, a2 * a2 * a2);
  v11 = *a3;
  result = ((char *)a3[1] - (char *)*a3) >> 4;
  if ( result )
  {
    v13 = 0LL;
    do
    {
      v14 = (int)o_roundf(v11);
      v16 = (int)o_roundf(v15);
      v13 += 16LL;
      *(_DWORD *)(*v9 + 4 * v10++) = (int)o_roundf(v17) | ((v16 | (v14 << 8)) << 8);
      v11 = *a3;
      result = ((char *)a3[1] - (char *)*a3) >> 4;
    }
    while ( v10 < result );
  }
  return result;
}
