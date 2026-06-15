/*
 * XREFs of sub_1800F96B9 @ 0x1800F96B9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800F9F94 @ 0x1800F9F94 (sub_1800F9F94.c)
 */

void __fastcall __noreturn sub_1800F96B9(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 56) )
    sub_1800F9F94();
  throw;
}
