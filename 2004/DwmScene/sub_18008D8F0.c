/*
 * XREFs of sub_18008D8F0 @ 0x18008D8F0
 * Callers:
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 * Callees:
 *     sub_18008D6CC @ 0x18008D6CC (sub_18008D6CC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008D8F0(__int64 a1, __int64 *a2, __int64 a3, __int128 *a4)
{
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-20h] BYREF

  v15[0] = a1;
  v15[1] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  v14 = *a4;
  v6 = (_QWORD *)(a1 + 40);
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  sub_18008D6CC(v6, &v14, (__int64)v15);
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
        JUMPOUT(0x18008D9DCLL);
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
