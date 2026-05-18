/*
 * XREFs of sub_1801200E7 @ 0x1801200E7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801200E7(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010A94(a2[4]);
  sub_180010BE8(v3, a2[6], a2[5]);
  throw;
}
