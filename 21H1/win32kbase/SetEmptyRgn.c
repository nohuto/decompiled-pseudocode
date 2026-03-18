/*
 * XREFs of SetEmptyRgn @ 0x1C00A9760
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}
