/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1405AFE80
 * Callers:
 *     CmpIsRegistryLockContended @ 0x1404E7864 (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
