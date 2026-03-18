/*
 * XREFs of _EditionIsWinEventsDeferred@0 @ 0x155858
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EditionIsWinEventsDeferred()
{
  return _gdwDeferWinEvent != 0;
}
