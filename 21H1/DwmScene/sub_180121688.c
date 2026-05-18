/*
 * XREFs of sub_180121688 @ 0x180121688
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_1800319E0 @ 0x1800319E0 (sub_1800319E0.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180121688(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010A94(a2[4]);
  sub_1800319E0(v3, a2[6], a2[5]);
  throw;
}
