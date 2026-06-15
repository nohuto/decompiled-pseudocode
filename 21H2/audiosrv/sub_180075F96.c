/*
 * XREFs of sub_180075F96 @ 0x180075F96
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800D15C8 @ 0x1800D15C8 (sub_1800D15C8.c)
 *     sub_1800D15DC @ 0x1800D15DC (sub_1800D15DC.c)
 */

void __fastcall __noreturn sub_180075F96(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  sub_1800D15C8(a1, a2[14], a2[4]);
  sub_1800D15DC(v3, a2[5], a2[15]);
  throw;
}
