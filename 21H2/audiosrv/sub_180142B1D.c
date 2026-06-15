/*
 * XREFs of sub_180142B1D @ 0x180142B1D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180142858 @ 0x180142858 (sub_180142858.c)
 */

void __fastcall __noreturn sub_180142B1D(__int64 a1, __int64 a2)
{
  sub_180142858(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  throw;
}
