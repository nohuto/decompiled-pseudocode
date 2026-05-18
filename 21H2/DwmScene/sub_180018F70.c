/*
 * XREFs of sub_180018F70 @ 0x180018F70
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180018F70(_QWORD *a1)
{
  *a1 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(qword_18021F908 + 40) + 1048LL))(
    *(_QWORD *)(qword_18021F908 + 40),
    *(_QWORD *)(qword_18021F908 + 48),
    a1);
  return a1;
}
