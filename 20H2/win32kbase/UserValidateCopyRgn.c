/*
 * XREFs of UserValidateCopyRgn @ 0x1C001F990
 * Callers:
 *     <none>
 * Callees:
 *     HmgValidHandle @ 0x1C001FA10 (HmgValidHandle.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 */

HBRUSH __fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  HBRUSH RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = (HBRUSH)GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL) )
      {
        GreDeleteObject(RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
