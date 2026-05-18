/*
 * XREFs of sub_18002E1E0 @ 0x18002E1E0
 * Callers:
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_1800315C8 @ 0x1800315C8 (sub_1800315C8.c)
 * Callees:
 *     sub_18002E00C @ 0x18002E00C (sub_18002E00C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002E1E0(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  *(_QWORD *)&v5 = a1;
  v7 = 15LL;
  v6[2] = 0LL;
  LOBYTE(v6[0]) = 0;
  v5 = *a2;
  sub_18002E00C((__int64)a1, &v5, (__int64)v6);
  if ( v7 >= 0x10 )
  {
    v3 = v6[0];
    if ( v7 + 1 >= 0x1000 )
    {
      v3 = *(_QWORD *)(v6[0] - 8LL);
      if ( (unsigned __int64)(v6[0] - v3 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v3, v7 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v3);
  }
  *a1 = &std::system_error::`vftable';
  return a1;
}
