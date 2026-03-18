/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x1408F47F8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403CAC80 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F451C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408F4568 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  PopReleasePolicyLock(a1, a2);
  if ( qword_140C54280 )
  {
    LOBYTE(v3) = v2;
    qword_140C54280(v3);
  }
  return PopAcquirePolicyLock(v3);
}
