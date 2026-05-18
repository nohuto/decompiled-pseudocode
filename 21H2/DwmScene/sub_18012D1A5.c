/*
 * XREFs of sub_18012D1A5 @ 0x18012D1A5
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB738 @ 0x1800CB738 (sub_1800CB738.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D1A5(__int64 a1, __int64 a2)
{
  sub_1800CB738(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 152));
  throw;
}
