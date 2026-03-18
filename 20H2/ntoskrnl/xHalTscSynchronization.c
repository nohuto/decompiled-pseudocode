/*
 * XREFs of xHalTscSynchronization @ 0x1404EFC30
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x14038D0FC (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
