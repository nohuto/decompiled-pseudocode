/*
 * XREFs of sub_18012F5EF @ 0x18012F5EF
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FCDF4 @ 0x1800FCDF4 (sub_1800FCDF4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F5EF(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a2 + 56);
  if ( v2 )
    sub_1800FCDF4(v2, 1LL);
  throw;
}
