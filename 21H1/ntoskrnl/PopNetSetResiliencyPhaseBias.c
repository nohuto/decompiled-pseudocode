/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x1408ED8F8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403C7230 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408ED61C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408ED668 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  PopReleasePolicyLock(a1, a2);
  if ( qword_140C54300 )
  {
    LOBYTE(v3) = v2;
    qword_140C54300(v3);
  }
  return PopAcquirePolicyLock(v3);
}
