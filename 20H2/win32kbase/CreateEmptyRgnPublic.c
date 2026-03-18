/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C001FA90
 * Callers:
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     UserSetDCVisRgn @ 0x1C001F800 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
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
