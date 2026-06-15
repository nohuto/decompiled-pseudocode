/*
 * XREFs of sub_180138847 @ 0x180138847
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_18013A6F8 @ 0x18013A6F8 (sub_18013A6F8.c)
 */

void __fastcall __noreturn sub_180138847(__int64 a1, __int64 a2)
{
  sub_18013A6F8(a1, *(_QWORD *)(a2 + 128));
  throw;
}
