/*
 * XREFs of sub_18011FF17 @ 0x18011FF17
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A44 @ 0x180010A44 (sub_180010A44.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18011FF17(__int64 a1, __int64 *a2)
{
  sub_180010A44(a2[6], a2[4], a2[7]);
  sub_180010BE8(a2[6], a2[8], a2[5]);
  throw;
}
