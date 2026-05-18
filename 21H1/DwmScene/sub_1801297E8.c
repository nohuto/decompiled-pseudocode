/*
 * XREFs of sub_1801297E8 @ 0x1801297E8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007BBFC @ 0x18007BBFC (sub_18007BBFC.c)
 *     sub_1800EDE8C @ 0x1800EDE8C (sub_1800EDE8C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801297E8(__int64 a1, __int64 a2)
{
  sub_1800EDE8C(*(_QWORD *)(a2 + 48), *(__int64 **)(a2 + 32), *(__int64 **)(a2 + 72));
  sub_18007BBFC(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 40));
  throw;
}
