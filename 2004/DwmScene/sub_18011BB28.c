/*
 * XREFs of sub_18011BB28 @ 0x18011BB28
 * Callers:
 *     sub_18011A62C @ 0x18011A62C (sub_18011A62C.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_18011BB28(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *result; // rax

  v3 = a3 + 2;
  v6 = a3[4];
  v8 = (__int64)(a3 + 2);
  if ( (unsigned __int64)a3[5] >= 8 )
    v8 = *v3;
  v9 = 0LL;
  v10 = 0xCBF29CE484222325uLL;
  v11 = 2 * v6;
  if ( v11 )
  {
    do
    {
      v12 = *(unsigned __int8 *)(v9 + v8);
      ++v9;
      v10 = 0x100000001B3LL * (v12 ^ v10);
    }
    while ( v9 < v11 );
  }
  v13 = a1[3];
  v14 = 2 * (v10 & a1[6]);
  if ( *(__int64 **)(v13 + 16 * (v10 & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v13 + 16 * (v10 & a1[6])) == a3 )
    {
      *(_QWORD *)(v13 + 16 * (v10 & a1[6])) = a1[1];
      v13 = a1[3];
      v15 = a1[1];
    }
    else
    {
      v15 = a3[1];
    }
    *(_QWORD *)(v13 + 8 * v14 + 8) = v15;
  }
  else if ( *(__int64 **)(v13 + 16 * (v10 & a1[6])) == a3 )
  {
    *(_QWORD *)(v13 + 16 * (v10 & a1[6])) = *a3;
  }
  v16 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --a1[2];
  sub_18011CB50(v3 + 4);
  unknown_libname_101(v3);
  j_j__o_free(a3);
  result = a2;
  *a2 = v16;
  return result;
}
