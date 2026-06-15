/*
 * XREFs of sub_1800059AC @ 0x1800059AC
 * Callers:
 *     sub_1800055B0 @ 0x1800055B0 (sub_1800055B0.c)
 *     sub_1800CA2FC @ 0x1800CA2FC (sub_1800CA2FC.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     sub_1800C60C8 @ 0x1800C60C8 (sub_1800C60C8.c)
 */

__int64 __fastcall sub_1800059AC(SIZE_T *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]

  v6 = (__int64)((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v22 = 8 * v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 >= 0x1000 )
  {
    v19 = v12 + 39;
    if ( v12 + 39 < v12 )
      v19 = -1LL;
    v20 = sub_180055F40(v19);
    if ( !v20 )
    {
      o__invalid_parameter_noinfo_noreturn();
      goto LABEL_23;
    }
    v12 = (v20 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v12 - 8) = v20;
  }
  else if ( v12 )
  {
    ProcessHeap = GetProcessHeap();
    v12 = (SIZE_T)HeapAlloc(ProcessHeap, 0, v12);
  }
  v6 = v12 + 8 * v6;
  v14 = *a3;
  *a3 = 0LL;
  *(_QWORD *)v6 = v14;
  v15 = (__int64 *)a1[1];
  v16 = (__int64 *)*a1;
  if ( a2 == v15 )
  {
    v17 = (_QWORD *)v12;
    while ( v16 != v15 )
    {
LABEL_23:
      v21 = *v16;
      *v16 = 0LL;
      *v17++ = v21;
      ++v16;
    }
  }
  else
  {
    sub_1800C60C8(v16, a2, v12);
    sub_1800C60C8(a2, a1[1], v6 + 8);
  }
  if ( *a1 )
  {
    sub_1800583E4(*a1, a1[1]);
    sub_1800472E0(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = v12 + 8 * v8;
  a1[2] = v12 + v22;
  return v6;
}
