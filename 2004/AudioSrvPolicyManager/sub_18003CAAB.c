/*
 * XREFs of sub_18003CAAB @ 0x18003CAAB
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800307D0 @ 0x1800307D0 (sub_1800307D0.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003CAAB(__int64 a1, __int64 a2)
{
  sub_1800307D0(*(_QWORD *)(a2 + 64), *(void **)(a2 + 88));
  throw;
}
