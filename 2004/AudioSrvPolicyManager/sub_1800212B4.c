/*
 * XREFs of sub_1800212B4 @ 0x1800212B4
 * Callers:
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_180028F50 @ 0x180028F50 (sub_180028F50.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 */

__int64 *__fastcall sub_1800212B4(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v14; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = *(unsigned int *)(a1 + 40);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x18 )
      {
        v10 = 0LL;
        goto LABEL_8;
      }
      v8 *= 24LL;
    }
    v9 = (_QWORD *)o_malloc(v8 + 8);
    v10 = v9;
    if ( !v9 )
      goto LABEL_13;
    *v9 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v9;
LABEL_8:
    if ( v10 )
    {
      v11 = *(_DWORD *)(a1 + 40);
      for ( i = &v10[2 * (v11 - 1) + 1 + (unsigned int)(v11 - 1)]; --v11 >= 0; i -= 3 )
      {
        *i = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 32) = i;
      }
      goto LABEL_12;
    }
LABEL_13:
    sub_18000A174(-2147024882);
  }
LABEL_12:
  result = *(__int64 **)(a1 + 32);
  v14 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v14;
  result[1] = a3;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
