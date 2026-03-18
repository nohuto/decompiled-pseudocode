/*
 * XREFs of GreIsVisRgnLocked @ 0x1C014ED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemDCVisRgn) != 0;
}
