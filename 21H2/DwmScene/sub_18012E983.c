/*
 * XREFs of sub_18012E983 @ 0x18012E983
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080DEC @ 0x180080DEC (sub_180080DEC.c)
 *     sub_1800814CC @ 0x1800814CC (sub_1800814CC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E983(__int64 a1, __int64 a2)
{
  sub_180080DEC(*(_QWORD *)(a2 + 56), *(_QWORD **)(a2 + 40), *(_QWORD **)(a2 + 88));
  sub_1800814CC(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 48));
  throw;
}
