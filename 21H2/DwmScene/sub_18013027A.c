/*
 * XREFs of sub_18013027A @ 0x18013027A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D2ABC @ 0x1800D2ABC (sub_1800D2ABC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013027A(__int64 a1, __int64 a2)
{
  sub_1800D2ABC(a2 + 80, *(_QWORD *)(a2 + 32));
  throw;
}
