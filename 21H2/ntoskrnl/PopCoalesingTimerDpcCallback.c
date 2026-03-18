/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1405CFC50
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
