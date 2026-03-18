/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C00A8220
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 *     UserSetDCVisRgn @ 0x1C00A7F90 (UserSetDCVisRgn.c)
 * Callees:
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((__int64)RectRgnIndirect, 0, 4);
  }
  return RectRgnIndirect;
}
