/*
 * XREFs of sub_18006A61C @ 0x18006A61C
 * Callers:
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18001EBF4 @ 0x18001EBF4 (sub_18001EBF4.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006A61C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8[10]; // [rsp+28h] [rbp-50h] BYREF

  v8[4] = (__int64)a2;
  *(_OWORD *)a2 = 0LL;
  sub_18001EBF4(a1, a2);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18001CDF8(v8, a4);
  sub_1800628C4(*a2, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
