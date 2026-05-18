/*
 * XREFs of sub_180012A18 @ 0x180012A18
 * Callers:
 *     sub_180011454 @ 0x180011454 (sub_180011454.c)
 *     sub_180011BB0 @ 0x180011BB0 (sub_180011BB0.c)
 *     sub_180044C90 @ 0x180044C90 (sub_180044C90.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18006E7FC @ 0x18006E7FC (sub_18006E7FC.c)
 *     sub_18006E868 @ 0x18006E868 (sub_18006E868.c)
 *     sub_18006EDAC @ 0x18006EDAC (sub_18006EDAC.c)
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_1800713D8 @ 0x1800713D8 (sub_1800713D8.c)
 *     sub_180072AA4 @ 0x180072AA4 (sub_180072AA4.c)
 *     sub_180074EFC @ 0x180074EFC (sub_180074EFC.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_180078270 @ 0x180078270 (sub_180078270.c)
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_180080E68 @ 0x180080E68 (sub_180080E68.c)
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     sub_1800A1030 @ 0x1800A1030 (sub_1800A1030.c)
 *     sub_1800A1320 @ 0x1800A1320 (sub_1800A1320.c)
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800B4640 @ 0x1800B4640 (sub_1800B4640.c)
 *     sub_1800BB8BC @ 0x1800BB8BC (sub_1800BB8BC.c)
 *     sub_1800BBA94 @ 0x1800BBA94 (sub_1800BBA94.c)
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 *     sub_1800CC9E0 @ 0x1800CC9E0 (sub_1800CC9E0.c)
 *     sub_1800CED2C @ 0x1800CED2C (sub_1800CED2C.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     sub_1800D2380 @ 0x1800D2380 (sub_1800D2380.c)
 *     sub_1800D2EC0 @ 0x1800D2EC0 (sub_1800D2EC0.c)
 *     sub_1800DB820 @ 0x1800DB820 (sub_1800DB820.c)
 *     sub_1800DC3FC @ 0x1800DC3FC (sub_1800DC3FC.c)
 *     sub_1800EB690 @ 0x1800EB690 (sub_1800EB690.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800EF3B0 @ 0x1800EF3B0 (sub_1800EF3B0.c)
 *     sub_1800F0754 @ 0x1800F0754 (sub_1800F0754.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 *     sub_180109DA0 @ 0x180109DA0 (sub_180109DA0.c)
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 *     sub_18010B400 @ 0x18010B400 (sub_18010B400.c)
 *     sub_18010BD28 @ 0x18010BD28 (sub_18010BD28.c)
 *     sub_18010D420 @ 0x18010D420 (sub_18010D420.c)
 *     sub_18011141C @ 0x18011141C (sub_18011141C.c)
 *     sub_18011C880 @ 0x18011C880 (sub_18011C880.c)
 * Callees:
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180012A18(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        unknown_libname_102(v4, 0);
        v4 += 16LL;
      }
      while ( v4 != v3 );
    }
    v5 = (a1[2] - v1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v1 - 8);
      v7 = v5 + 39;
      if ( (unsigned __int64)(v1 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x180012AB3LL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
