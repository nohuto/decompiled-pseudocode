/*
 * XREFs of GreIsVisRgnLocked @ 0x1C01550B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemDCVisRgn) != 0;
}
