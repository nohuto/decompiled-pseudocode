/*
 * XREFs of sub_180129863 @ 0x180129863
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_18003CF90 @ 0x18003CF90 (sub_18003CF90.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180129863(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010A94(a2[5]);
  sub_18003CF90(v3, a2[6], a2[4]);
  throw;
}
