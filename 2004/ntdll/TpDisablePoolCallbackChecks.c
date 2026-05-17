/*
 * XREFs of TpDisablePoolCallbackChecks @ 0x180085400
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpDisablePoolCallbackChecks(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( !a1 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  *(_DWORD *)(a1 + 436) |= 1u;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  return 0LL;
}
