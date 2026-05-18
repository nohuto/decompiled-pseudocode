/*
 * XREFs of sub_180027A54 @ 0x180027A54
 * Callers:
 *     sub_1800279B8 @ 0x1800279B8 (sub_1800279B8.c)
 *     sub_180067DF0 @ 0x180067DF0 (sub_180067DF0.c)
 *     sub_1800686B8 @ 0x1800686B8 (sub_1800686B8.c)
 *     sub_180091630 @ 0x180091630 (sub_180091630.c)
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 *     sub_18009F15C @ 0x18009F15C (sub_18009F15C.c)
 *     sub_1800A0B14 @ 0x1800A0B14 (sub_1800A0B14.c)
 *     sub_1800A47E8 @ 0x1800A47E8 (sub_1800A47E8.c)
 *     sub_1800D0338 @ 0x1800D0338 (sub_1800D0338.c)
 *     sub_1800D1D94 @ 0x1800D1D94 (sub_1800D1D94.c)
 *     sub_1800D2A04 @ 0x1800D2A04 (sub_1800D2A04.c)
 *     sub_1800D3680 @ 0x1800D3680 (sub_1800D3680.c)
 *     sub_1800F60B0 @ 0x1800F60B0 (sub_1800F60B0.c)
 *     sub_18012A3B6 @ 0x18012A3B6 (sub_18012A3B6.c)
 *     unknown_libname_60 @ 0x18012BBC9 (unknown_libname_60.c)
 *     sub_18012C35E @ 0x18012C35E (sub_18012C35E.c)
 *     sub_18012D623 @ 0x18012D623 (sub_18012D623.c)
 * Callees:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180027A54(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rcx

  v1 = (__int64 *)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_180025928((__int64)v1, (__int64)v1, (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = *v1;
  }
  j_j__o_free(v3);
  return sub_180067BE8(a1);
}
