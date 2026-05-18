/*
 * XREFs of sub_1800D8BD8 @ 0x1800D8BD8
 * Callers:
 *     sub_1800D81C4 @ 0x1800D81C4 (sub_1800D81C4.c)
 *     sub_1800D827C @ 0x1800D827C (sub_1800D827C.c)
 * Callees:
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int128 *__fastcall sub_1800D8BD8(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // xmm6_8
  __int64 v7; // xmm7_8
  __int128 *result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]

  v2 = *a1;
  v5 = a1[1];
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 15LL;
  *(_BYTE *)a1 = 0;
  v6 = *((_QWORD *)a1 + 4);
  v7 = *((_QWORD *)a1 + 5);
  v15 = v6;
  v16 = v7;
  v13 = v2;
  v14 = v5;
  if ( a1 != a2 )
    sub_180020E1C(a1, (__int64)a2);
  *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a1 + 5) = *((_QWORD *)a2 + 5);
  result = &v13;
  if ( a2 != &v13 )
  {
    result = (__int128 *)sub_180020E1C(a2, (__int64)&v13);
    v7 = v16;
    v6 = v15;
  }
  v9 = *((_QWORD *)&v14 + 1);
  *((_QWORD *)a2 + 4) = v6;
  *((_QWORD *)a2 + 5) = v7;
  if ( v9 >= 0x10 )
  {
    v10 = v13;
    v11 = v9 + 1;
    if ( v11 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v13 - 8);
      v12 = v11 + 39;
      if ( (unsigned __int64)(v13 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v12);
        __debugbreak();
      }
    }
    return (__int128 *)j_j__o_free(v10);
  }
  return result;
}
