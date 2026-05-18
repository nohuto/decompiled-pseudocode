/*
 * XREFs of sub_180018900 @ 0x180018900
 * Callers:
 *     sub_180027FAC @ 0x180027FAC (sub_180027FAC.c)
 *     sub_180027FD0 @ 0x180027FD0 (sub_180027FD0.c)
 *     sub_180061334 @ 0x180061334 (sub_180061334.c)
 *     sub_180071E20 @ 0x180071E20 (sub_180071E20.c)
 *     sub_18009134C @ 0x18009134C (sub_18009134C.c)
 *     sub_180094320 @ 0x180094320 (sub_180094320.c)
 *     sub_1800C88F8 @ 0x1800C88F8 (sub_1800C88F8.c)
 *     sub_18010FB2C @ 0x18010FB2C (sub_18010FB2C.c)
 *     sub_18011CF00 @ 0x18011CF00 (sub_18011CF00.c)
 *     sub_18012997C @ 0x18012997C (sub_18012997C.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     _o___std_exception_copy @ 0x18011DFC3 (_o___std_exception_copy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018900(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18001CDF8(a1 + 24, a2 + 24);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  return a1;
}
