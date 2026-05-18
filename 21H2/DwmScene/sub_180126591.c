/*
 * XREFs of sub_180126591 @ 0x180126591
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031050 @ 0x180031050 (sub_180031050.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126591(__int64 a1, __int64 a2)
{
  sub_180031050(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
