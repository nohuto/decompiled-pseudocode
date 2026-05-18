/*
 * XREFs of sub_18009341C @ 0x18009341C
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_180094AE8 @ 0x180094AE8 (sub_180094AE8.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 * Callees:
 *     sub_180092F9C @ 0x180092F9C (sub_180092F9C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009341C(__int64 a1, __int64 *a2, __int64 a3, float a4)
{
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  float v14; // [rsp+24h] [rbp-24h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-20h] BYREF

  v15[0] = a1;
  v15[1] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 2;
  v14 = a4;
  v6 = (_QWORD *)(a1 + 40);
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  sub_180092F9C(v6, &v14, (__int64)v15);
  v7 = a2[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a2;
    if ( v8 >= 0x1000 )
    {
      v10 = v8 + 39;
      v11 = *(_QWORD *)(v9 - 8);
      v12 = v9 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x180093505LL);
      }
      v9 = v11;
    }
    j_j__o_free(v9);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
