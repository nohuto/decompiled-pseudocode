/*
 * XREFs of KiForegroundTimerCallback @ 0x14034E400
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C31C48, 0LL, 0LL, 0LL, 0);
}
