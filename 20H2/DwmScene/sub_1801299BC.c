/*
 * XREFs of sub_1801299BC @ 0x1801299BC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_1800F0A34 @ 0x1800F0A34 (sub_1800F0A34.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801299BC(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180010A94(a2[4]);
  sub_1800F0A34(v3, a2[6], a2[5]);
  throw;
}
