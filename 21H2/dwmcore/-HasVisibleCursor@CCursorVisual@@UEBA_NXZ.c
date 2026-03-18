/*
 * XREFs of ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x180211C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CCursorVisual::HasVisibleCursor(CCursorVisual *this)
{
  return CCursorVisual::IsVisible(this);
}
