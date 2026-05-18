/*
 * XREFs of sub_180126AD4 @ 0x180126AD4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003DF14 @ 0x18003DF14 (sub_18003DF14.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126AD4(__int64 a1, __int64 a2)
{
  sub_18003DF14(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
