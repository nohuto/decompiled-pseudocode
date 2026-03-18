/*
 * XREFs of CmpIsRegistryLockContended @ 0x14053F0D4
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExGetExclusiveWaiterCount @ 0x14063D240 (ExGetExclusiveWaiterCount.c)
 *     ExGetSharedWaiterCount @ 0x14063D280 (ExGetSharedWaiterCount.c)
 */

char CmpIsRegistryLockContended()
{
  char v0; // bl

  v0 = 0;
  if ( ExGetSharedWaiterCount((PERESOURCE)&CmpRegistryLock) || ExGetExclusiveWaiterCount((PERESOURCE)&CmpRegistryLock) )
    return 1;
  return v0;
}
