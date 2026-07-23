/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008C830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801811D8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_18011D930;
  *a3 = &off_18011D9F0;
  return 0LL;
}
