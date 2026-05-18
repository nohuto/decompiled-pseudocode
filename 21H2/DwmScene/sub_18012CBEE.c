/*
 * XREFs of sub_18012CBEE @ 0x18012CBEE
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800B3940 @ 0x1800B3940 (sub_1800B3940.c)
 *     sub_1800B3C1C @ 0x1800B3C1C (sub_1800B3C1C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CBEE(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_1800B3940(a2[12], a2[4], a2[13]);
  v3 = sub_180010B74(a2[12]);
  sub_1800B3C1C(v3, a2[5], a2[15]);
  throw;
}
