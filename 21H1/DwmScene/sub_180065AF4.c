/*
 * XREFs of sub_180065AF4 @ 0x180065AF4
 * Callers:
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_180064820 @ 0x180064820 (sub_180064820.c)
 *     sub_180064B64 @ 0x180064B64 (sub_180064B64.c)
 *     sub_180067AAC @ 0x180067AAC (sub_180067AAC.c)
 *     sub_180067D38 @ 0x180067D38 (sub_180067D38.c)
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     sub_18006D0C0 @ 0x18006D0C0 (sub_18006D0C0.c)
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_18009C7EC @ 0x18009C7EC (sub_18009C7EC.c)
 *     sub_1800B6B4C @ 0x1800B6B4C (sub_1800B6B4C.c)
 *     sub_1800C5EA8 @ 0x1800C5EA8 (sub_1800C5EA8.c)
 *     sub_1800CBFB0 @ 0x1800CBFB0 (sub_1800CBFB0.c)
 *     sub_1800CC444 @ 0x1800CC444 (sub_1800CC444.c)
 *     sub_1800CCDA4 @ 0x1800CCDA4 (sub_1800CCDA4.c)
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 *     sub_1800CEA1C @ 0x1800CEA1C (sub_1800CEA1C.c)
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800D1E24 @ 0x1800D1E24 (sub_1800D1E24.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D4C30 @ 0x1800D4C30 (sub_1800D4C30.c)
 *     sub_1800D4EA4 @ 0x1800D4EA4 (sub_1800D4EA4.c)
 *     sub_1800EDCC8 @ 0x1800EDCC8 (sub_1800EDCC8.c)
 *     sub_1800EDE8C @ 0x1800EDE8C (sub_1800EDE8C.c)
 *     sub_1800EDEF4 @ 0x1800EDEF4 (sub_1800EDEF4.c)
 *     sub_18010436C @ 0x18010436C (sub_18010436C.c)
 *     sub_1801075B4 @ 0x1801075B4 (sub_1801075B4.c)
 *     sub_18010B4EC @ 0x18010B4EC (sub_18010B4EC.c)
 *     sub_18010B614 @ 0x18010B614 (sub_18010B614.c)
 *     sub_18010B678 @ 0x18010B678 (sub_18010B678.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 *__fastcall sub_180065AF4(__int64 *a1, char a2)
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
        JUMPOUT(0x180065B6BLL);
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
