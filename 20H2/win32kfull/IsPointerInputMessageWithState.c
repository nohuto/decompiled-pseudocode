/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C00D713C
 * Callers:
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0108 (xxxRetrievePointerInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C0208984 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     _QuerySendMessage @ 0x1C021DFBC (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(unsigned int a1)
{
  BOOL v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}
