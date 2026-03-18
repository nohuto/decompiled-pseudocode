/*
 * XREFs of GreIsDisplayLocked @ 0x1C014ED30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDisplayLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) != 0;
}
