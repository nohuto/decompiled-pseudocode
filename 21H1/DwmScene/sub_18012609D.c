/*
 * XREFs of sub_18012609D @ 0x18012609D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180089A8C @ 0x180089A8C (sub_180089A8C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012609D(__int64 a1, __int64 a2)
{
  sub_180089A8C(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}
