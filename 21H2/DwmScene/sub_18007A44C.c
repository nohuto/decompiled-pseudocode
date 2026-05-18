/*
 * XREFs of sub_18007A44C @ 0x18007A44C
 * Callers:
 *     sub_18001B820 @ 0x18001B820 (sub_18001B820.c)
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007A44C(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  sub_180066E3C(a1 + 8, (__int64)&v3);
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 8LL))(a1, &v3);
  if ( BYTE8(v3) )
    return sub_180067304(v3);
  return result;
}
