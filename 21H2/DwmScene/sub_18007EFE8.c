/*
 * XREFs of sub_18007EFE8 @ 0x18007EFE8
 * Callers:
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007EFE8(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  result = sub_180066E3C(a1 + 8, (__int64)&v3);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_18007E8F0((_QWORD *)a1, 0);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  if ( BYTE8(v3) )
    return sub_180067304(v3);
  return result;
}
