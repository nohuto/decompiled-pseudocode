/*
 * XREFs of sub_180121BA4 @ 0x180121BA4
 * Callers:
 *     sub_1800C7690 @ 0x1800C7690 (sub_1800C7690.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180121BA4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8

  v2 = *a1;
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 64))(a1, a2, 0LL) == 0;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v2 + 144))(a1, a2, v5, 1LL);
}
