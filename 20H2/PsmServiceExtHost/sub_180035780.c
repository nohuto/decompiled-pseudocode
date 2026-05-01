/*
 * XREFs of sub_180035780 @ 0x180035780
 * Callers:
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 */

__int64 **__fastcall sub_180035780(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
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
    j_j_free(v9);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}
