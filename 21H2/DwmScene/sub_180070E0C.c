/*
 * XREFs of sub_180070E0C @ 0x180070E0C
 * Callers:
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180029210 @ 0x180029210 (sub_180029210.c)
 * Callees:
 *     sub_1800A062C @ 0x1800A062C (sub_1800A062C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     j_??2@YAPEAX_K@Z @ 0x180124450 (j_--2@YAPEAX_K@Z.c)
 */

void *__fastcall sub_180070E0C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rcx
  float *v7; // rax
  void *v8; // rcx
  int v9; // esi
  int v10; // ebp
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v4 = *(_QWORD *)(a3 + 136);
  if ( v4 )
  {
    v7 = (float *)sub_1800A062C(v4, &v12);
  }
  else
  {
    v12 = 0;
    v7 = (float *)&v12;
    v13 = 0;
  }
  v8 = *(void **)a2;
  v9 = (int)*v7;
  v10 = (int)v7[1];
  if ( !*(_QWORD *)a2
    || a4 != *(_DWORD *)(a2 + 16)
    || v9 != *(_DWORD *)(a2 + 8)
    || v10 != *(_DWORD *)(a2 + 12)
    || *(_DWORD *)(a2 + 20) != 1 )
  {
    j_j__o_free(v8);
    v8 = operator new(a4);
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 8) = v9;
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(a2 + 16) = a4;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return v8;
}
