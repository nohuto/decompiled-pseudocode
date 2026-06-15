/*
 * XREFs of sub_1800F0078 @ 0x1800F0078
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800F0384 @ 0x1800F0384 (sub_1800F0384.c)
 *     sub_1800F1548 @ 0x1800F1548 (sub_1800F1548.c)
 */

__int64 __fastcall sub_1800F0078(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = sub_180008EAC(v12);
  v14 = &v13[v6];
  v20 = v14 + 1;
  v15 = *a3;
  *a3 = 0LL;
  *v14 = v15;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_1800F0384(v18, a2, v13);
    v17 = v20;
    v16 = a1[1];
    v18 = a2;
  }
  sub_1800F0384(v18, v16, v17);
  sub_1800F1548(a1, v13, v8, v11, v13);
  return *a1 + 8 * v6;
}
