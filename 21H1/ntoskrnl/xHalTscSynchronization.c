/*
 * XREFs of xHalTscSynchronization @ 0x1404EBD70
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140389D8C (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
