/*
 * XREFs of UserValidateCopyRgn @ 0x1C00A8120
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     HmgValidHandle @ 0x1C00A81A0 (HmgValidHandle.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject(RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
