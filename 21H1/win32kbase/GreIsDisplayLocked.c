/*
 * XREFs of GreIsDisplayLocked @ 0x1C0155080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDisplayLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) != 0;
}
