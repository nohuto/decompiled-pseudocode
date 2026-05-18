/*
 * XREFs of sub_18010B678 @ 0x18010B678
 * Callers:
 *     sub_1801078A4 @ 0x1801078A4 (sub_1801078A4.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_18010B678(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 i; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 *result; // rax

  v3 = a3 + 2;
  v7 = (__int64)(a3 + 2);
  if ( (unsigned __int64)a3[5] >= 0x10 )
    v7 = *v3;
  v8 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v8 < v3[2]; i = 0x100000001B3LL * (v10 ^ i) )
  {
    v10 = *(unsigned __int8 *)(v8 + v7);
    ++v8;
  }
  v11 = a1[3];
  v12 = 2 * (i & a1[6]);
  if ( *(__int64 **)(v11 + 16 * (i & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v11 + 16 * (i & a1[6])) == a3 )
    {
      *(_QWORD *)(v11 + 16 * (i & a1[6])) = a1[1];
      v11 = a1[3];
      v13 = a1[1];
    }
    else
    {
      v13 = a3[1];
    }
    *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
  }
  else if ( *(__int64 **)(v11 + 16 * (i & a1[6])) == a3 )
  {
    *(_QWORD *)(v11 + 16 * (i & a1[6])) = *a3;
  }
  v14 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --a1[2];
  sub_180065AF4(v3, 0);
  j_j__o_free(a3);
  result = a2;
  *a2 = v14;
  return result;
}
