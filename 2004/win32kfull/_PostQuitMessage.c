/*
 * XREFs of _PostQuitMessage @ 0x1C00C0250
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C00C0274 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(unsigned int a1)
{
  return IPostQuitMessage(gptiCurrent, a1);
}
