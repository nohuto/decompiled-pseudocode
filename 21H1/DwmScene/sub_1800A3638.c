/*
 * XREFs of sub_1800A3638 @ 0x1800A3638
 * Callers:
 *     sub_180127022 @ 0x180127022 (sub_180127022.c)
 *     unknown_libname_63 @ 0x180127117 (unknown_libname_63.c)
 *     sub_180127AC3 @ 0x180127AC3 (sub_180127AC3.c)
 *     sub_180127ACF @ 0x180127ACF (sub_180127ACF.c)
 *     sub_180129257 @ 0x180129257 (sub_180129257.c)
 *     sub_18012956F @ 0x18012956F (sub_18012956F.c)
 *     sub_18012957B @ 0x18012957B (sub_18012957B.c)
 *     sub_180129587 @ 0x180129587 (sub_180129587.c)
 *     sub_180129593 @ 0x180129593 (sub_180129593.c)
 *     sub_18012959F @ 0x18012959F (sub_18012959F.c)
 *     sub_1801295ED @ 0x1801295ED (sub_1801295ED.c)
 *     sub_180129734 @ 0x180129734 (sub_180129734.c)
 *     sub_180129E71 @ 0x180129E71 (sub_180129E71.c)
 *     unknown_libname_151 @ 0x180129E7D (unknown_libname_151.c)
 *     sub_180129E89 @ 0x180129E89 (sub_180129E89.c)
 *     sub_18012A7BA @ 0x18012A7BA (sub_18012A7BA.c)
 *     sub_18012A7C6 @ 0x18012A7C6 (sub_18012A7C6.c)
 *     sub_18012A7D2 @ 0x18012A7D2 (sub_18012A7D2.c)
 *     sub_18012A7DE @ 0x18012A7DE (sub_18012A7DE.c)
 *     sub_18012A7EA @ 0x18012A7EA (sub_18012A7EA.c)
 *     sub_18012A7F6 @ 0x18012A7F6 (sub_18012A7F6.c)
 *     sub_18012A802 @ 0x18012A802 (sub_18012A802.c)
 *     sub_18012A80E @ 0x18012A80E (sub_18012A80E.c)
 *     sub_18012A81A @ 0x18012A81A (sub_18012A81A.c)
 * Callees:
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 */

__int64 __fastcall sub_1800A3638(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18009C6C8(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
