/*
 * XREFs of ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800E2210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180212050 (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CGlobalComposition::EndUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rdi
  CCursorVisual **i; // rbx

  v1 = (CCursorVisual **)*((_QWORD *)this + 169);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 168); i != v1; ++i )
    CCursorVisual::SetNotificationMode(*i);
}
