/*
 * XREFs of sub_180129CD7 @ 0x180129CD7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F7524 @ 0x1800F7524 (sub_1800F7524.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180129CD7(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a2 + 56);
  if ( v2 )
    sub_1800F7524(v2, 1LL);
  throw;
}
