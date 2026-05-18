/*
 * XREFs of sub_180126065 @ 0x180126065
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800856C4 @ 0x1800856C4 (sub_1800856C4.c)
 *     sub_180089BB4 @ 0x180089BB4 (sub_180089BB4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126065(__int64 a1, _QWORD *a2)
{
  sub_180089BB4(a2[10], a2 + 4, a2[13]);
  sub_1800856C4(a2[10], (__int64)(a2 + 5));
  throw;
}
