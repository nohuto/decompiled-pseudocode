/*
 * XREFs of IsPointerParentNotify @ 0x1C00BEC14
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0099FE0 (TransformMessageBetweenCoordinateSpaces.c)
 *     NtUserfnPARENTNOTIFY @ 0x1C00BB050 (NtUserfnPARENTNOTIFY.c)
 *     UnlinkSendListSms @ 0x1C00BEB58 (UnlinkSendListSms.c)
 *     IsMiPPointerMessage @ 0x1C01E242C (IsMiPPointerMessage.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0207390 (NtUserfnPOINTERINPUT.c)
 *     _QuerySendMessage @ 0x1C021EE4C (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
