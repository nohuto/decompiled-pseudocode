/*
 * XREFs of sub_180126D64 @ 0x180126D64
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A1B3C @ 0x1800A1B3C (sub_1800A1B3C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126D64(__int64 a1, __int64 a2)
{
  sub_1800A1B3C(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
