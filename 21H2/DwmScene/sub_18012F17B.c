/*
 * XREFs of sub_18012F17B @ 0x18012F17B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_180042860 @ 0x180042860 (sub_180042860.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F17B(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010B74(a2[5]);
  sub_180042860(v3, a2[6], a2[4]);
  throw;
}
