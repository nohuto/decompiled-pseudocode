/*
 * XREFs of sub_18012B9D9 @ 0x18012B9D9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B6D4 @ 0x18008B6D4 (sub_18008B6D4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B9D9(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 )
    sub_18008B6D4(v2, 1);
  throw;
}
