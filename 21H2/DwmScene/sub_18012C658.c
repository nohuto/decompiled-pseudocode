/*
 * XREFs of sub_18012C658 @ 0x18012C658
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A7430 @ 0x1800A7430 (sub_1800A7430.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012C658(__int64 a1, __int64 a2)
{
  sub_1800A7430(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
