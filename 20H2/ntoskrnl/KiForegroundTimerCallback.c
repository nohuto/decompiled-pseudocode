/*
 * XREFs of KiForegroundTimerCallback @ 0x14031F160
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C31D08, 0LL, 0LL, 0LL, 0);
}
