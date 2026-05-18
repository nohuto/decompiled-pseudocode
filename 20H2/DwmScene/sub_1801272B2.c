/*
 * XREFs of sub_1801272B2 @ 0x1801272B2
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AE0A4 @ 0x1800AE0A4 (sub_1800AE0A4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801272B2(__int64 a1, __int64 a2)
{
  sub_1800AE0A4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
