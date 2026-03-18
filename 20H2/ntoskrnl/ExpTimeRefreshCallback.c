/*
 * XREFs of ExpTimeRefreshCallback @ 0x140331A30
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
