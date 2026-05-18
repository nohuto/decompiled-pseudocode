/*
 * XREFs of sub_18012A8FE @ 0x18012A8FE
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080E44 @ 0x180080E44 (sub_180080E44.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A8FE(__int64 a1, __int64 a2)
{
  sub_180080E44(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
