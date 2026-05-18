/*
 * XREFs of sub_18012B959 @ 0x18012B959
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F378 @ 0x18008F378 (sub_18008F378.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B959(__int64 a1, __int64 a2)
{
  sub_18008F378(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
