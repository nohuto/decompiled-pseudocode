/*
 * XREFs of xHalTscSynchronization @ 0x1404EC3A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x14038ADFC (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
