/*
 * XREFs of EditionUpdateCursorSizes @ 0x1C0027F00
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::RefreshSizes(gpCursorSizes);
}
