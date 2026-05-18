/*
 * XREFs of sub_180130C43 @ 0x180130C43
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801210B4 @ 0x1801210B4 (sub_1801210B4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130C43(__int64 a1, __int64 a2)
{
  sub_1801210B4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
