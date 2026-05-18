/*
 * XREFs of sub_18012BB8D @ 0x18012BB8D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F4E4 @ 0x18000F4E4 (sub_18000F4E4.c)
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012BB8D(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010B74(a2[4]);
  sub_18000F4E4(v3, a2[6], a2[5]);
  throw;
}
