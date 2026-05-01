/*
 * XREFs of sub_180002BC0 @ 0x180002BC0
 * Callers:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_180002BC0(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rbp
  __int64 *v9; // rbx
  __int64 **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 **result; // rax

  v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  while ( a3 != a4 )
  {
    v9 = a3;
    a3 = (__int64 *)*a3;
    v10 = (__int64 **)v9[1];
    *v10 = a3;
    a3[1] = (__int64)v10;
    v11 = *(_QWORD *)(a1 + 16);
    v12 = 2 * (v7 & v9[2]);
    if ( *(__int64 **)(v11 + 16 * (v7 & v9[2])) == v9 )
    {
      if ( *(__int64 **)(v11 + 16 * (v7 & v9[2]) + 8) == v9 )
      {
        *(_QWORD *)(v11 + 16 * (v7 & v9[2]) + 8) = 0LL;
        v13 = 0LL;
      }
      else
      {
        v13 = *v9;
      }
      *(_QWORD *)(v11 + 8 * v12) = v13;
    }
    else if ( *(__int64 **)(v11 + 16 * (v7 & v9[2]) + 8) == v9 )
    {
      *(_QWORD *)(v11 + 16 * (v7 & v9[2]) + 8) = v9[1];
    }
    v14 = v9[4];
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    j_j_free(v9);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}
