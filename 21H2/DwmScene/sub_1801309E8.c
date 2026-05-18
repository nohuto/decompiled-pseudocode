/*
 * XREFs of sub_1801309E8 @ 0x1801309E8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_180010CC8 @ 0x180010CC8 (sub_180010CC8.c)
 *     sub_180012838 @ 0x180012838 (sub_180012838.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801309E8(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_180012838(a2[5], a2[6], a2[10]);
  v3 = sub_180010B74(a2[5]);
  sub_180010CC8(v3, a2[11], a2[7]);
  throw;
}
