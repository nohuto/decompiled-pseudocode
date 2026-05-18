/*
 * XREFs of sub_18012D949 @ 0x18012D949
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B3C1C @ 0x1800B3C1C (sub_1800B3C1C.c)
 *     sub_1800DA500 @ 0x1800DA500 (sub_1800DA500.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D949(__int64 a1, __int64 a2)
{
  sub_1800DA500(*(_QWORD *)(a2 + 56), *(__int64 **)(a2 + 32), *(__int64 **)(a2 + 64));
  sub_1800B3C1C(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 48));
  throw;
}
