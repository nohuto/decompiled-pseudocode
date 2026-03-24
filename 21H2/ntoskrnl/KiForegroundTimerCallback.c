/*
 * XREFs of KiForegroundTimerCallback @ 0x1402C0BA0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C31F28, 0LL, 0LL, 0LL, 0);
}
