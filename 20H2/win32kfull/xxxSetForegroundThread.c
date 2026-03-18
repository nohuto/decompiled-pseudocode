/*
 * XREFs of xxxSetForegroundThread @ 0x1C01D2500
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C2134 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

void __fastcall xxxSetForegroundThread(struct tagTHREADINFO *a1, __int64 a2, struct tagWND *a3)
{
  xxxSetForegroundThreadWithWindowHint(a1, 0LL, a3);
}
