/*
 * XREFs of sub_18012A8DA @ 0x18012A8DA
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080E20 @ 0x180080E20 (sub_180080E20.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A8DA(__int64 a1, __int64 a2)
{
  sub_180080E20(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
