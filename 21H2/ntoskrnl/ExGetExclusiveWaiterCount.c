/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1405B5610
 * Callers:
 *     CmpIsRegistryLockContended @ 0x1404ECC00 (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
