/*
 * XREFs of ?DecComposited@@YGXPAUtagWND@@@Z @ 0x19C6C4
 * Callers:
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 * Callees:
 *     _DecrementCompositedCount@8 @ 0x1536D1 (_DecrementCompositedCount@8.c)
 */

// attributes: thunk
void __stdcall DecComposited(struct tagWND *a1)
{
  DecrementCompositedCount();
}
