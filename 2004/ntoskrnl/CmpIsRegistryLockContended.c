/*
 * XREFs of CmpIsRegistryLockContended @ 0x1404E7864
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExGetExclusiveWaiterCount @ 0x1405AFE80 (ExGetExclusiveWaiterCount.c)
 *     ExGetSharedWaiterCount @ 0x1405AFEC0 (ExGetSharedWaiterCount.c)
 */

char CmpIsRegistryLockContended()
{
  char v0; // bl

  v0 = 0;
  if ( ExGetSharedWaiterCount((PERESOURCE)&CmpRegistryLock) || ExGetExclusiveWaiterCount((PERESOURCE)&CmpRegistryLock) )
    return 1;
  return v0;
}
