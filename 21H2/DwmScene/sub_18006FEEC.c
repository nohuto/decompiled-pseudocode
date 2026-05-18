/*
 * XREFs of sub_18006FEEC @ 0x18006FEEC
 * Callers:
 *     sub_1800ADA20 @ 0x1800ADA20 (sub_1800ADA20.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006FEEC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8[10]; // [rsp+28h] [rbp-50h] BYREF

  v8[4] = (__int64)a2;
  *(_OWORD *)a2 = 0LL;
  sub_1800244C4(a1, a2);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_180020B7C(v8, a4);
  sub_180068194(*a2, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
