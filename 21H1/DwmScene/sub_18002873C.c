/*
 * XREFs of sub_18002873C @ 0x18002873C
 * Callers:
 *     sub_180028910 @ 0x180028910 (sub_180028910.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180028844 @ 0x180028844 (sub_180028844.c)
 *     sub_18002BBF8 @ 0x18002BBF8 (sub_18002BBF8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002873C(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-10h]

  *(_QWORD *)&v9 = a1;
  v10[2] = 0LL;
  v10[3] = 0LL;
  sub_18001CDF8(v10, a3);
  v9 = *a2;
  v5 = sub_18002BBF8(v11, &v9, v10);
  sub_180028844(a1, v5);
  if ( v12 >= 0x10 )
  {
    v6 = v11[0];
    if ( v12 + 1 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v11[0] - 8LL);
      if ( (unsigned __int64)(v11[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v12 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v7 = *a2;
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 24) = v7;
  return result;
}
