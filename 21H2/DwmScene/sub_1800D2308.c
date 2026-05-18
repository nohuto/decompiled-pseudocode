/*
 * XREFs of sub_1800D2308 @ 0x1800D2308
 * Callers:
 *     sub_1800D1F50 @ 0x1800D1F50 (sub_1800D1F50.c)
 * Callees:
 *     sub_1800D1E00 @ 0x1800D1E00 (sub_1800D1E00.c)
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2308(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_1800D1E00(a1 + 96, a3);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_1800D27A4(a3 + 16);
}
