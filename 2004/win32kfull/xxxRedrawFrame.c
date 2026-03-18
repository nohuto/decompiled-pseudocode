/*
 * XREFs of xxxRedrawFrame @ 0x1C0153D10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxRedrawFrame(struct tagWND *a1)
{
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
