/*
 * XREFs of sub_18003B75C @ 0x18003B75C
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E51C @ 0x18000E51C (sub_18000E51C.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003B75C(__int64 a1, __int64 a2)
{
  sub_18000E51C(*(_QWORD *)(a2 + 96), *(_QWORD ***)(a2 + 120));
  throw;
}
