/*
 * XREFs of sub_18013A4A9 @ 0x18013A4A9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_18013A28C @ 0x18013A28C (sub_18013A28C.c)
 */

void __fastcall __noreturn sub_18013A4A9(__int64 a1, __int64 a2)
{
  sub_18013A28C(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}
