/*
 * XREFs of sub_180018DD8 @ 0x180018DD8
 * Callers:
 *     sub_18001802C @ 0x18001802C (sub_18001802C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180018BEC @ 0x180018BEC (sub_180018BEC.c)
 *     sub_180018D3C @ 0x180018D3C (sub_180018D3C.c)
 */

__int64 __fastcall sub_180018DD8(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = *(unsigned int *)(a1 + 52);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x20 )
        goto LABEL_8;
      v8 *= 32LL;
    }
    if ( ~v8 >= 8 )
    {
      v9 = (_QWORD *)o_malloc(v8 + 8);
      v10 = v9;
      if ( !v9 )
        goto LABEL_18;
      *v9 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v9;
LABEL_9:
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 52);
        for ( i = &v10[4 * (unsigned int)(v11 - 1) + 1]; --v11 >= 0; i -= 4 )
        {
          i[2] = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = i;
        }
        goto LABEL_13;
      }
LABEL_18:
      sub_18000A174(-2147024882);
    }
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    sub_18000A174(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 16);
  *(_QWORD *)v13 = *a2;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = sub_180018D3C(a1, v14);
    sub_180018BEC(a1, v15);
  }
  return v13;
}
