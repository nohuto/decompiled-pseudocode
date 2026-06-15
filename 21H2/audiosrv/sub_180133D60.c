/*
 * XREFs of sub_180133D60 @ 0x180133D60
 * Callers:
 *     sub_180135100 @ 0x180135100 (sub_180135100.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1801340B0 @ 0x1801340B0 (sub_1801340B0.c)
 *     sub_180137A1C @ 0x180137A1C (sub_180137A1C.c)
 */

unsigned __int64 __fastcall sub_180133D60(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // r14
  unsigned __int64 v14; // rsi
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 32 * v11;
  if ( v11 > 0x7FFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = sub_180008EAC(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFE0uLL;
  v15 = (char *)v13 + v14;
  *((_QWORD *)v15 + 2) = 0LL;
  *((_QWORD *)v15 + 3) = 0LL;
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  v16 = a1[1];
  v17 = (__int64)v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_1801340B0(v18, a2, v13);
    v17 = (__int64)v13 + v14 + 32;
    v16 = a1[1];
    v18 = a2;
  }
  sub_1801340B0(v18, v16, v17);
  sub_180137A1C(a1, v13, v8, v11, v13);
  return v14 + *a1;
}
