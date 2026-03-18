/*
 * XREFs of WmipAllocProviderId @ 0x1406E313C
 * Callers:
 *     WmipAllocRegEntry @ 0x1403709B4 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
