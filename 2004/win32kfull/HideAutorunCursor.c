/*
 * XREFs of HideAutorunCursor @ 0x1C01D4A60
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
