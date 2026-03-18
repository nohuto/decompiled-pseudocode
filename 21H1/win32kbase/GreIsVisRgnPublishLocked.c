/*
 * XREFs of GreIsVisRgnPublishLocked @ 0x1C0155110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnPublishLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemVisRgnPublish) != 0;
}
