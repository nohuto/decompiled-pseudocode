/*
 * XREFs of KiForegroundTimerCallback @ 0x14023F010
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C31EA8, 0);
}
