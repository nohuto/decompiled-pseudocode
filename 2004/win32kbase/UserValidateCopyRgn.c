/*
 * XREFs of UserValidateCopyRgn @ 0x1C0014070
 * Callers:
 *     <none>
 * Callees:
 *     HmgValidHandle @ 0x1C00140F0 (HmgValidHandle.c)
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 */

HPALETTE __fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  HPALETTE RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = (HPALETTE)GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL) )
      {
        GreDeleteObject(RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
