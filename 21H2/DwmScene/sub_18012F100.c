/*
 * XREFs of sub_18012F100 @ 0x18012F100
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800814CC @ 0x1800814CC (sub_1800814CC.c)
 *     sub_1800F375C @ 0x1800F375C (sub_1800F375C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F100(__int64 a1, __int64 a2)
{
  sub_1800F375C(*(_QWORD *)(a2 + 48), *(__int64 **)(a2 + 32), *(__int64 **)(a2 + 72));
  sub_1800814CC(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 40));
  throw;
}
