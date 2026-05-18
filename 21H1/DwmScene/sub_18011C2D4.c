/*
 * XREFs of sub_18011C2D4 @ 0x18011C2D4
 * Callers:
 *     sub_1800C1DC0 @ 0x1800C1DC0 (sub_1800C1DC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011C2D4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8

  v2 = *a1;
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 64))(a1, a2, 0LL) == 0;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v2 + 144))(a1, a2, v5, 1LL);
}
