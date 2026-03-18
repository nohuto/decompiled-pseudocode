/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C00A2970
 * Callers:
 *     PostInputMessage @ 0x1C00B19CC (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C00BEB58 (UnlinkSendListSms.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0D78 (xxxRetrievePointerInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C02097F4 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     _QuerySendMessage @ 0x1C021EE4C (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}
