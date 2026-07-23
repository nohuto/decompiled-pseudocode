/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14056EF10
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x14026F4C0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14026FD50 (PopGetPolicyWorker.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
