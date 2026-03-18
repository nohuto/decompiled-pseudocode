/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140569240
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
