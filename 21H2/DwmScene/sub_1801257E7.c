/*
 * XREFs of sub_1801257E7 @ 0x1801257E7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B24 @ 0x180010B24 (sub_180010B24.c)
 *     sub_180010CC8 @ 0x180010CC8 (sub_180010CC8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801257E7(__int64 a1, __int64 *a2)
{
  sub_180010B24(a2[6], a2[4], a2[7]);
  sub_180010CC8(a2[6], a2[8], a2[5]);
  throw;
}
