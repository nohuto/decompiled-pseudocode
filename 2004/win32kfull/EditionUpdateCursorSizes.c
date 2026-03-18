/*
 * XREFs of EditionUpdateCursorSizes @ 0x1C0048DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0048DF4 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::RefreshSizes(gpCursorSizes);
}
