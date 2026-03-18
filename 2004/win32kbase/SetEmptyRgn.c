/*
 * XREFs of SetEmptyRgn @ 0x1C0014B70
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0014BB0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}
