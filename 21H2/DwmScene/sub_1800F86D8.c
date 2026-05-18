/*
 * XREFs of sub_1800F86D8 @ 0x1800F86D8
 * Callers:
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F86D8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int64 v14; // [rsp+38h] [rbp-48h]
  _QWORD v15[7]; // [rsp+40h] [rbp-40h] BYREF

  v15[6] = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v15[4] = v12;
  v14 = 15LL;
  v13 = 0LL;
  v12[0] = 0;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_180020B7C(v15, (__int64)a2);
  result = sub_1800F87B8(a1, v15, v4, v12);
  v6 = a2[3];
  if ( v6 >= 0x10 )
  {
    v7 = v6 + 1;
    v8 = *a2;
    if ( v7 >= 0x1000 )
    {
      v9 = v7 + 39;
      v10 = *(_QWORD *)(v8 - 8);
      v11 = v8 - v10;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v9);
        JUMPOUT(0x1800F87B5LL);
      }
      v8 = v10;
    }
    result = j_j__o_free(v8);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
