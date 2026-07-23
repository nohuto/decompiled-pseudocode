/*
 * XREFs of ExpTimeRefreshCallback @ 0x140251F70
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0);
}
