/*
 * XREFs of sub_180034D48 @ 0x180034D48
 * Callers:
 *     sub_180030270 @ 0x180030270 (sub_180030270.c)
 * Callees:
 *     sub_180034BB0 @ 0x180034BB0 (sub_180034BB0.c)
 *     sub_180034CB4 @ 0x180034CB4 (sub_180034CB4.c)
 */

__int64 __fastcall sub_180034D48(__int64 a1, __int64 *a2, unsigned int a3, int a4, _QWORD *a5)
{
  __int64 v6; // rbp
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 result; // rax
  int v13; // edx
  _QWORD *i; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax

  v6 = a3;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v9 = 40LL * *(unsigned int *)(a1 + 60);
    if ( is_mul_ok(*(unsigned int *)(a1 + 60), 0x28uLL) && v9 + 8 >= v9 )
    {
      v10 = (_QWORD *)_o_malloc(v9 + 8);
      v11 = v10;
      if ( !v10 )
        return 2147942414LL;
      *v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v10;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
      return 2147942414LL;
    v13 = *(_DWORD *)(a1 + 60);
    for ( i = &v11[4 * (v13 - 1) + 1 + (unsigned int)(v13 - 1)]; --v13 >= 0; i -= 5 )
    {
      i[3] = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = i;
    }
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( !v15 )
    return 2147549183LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v15 + 24);
  v16 = *a2;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_QWORD *)v15 = v16;
  *(_BYTE *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 32) = a4;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = v15;
  v17 = *(_QWORD *)(a1 + 16);
  if ( v17 <= *(_QWORD *)(a1 + 40)
    || *(_DWORD *)(a1 + 56)
    || (v18 = sub_180034CB4(a1, v17), result = sub_180034BB0(a1, v18), (int)result >= 0) )
  {
    *a5 = v15;
    return 0LL;
  }
  return result;
}
