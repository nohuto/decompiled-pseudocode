/*
 * XREFs of ExGetSharedWaiterCount @ 0x1405B3A20
 * Callers:
 *     CmpIsRegistryLockContended @ 0x1404EB0EC (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfSharedWaiters;
}
