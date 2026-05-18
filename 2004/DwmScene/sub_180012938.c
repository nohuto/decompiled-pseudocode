/*
 * XREFs of sub_180012938 @ 0x180012938
 * Callers:
 *     sub_180011374 @ 0x180011374 (sub_180011374.c)
 *     sub_180011AD0 @ 0x180011AD0 (sub_180011AD0.c)
 *     sub_18003F3C0 @ 0x18003F3C0 (sub_18003F3C0.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_180068F2C @ 0x180068F2C (sub_180068F2C.c)
 *     sub_180068F98 @ 0x180068F98 (sub_180068F98.c)
 *     sub_1800694DC @ 0x1800694DC (sub_1800694DC.c)
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_18006BB08 @ 0x18006BB08 (sub_18006BB08.c)
 *     sub_18006D1D4 @ 0x18006D1D4 (sub_18006D1D4.c)
 *     sub_18006F62C @ 0x18006F62C (sub_18006F62C.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_1800729A0 @ 0x1800729A0 (sub_1800729A0.c)
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18007B598 @ 0x18007B598 (sub_18007B598.c)
 *     sub_18007DF60 @ 0x18007DF60 (sub_18007DF60.c)
 *     sub_18007EC44 @ 0x18007EC44 (sub_18007EC44.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 *     sub_18009BA50 @ 0x18009BA50 (sub_18009BA50.c)
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800AED70 @ 0x1800AED70 (sub_1800AED70.c)
 *     sub_1800B5FEC @ 0x1800B5FEC (sub_1800B5FEC.c)
 *     sub_1800B61C4 @ 0x1800B61C4 (sub_1800B61C4.c)
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C945C @ 0x1800C945C (sub_1800C945C.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800CD5F0 @ 0x1800CD5F0 (sub_1800CD5F0.c)
 *     sub_1800D5F50 @ 0x1800D5F50 (sub_1800D5F50.c)
 *     sub_1800D6B2C @ 0x1800D6B2C (sub_1800D6B2C.c)
 *     sub_1800E5DC0 @ 0x1800E5DC0 (sub_1800E5DC0.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 *     sub_1800EAE84 @ 0x1800EAE84 (sub_1800EAE84.c)
 *     sub_1800FE1B4 @ 0x1800FE1B4 (sub_1800FE1B4.c)
 *     sub_1801044D0 @ 0x1801044D0 (sub_1801044D0.c)
 *     sub_18010591C @ 0x18010591C (sub_18010591C.c)
 *     sub_180105B30 @ 0x180105B30 (sub_180105B30.c)
 *     sub_180106458 @ 0x180106458 (sub_180106458.c)
 *     sub_180107B50 @ 0x180107B50 (sub_180107B50.c)
 *     sub_18010BB4C @ 0x18010BB4C (sub_18010BB4C.c)
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180012938(__int64 *a1)
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
        unknown_libname_100(v4, 0);
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
        JUMPOUT(0x1800129D3LL);
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
