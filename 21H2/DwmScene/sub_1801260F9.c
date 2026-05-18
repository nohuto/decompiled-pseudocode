/*
 * XREFs of sub_1801260F9 @ 0x1801260F9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A380 @ 0x18001A380 (sub_18001A380.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801260F9(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 )
    sub_18001A380(v2, 1);
  throw;
}
