/*
 * XREFs of sub_180126FA0 @ 0x180126FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800372B0 @ 0x1800372B0 (sub_1800372B0.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126FA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010B74(a2[4]);
  sub_1800372B0(v3, a2[6], a2[5]);
  throw;
}
