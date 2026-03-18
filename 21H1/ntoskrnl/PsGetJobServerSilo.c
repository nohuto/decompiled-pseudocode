/*
 * XREFs of PsGetJobServerSilo @ 0x1402017B0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetJobServerSilo(__int64 a1, _QWORD *a2)
{
  if ( a1 )
  {
    *a2 = PsGetEffectiveServerSilo();
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225485LL;
  }
}
