/*
 * XREFs of sub_18003C7B1 @ 0x18003C7B1
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003C7B1(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a2 + 56);
  if ( v2 )
    sub_18000EED0(v2, 1);
  throw;
}
