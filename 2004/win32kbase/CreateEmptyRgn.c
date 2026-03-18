/*
 * XREFs of CreateEmptyRgn @ 0x1C00141C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 */

__int64 CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
