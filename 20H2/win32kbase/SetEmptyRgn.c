/*
 * XREFs of SetEmptyRgn @ 0x1C001CD60
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C001CDA0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}
