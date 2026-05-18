/*
 * XREFs of sub_180124A1E @ 0x180124A1E
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124A1E(__int64 a1, __int64 a2)
{
  sub_180062960(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
