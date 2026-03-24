/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14056ECD0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x140281280 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140281B10 (PopGetPolicyWorker.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
