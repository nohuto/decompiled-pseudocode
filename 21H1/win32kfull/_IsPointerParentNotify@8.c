/*
 * XREFs of _IsPointerParentNotify@8 @ 0x46012
 * Callers:
 *     _NtUserDispatchMessage@4 @ 0x45A6E (_NtUserDispatchMessage@4.c)
 *     _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458 (_TransformMessageBetweenCoordinateSpaces@24.c)
 *     _IsMiPPointerMessage@8 @ 0x14E3B9 (_IsMiPPointerMessage@8.c)
 *     _NtUserfnPARENTNOTIFY@28 @ 0x16D29F (_NtUserfnPARENTNOTIFY@28.c)
 *     _NtUserfnPOINTERINPUT@28 @ 0x16D2EA (_NtUserfnPOINTERINPUT@28.c)
 *     __QuerySendMessage@8 @ 0x1813B0 (__QuerySendMessage@8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
