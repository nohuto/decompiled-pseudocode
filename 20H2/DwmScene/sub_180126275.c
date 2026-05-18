/*
 * XREFs of sub_180126275 @ 0x180126275
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F404 @ 0x18000F404 (sub_18000F404.c)
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126275(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010A94(a2[4]);
  sub_18000F404(v3, a2[6], a2[5]);
  throw;
}
