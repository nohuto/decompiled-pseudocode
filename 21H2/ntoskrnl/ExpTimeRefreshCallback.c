/*
 * XREFs of ExpTimeRefreshCallback @ 0x1402D3D00
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
