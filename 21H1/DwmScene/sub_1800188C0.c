/*
 * XREFs of sub_1800188C0 @ 0x1800188C0
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800188C0(_QWORD *a1)
{
  *a1 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(qword_180218710 + 40) + 1048LL))(
    *(_QWORD *)(qword_180218710 + 40),
    *(_QWORD *)(qword_180218710 + 48),
    a1);
  return a1;
}
