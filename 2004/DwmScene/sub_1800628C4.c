/*
 * XREFs of sub_1800628C4 @ 0x1800628C4
 * Callers:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_18002D0E4 @ 0x18002D0E4 (sub_18002D0E4.c)
 *     sub_180039510 @ 0x180039510 (sub_180039510.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18003B700 @ 0x18003B700 (sub_18003B700.c)
 *     sub_180062BC4 @ 0x180062BC4 (sub_180062BC4.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_1800635A8 @ 0x1800635A8 (sub_1800635A8.c)
 *     sub_18006A61C @ 0x18006A61C (sub_18006A61C.c)
 *     sub_18009A9F8 @ 0x18009A9F8 (sub_18009A9F8.c)
 *     sub_18009B450 @ 0x18009B450 (sub_18009B450.c)
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 *     sub_1800B38C0 @ 0x1800B38C0 (sub_1800B38C0.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800C8134 @ 0x1800C8134 (sub_1800C8134.c)
 *     sub_1800C8224 @ 0x1800C8224 (sub_1800C8224.c)
 *     sub_1800C8314 @ 0x1800C8314 (sub_1800C8314.c)
 *     sub_1800C8404 @ 0x1800C8404 (sub_1800C8404.c)
 *     sub_1800C84F4 @ 0x1800C84F4 (sub_1800C84F4.c)
 *     sub_1800C97B8 @ 0x1800C97B8 (sub_1800C97B8.c)
 *     sub_1800CA8A4 @ 0x1800CA8A4 (sub_1800CA8A4.c)
 *     sub_1800CB000 @ 0x1800CB000 (sub_1800CB000.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800D77BC @ 0x1800D77BC (sub_1800D77BC.c)
 *     sub_1800D8398 @ 0x1800D8398 (sub_1800D8398.c)
 *     sub_1800F4C70 @ 0x1800F4C70 (sub_1800F4C70.c)
 *     sub_1800F50F0 @ 0x1800F50F0 (sub_1800F50F0.c)
 *     sub_1800F5370 @ 0x1800F5370 (sub_1800F5370.c)
 *     sub_1800F55C0 @ 0x1800F55C0 (sub_1800F55C0.c)
 *     sub_1800FA430 @ 0x1800FA430 (sub_1800FA430.c)
 *     sub_1800FAFA0 @ 0x1800FAFA0 (sub_1800FAFA0.c)
 *     sub_1800FB0F8 @ 0x1800FB0F8 (sub_1800FB0F8.c)
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 *     sub_1800FE1B4 @ 0x1800FE1B4 (sub_1800FE1B4.c)
 *     sub_180109924 @ 0x180109924 (sub_180109924.c)
 *     sub_18010D020 @ 0x18010D020 (sub_18010D020.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800628C4(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  result = sub_180012E34((__int64 *)(a1 + 8), a2);
  v4 = a2[3];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = *a2;
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x18006294ALL);
      }
      v6 = v8;
    }
    result = (__int64 *)j_j__o_free(v6);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
