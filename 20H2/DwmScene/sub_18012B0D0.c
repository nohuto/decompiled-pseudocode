/*
 * XREFs of sub_18012B0D0 @ 0x18012B0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180012758 @ 0x180012758 (sub_180012758.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B0D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_180012758(a2[5], a2[6], a2[10]);
  v3 = sub_180010A94(a2[5]);
  sub_180010BE8(v3, a2[11], a2[7]);
  throw;
}
