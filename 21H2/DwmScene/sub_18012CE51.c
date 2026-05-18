/*
 * XREFs of sub_18012CE51 @ 0x18012CE51
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B5C44 @ 0x1800B5C44 (sub_1800B5C44.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CE51(__int64 a1, __int64 a2)
{
  sub_1800B5C44(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
