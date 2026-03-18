/*
 * XREFs of IsPointerParentNotify @ 0x1C00D7118
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0055CC0 (TransformMessageBetweenCoordinateSpaces.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 *     NtUserfnPARENTNOTIFY @ 0x1C0128300 (NtUserfnPARENTNOTIFY.c)
 *     IsMiPPointerMessage @ 0x1C01E176C (IsMiPPointerMessage.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0206520 (NtUserfnPOINTERINPUT.c)
 *     _QuerySendMessage @ 0x1C021DFBC (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
