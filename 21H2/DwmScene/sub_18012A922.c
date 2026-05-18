/*
 * XREFs of sub_18012A922 @ 0x18012A922
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080E68 @ 0x180080E68 (sub_180080E68.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A922(__int64 a1, __int64 a2)
{
  sub_180080E68(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
