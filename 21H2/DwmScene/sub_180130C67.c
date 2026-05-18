/*
 * XREFs of sub_180130C67 @ 0x180130C67
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800372B0 @ 0x1800372B0 (sub_1800372B0.c)
 *     sub_1800713A4 @ 0x1800713A4 (sub_1800713A4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130C67(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_1800713A4(*(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 40), *(__int64 **)(a2 + 80));
  v3 = sub_180010B74(*(_QWORD *)(a2 + 32));
  sub_1800372B0(v3, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
