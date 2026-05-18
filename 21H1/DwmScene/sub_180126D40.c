/*
 * XREFs of sub_180126D40 @ 0x180126D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A1B60 @ 0x1800A1B60 (sub_1800A1B60.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126D40(__int64 a1, __int64 a2)
{
  sub_1800A1B60(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
