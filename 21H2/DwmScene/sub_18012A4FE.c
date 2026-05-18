/*
 * XREFs of sub_18012A4FE @ 0x18012A4FE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D37C @ 0x18006D37C (sub_18006D37C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A4FE(__int64 a1, __int64 a2)
{
  sub_18006D37C(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
