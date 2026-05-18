/*
 * XREFs of sub_1801211BC @ 0x1801211BC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038644 @ 0x180038644 (sub_180038644.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801211BC(__int64 a1, __int64 a2)
{
  sub_180038644(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
