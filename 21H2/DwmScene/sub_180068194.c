/*
 * XREFs of sub_180068194 @ 0x180068194
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_180032554 @ 0x180032554 (sub_180032554.c)
 *     sub_1800329B4 @ 0x1800329B4 (sub_1800329B4.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_180040FD0 @ 0x180040FD0 (sub_180040FD0.c)
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_180068E78 @ 0x180068E78 (sub_180068E78.c)
 *     sub_18006FEEC @ 0x18006FEEC (sub_18006FEEC.c)
 *     sub_1800A02C8 @ 0x1800A02C8 (sub_1800A02C8.c)
 *     sub_1800A0D20 @ 0x1800A0D20 (sub_1800A0D20.c)
 *     sub_1800ADA20 @ 0x1800ADA20 (sub_1800ADA20.c)
 *     sub_1800B9190 @ 0x1800B9190 (sub_1800B9190.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800CDA04 @ 0x1800CDA04 (sub_1800CDA04.c)
 *     sub_1800CDAF4 @ 0x1800CDAF4 (sub_1800CDAF4.c)
 *     sub_1800CDBE4 @ 0x1800CDBE4 (sub_1800CDBE4.c)
 *     sub_1800CDCD4 @ 0x1800CDCD4 (sub_1800CDCD4.c)
 *     sub_1800CDDC4 @ 0x1800CDDC4 (sub_1800CDDC4.c)
 *     sub_1800CF088 @ 0x1800CF088 (sub_1800CF088.c)
 *     sub_1800D0174 @ 0x1800D0174 (sub_1800D0174.c)
 *     sub_1800D08D0 @ 0x1800D08D0 (sub_1800D08D0.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_1800FA540 @ 0x1800FA540 (sub_1800FA540.c)
 *     sub_1800FA9C0 @ 0x1800FA9C0 (sub_1800FA9C0.c)
 *     sub_1800FAC40 @ 0x1800FAC40 (sub_1800FAC40.c)
 *     sub_1800FAE90 @ 0x1800FAE90 (sub_1800FAE90.c)
 *     sub_1800FFD00 @ 0x1800FFD00 (sub_1800FFD00.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 *     sub_1801009C8 @ 0x1801009C8 (sub_1801009C8.c)
 *     sub_180100AA0 @ 0x180100AA0 (sub_180100AA0.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 *     sub_18010F1F4 @ 0x18010F1F4 (sub_18010F1F4.c)
 *     sub_1801128F0 @ 0x1801128F0 (sub_1801128F0.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180068194(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  result = sub_180012F14((__int64 *)(a1 + 8), a2);
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
        JUMPOUT(0x18006821ALL);
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
