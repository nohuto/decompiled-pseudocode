/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140569890
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1402DEAA0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1402DF330 (PopGetPolicyWorker.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
