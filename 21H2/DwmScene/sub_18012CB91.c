/*
 * XREFs of sub_18012CB91 @ 0x18012CB91
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800372B0 @ 0x1800372B0 (sub_1800372B0.c)
 *     sub_1800713A4 @ 0x1800713A4 (sub_1800713A4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CB91(__int64 a1, __int64 a2)
{
  sub_1800713A4(*(_QWORD *)(a2 + 48), *(__int64 **)(a2 + 32), *(__int64 **)(a2 + 64));
  sub_1800372B0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 40));
  throw;
}
