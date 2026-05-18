/*
 * XREFs of sub_180038A7C @ 0x180038A7C
 * Callers:
 *     sub_18002E630 @ 0x18002E630 (sub_18002E630.c)
 *     sub_1800440E0 @ 0x1800440E0 (sub_1800440E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038A7C(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[4]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  memset(v3, 0, sizeof(v3));
  return (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v1 + 264LL))(v1, 8LL, v3);
}
