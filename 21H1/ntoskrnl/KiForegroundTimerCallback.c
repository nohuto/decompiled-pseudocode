/*
 * XREFs of KiForegroundTimerCallback @ 0x140310D70
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C31E68, 0LL, 0LL, 0LL, 0);
}
