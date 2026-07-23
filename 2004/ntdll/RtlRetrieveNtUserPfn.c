/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008C130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18017F1D8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_18011C970;
  *a3 = &off_18011CA30;
  return 0LL;
}
