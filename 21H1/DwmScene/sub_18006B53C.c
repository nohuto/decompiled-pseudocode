/*
 * XREFs of sub_18006B53C @ 0x18006B53C
 * Callers:
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023940 @ 0x180023940 (sub_180023940.c)
 * Callees:
 *     sub_18009AD5C @ 0x18009AD5C (sub_18009AD5C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     j_??2@YAPEAX_K@Z @ 0x18011EB80 (j_--2@YAPEAX_K@Z.c)
 */

void *__fastcall sub_18006B53C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
    v7 = (float *)sub_18009AD5C(v4, &v12);
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
