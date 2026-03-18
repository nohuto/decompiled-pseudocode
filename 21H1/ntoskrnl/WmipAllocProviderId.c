/*
 * XREFs of WmipAllocProviderId @ 0x1406ED134
 * Callers:
 *     WmipAllocRegEntry @ 0x14036DE34 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
