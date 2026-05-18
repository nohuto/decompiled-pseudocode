/*
 * XREFs of sub_180128031 @ 0x180128031
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AE34C @ 0x1800AE34C (sub_1800AE34C.c)
 *     sub_1800D4C30 @ 0x1800D4C30 (sub_1800D4C30.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128031(__int64 a1, __int64 a2)
{
  sub_1800D4C30(*(_QWORD *)(a2 + 56), *(__int64 **)(a2 + 32), *(__int64 **)(a2 + 64));
  sub_1800AE34C(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 48));
  throw;
}
