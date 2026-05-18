/*
 * XREFs of sub_180079834 @ 0x180079834
 * Callers:
 *     sub_18001AF60 @ 0x18001AF60 (sub_18001AF60.c)
 *     sub_18007C140 @ 0x18007C140 (sub_18007C140.c)
 * Callees:
 *     sub_1800797A4 @ 0x1800797A4 (sub_1800797A4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180079834(_QWORD *a1, __int64 *a2)
{
  *(_OWORD *)a2 = 0LL;
  sub_1800797A4(a1, a2);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 80LL))(a1, a2);
  return a2;
}
