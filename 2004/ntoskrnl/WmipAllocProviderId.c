/*
 * XREFs of WmipAllocProviderId @ 0x140710CE4
 * Callers:
 *     WmipAllocRegEntry @ 0x14036EA64 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
