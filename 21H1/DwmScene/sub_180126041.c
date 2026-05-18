/*
 * XREFs of sub_180126041 @ 0x180126041
 * Callers:
 *     <none>
 * Callees:
 *     sub_180089AA8 @ 0x180089AA8 (sub_180089AA8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126041(__int64 a1, __int64 a2)
{
  sub_180089AA8(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
