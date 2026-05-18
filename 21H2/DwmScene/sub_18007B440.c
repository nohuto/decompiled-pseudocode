/*
 * XREFs of sub_18007B440 @ 0x18007B440
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007B440(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_180066E3C((__int64)(a1 + 1), (__int64)&v5);
  a1[114] = *a2;
  a1[115] = a2[1];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, a2);
  if ( BYTE8(v5) )
    return sub_180067304(v5);
  return result;
}
