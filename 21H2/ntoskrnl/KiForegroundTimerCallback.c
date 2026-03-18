/*
 * XREFs of KiForegroundTimerCallback @ 0x14039FF50
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C2BAC8, 0LL, 0LL, 0LL, 0);
}
