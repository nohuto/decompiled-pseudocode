/*
 * XREFs of sub_1800A0C9C @ 0x1800A0C9C
 * Callers:
 *     sub_180019A10 @ 0x180019A10 (sub_180019A10.c)
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800BF42C @ 0x1800BF42C (sub_1800BF42C.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800F4C70 @ 0x1800F4C70 (sub_1800F4C70.c)
 *     sub_18010D020 @ 0x18010D020 (sub_18010D020.c)
 * Callees:
 *     sub_18009E2F8 @ 0x18009E2F8 (sub_18009E2F8.c)
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A0C9C(__int64 a1, _QWORD *a2, size_t *a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  size_t v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  size_t v13; // rcx
  _QWORD *result; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+28h] [rbp-40h] BYREF

  v16[2] = a3;
  v15 = 0LL;
  v5 = (__int64 *)(a1 + 18560);
  sub_1800A1C7C(a1 + 18560, &v15, a3);
  if ( v15 == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18009E2F8(v5, (__int64)v16, a3);
    v6 = v16[0];
    *a2 = 0LL;
    a2[1] = 0LL;
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *a2 = *(_QWORD *)(v6 + 64);
    a2[1] = *(_QWORD *)(v6 + 72);
  }
  v8 = a3[3];
  if ( v8 >= 0x10 )
  {
    v9 = v8 + 1;
    v10 = *a3;
    if ( v9 >= 0x1000 )
    {
      v11 = v9 + 39;
      v12 = *(_QWORD *)(v10 - 8);
      v13 = v10 - v12;
      if ( v13 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v11);
        JUMPOUT(0x1800A0D90LL);
      }
      v10 = v12;
    }
    j_j__o_free(v10);
  }
  result = a2;
  *(_BYTE *)a3 = 0;
  a3[3] = 15LL;
  a3[2] = 0LL;
  return result;
}
