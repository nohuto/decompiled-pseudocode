/*
 * XREFs of sub_180125052 @ 0x180125052
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038644 @ 0x180038644 (sub_180038644.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180125052(__int64 a1, __int64 a2)
{
  sub_180038644(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
