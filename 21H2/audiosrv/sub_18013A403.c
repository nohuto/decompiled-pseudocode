/*
 * XREFs of sub_18013A403 @ 0x18013A403
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_18013A238 @ 0x18013A238 (sub_18013A238.c)
 */

void __fastcall __noreturn sub_18013A403(__int64 a1, __int64 a2)
{
  sub_18013A238(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}
