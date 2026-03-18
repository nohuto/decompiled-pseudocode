/*
 * XREFs of CreateEmptyRgn @ 0x1C00A8270
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
