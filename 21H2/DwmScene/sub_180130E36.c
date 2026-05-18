/*
 * XREFs of sub_180130E36 @ 0x180130E36
 * Callers:
 *     <none>
 * Callees:
 *     sub_180121064 @ 0x180121064 (sub_180121064.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130E36(__int64 a1, __int64 a2)
{
  sub_180121064(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 152));
  throw;
}
