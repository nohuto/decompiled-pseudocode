/*
 * XREFs of HideAutorunCursor @ 0x1C01D3C50
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
