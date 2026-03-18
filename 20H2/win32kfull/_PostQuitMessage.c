/*
 * XREFs of _PostQuitMessage @ 0x1C000B780
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C000B7A4 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(unsigned int a1)
{
  return IPostQuitMessage(gptiCurrent, a1);
}
