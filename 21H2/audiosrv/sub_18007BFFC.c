/*
 * XREFs of sub_18007BFFC @ 0x18007BFFC
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005CCC8 @ 0x18005CCC8 (sub_18005CCC8.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18007BFFC(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rcx

  v3 = *(_QWORD *)(a2 + 56);
  v4 = *(_QWORD **)(a2 + 48);
  if ( v4[1] != v3 )
    sub_18005CCC8(v4, v3);
  throw;
}
