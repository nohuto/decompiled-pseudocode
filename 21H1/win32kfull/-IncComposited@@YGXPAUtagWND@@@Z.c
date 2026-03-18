/*
 * XREFs of ?IncComposited@@YGXPAUtagWND@@@Z @ 0x19C6CC
 * Callers:
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 * Callees:
 *     _IncrementCompositedCount@4 @ 0x1537FA (_IncrementCompositedCount@4.c)
 */

void __stdcall IncComposited(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 19) & 2) != 0 )
    IncrementCompositedCount(a1);
}
