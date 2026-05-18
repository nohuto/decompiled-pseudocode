/*
 * XREFs of sub_180073F64 @ 0x180073F64
 * Callers:
 *     sub_18001A0C0 @ 0x18001A0C0 (sub_18001A0C0.c)
 *     sub_180076870 @ 0x180076870 (sub_180076870.c)
 * Callees:
 *     sub_180073ED4 @ 0x180073ED4 (sub_180073ED4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180073F64(_QWORD *a1, __int64 *a2)
{
  *(_OWORD *)a2 = 0LL;
  sub_180073ED4(a1, a2);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 80LL))(a1, a2);
  return a2;
}
