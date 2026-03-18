/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1405B39E0
 * Callers:
 *     CmpIsRegistryLockContended @ 0x1404EB0EC (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
