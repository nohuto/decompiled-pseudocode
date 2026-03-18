/*
 * XREFs of ExpTimeRefreshCallback @ 0x140323190
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
