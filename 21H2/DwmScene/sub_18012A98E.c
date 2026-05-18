/*
 * XREFs of sub_18012A98E @ 0x18012A98E
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B24 @ 0x180010B24 (sub_180010B24.c)
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_180010CC8 @ 0x180010CC8 (sub_180010CC8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A98E(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_180010B24(a2[5], a2[6], a2[10]);
  v3 = sub_180010B74(a2[5]);
  sub_180010CC8(v3, a2[11], a2[7]);
  throw;
}
