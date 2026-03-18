/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0014170
 * Callers:
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     UserSetDCVisRgn @ 0x1C0013EE0 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 */

__int64 CreateEmptyRgnPublic()
{
  __int64 RectRgnIndirect; // rbx
  __int64 v1; // r8

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v1) = 4;
    HmgSetOwner(RectRgnIndirect, 0LL, v1);
  }
  return RectRgnIndirect;
}
