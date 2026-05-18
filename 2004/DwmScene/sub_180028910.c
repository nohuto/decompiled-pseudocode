/*
 * XREFs of sub_180028910 @ 0x180028910
 * Callers:
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 *     sub_18002BCF8 @ 0x18002BCF8 (sub_18002BCF8.c)
 * Callees:
 *     sub_18002873C @ 0x18002873C (sub_18002873C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180028910(_QWORD *a1, __int128 *a2)
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
  sub_18002873C((__int64)a1, &v5, (__int64)v6);
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
