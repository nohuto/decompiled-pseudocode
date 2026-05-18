/*
 * XREFs of sub_180124BE6 @ 0x180124BE6
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067AAC @ 0x180067AAC (sub_180067AAC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124BE6(__int64 a1, __int64 a2)
{
  sub_180067AAC(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
