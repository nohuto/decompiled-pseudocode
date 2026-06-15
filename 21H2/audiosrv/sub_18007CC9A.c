/*
 * XREFs of sub_18007CC9A @ 0x18007CC9A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800C43A4 @ 0x1800C43A4 (sub_1800C43A4.c)
 */

void __fastcall __noreturn sub_18007CC9A(__int64 a1, _QWORD *a2)
{
  sub_1800C43A4(a1, a2[14], a2[4]);
  sub_1800472E0(a2[5], 8LL * a2[15]);
  throw;
}
