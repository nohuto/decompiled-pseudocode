/*
 * XREFs of sub_1800024C4 @ 0x1800024C4
 * Callers:
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_180002430 @ 0x180002430 (sub_180002430.c)
 *     sub_180015170 @ 0x180015170 (sub_180015170.c)
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800024C4(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
