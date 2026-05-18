/*
 * XREFs of sub_1800CCA38 @ 0x1800CCA38
 * Callers:
 *     sub_1800CC680 @ 0x1800CC680 (sub_1800CC680.c)
 * Callees:
 *     sub_1800CC530 @ 0x1800CC530 (sub_1800CC530.c)
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CCA38(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_1800CC530(a1 + 96, a3);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_1800CCED4(a3 + 16);
}
