/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14056D2C0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1403633A0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140363800 (PopGetPolicyWorker.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
