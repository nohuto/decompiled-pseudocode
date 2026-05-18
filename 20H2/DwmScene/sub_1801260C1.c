/*
 * XREFs of sub_1801260C1 @ 0x1801260C1
 * Callers:
 *     <none>
 * Callees:
 *     sub_180085E04 @ 0x180085E04 (sub_180085E04.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801260C1(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 )
    sub_180085E04(v2, 1);
  throw;
}
