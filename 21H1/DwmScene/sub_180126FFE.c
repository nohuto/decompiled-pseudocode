/*
 * XREFs of sub_180126FFE @ 0x180126FFE
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A58CC @ 0x1800A58CC (sub_1800A58CC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126FFE(__int64 a1, __int64 a2)
{
  sub_1800A58CC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
