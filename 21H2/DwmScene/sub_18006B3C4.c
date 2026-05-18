/*
 * XREFs of sub_18006B3C4 @ 0x18006B3C4
 * Callers:
 *     sub_180069F50 @ 0x180069F50 (sub_180069F50.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006A094 @ 0x18006A094 (sub_18006A094.c)
 *     sub_18006A0F0 @ 0x18006A0F0 (sub_18006A0F0.c)
 *     sub_18006A434 @ 0x18006A434 (sub_18006A434.c)
 *     sub_18006D37C @ 0x18006D37C (sub_18006D37C.c)
 *     sub_18006D608 @ 0x18006D608 (sub_18006D608.c)
 *     sub_180072774 @ 0x180072774 (sub_180072774.c)
 *     sub_180072990 @ 0x180072990 (sub_180072990.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A20BC @ 0x1800A20BC (sub_1800A20BC.c)
 *     sub_1800BC41C @ 0x1800BC41C (sub_1800BC41C.c)
 *     sub_1800CB778 @ 0x1800CB778 (sub_1800CB778.c)
 *     sub_1800D1880 @ 0x1800D1880 (sub_1800D1880.c)
 *     sub_1800D1D14 @ 0x1800D1D14 (sub_1800D1D14.c)
 *     sub_1800D2674 @ 0x1800D2674 (sub_1800D2674.c)
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 *     sub_1800D42EC @ 0x1800D42EC (sub_1800D42EC.c)
 *     sub_1800D4E10 @ 0x1800D4E10 (sub_1800D4E10.c)
 *     sub_1800D76F4 @ 0x1800D76F4 (sub_1800D76F4.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 *     sub_1800DA420 @ 0x1800DA420 (sub_1800DA420.c)
 *     sub_1800DA500 @ 0x1800DA500 (sub_1800DA500.c)
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 *     sub_1800F3598 @ 0x1800F3598 (sub_1800F3598.c)
 *     sub_1800F375C @ 0x1800F375C (sub_1800F375C.c)
 *     sub_1800F37C4 @ 0x1800F37C4 (sub_1800F37C4.c)
 *     sub_180109C3C @ 0x180109C3C (sub_180109C3C.c)
 *     sub_18010CE84 @ 0x18010CE84 (sub_18010CE84.c)
 *     sub_180110DBC @ 0x180110DBC (sub_180110DBC.c)
 *     sub_180110EE4 @ 0x180110EE4 (sub_180110EE4.c)
 *     sub_180110F48 @ 0x180110F48 (sub_180110F48.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 *__fastcall sub_18006B3C4(__int64 *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[3];
  if ( v4 >= 0x10 )
  {
    v5 = *a1;
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x18006B43BLL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
