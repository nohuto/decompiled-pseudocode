/*
 * XREFs of ExpTimeRefreshCallback @ 0x1403A1540
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
