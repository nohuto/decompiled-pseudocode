/*
 * XREFs of _EditionUpdateCursorSizes@0 @ 0xA279C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EditionUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::RefreshSizes(gpCursorSizes);
}
