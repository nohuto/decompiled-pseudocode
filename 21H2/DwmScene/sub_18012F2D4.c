/*
 * XREFs of sub_18012F2D4 @ 0x18012F2D4
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800F6304 @ 0x1800F6304 (sub_1800F6304.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F2D4(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010B74(a2[4]);
  sub_1800F6304(v3, a2[6], a2[5]);
  throw;
}
