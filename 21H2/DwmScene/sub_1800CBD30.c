/*
 * XREFs of sub_1800CBD30 @ 0x1800CBD30
 * Callers:
 *     sub_18012D11B @ 0x18012D11B (sub_18012D11B.c)
 *     sub_18012D16A @ 0x18012D16A (sub_18012D16A.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_1800CBD30(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r10
  __int64 v6; // rdx
  __int64 v8; // r11
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
  unknown_libname_103(v3);
  j_j__o_free(a3);
  result = a2;
  *a2 = v16;
  return result;
}
