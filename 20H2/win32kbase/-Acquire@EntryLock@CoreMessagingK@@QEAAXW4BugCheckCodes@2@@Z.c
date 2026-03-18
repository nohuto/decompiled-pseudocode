/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C002E0F4
 * Callers:
 *     CoreMsgObjectCallout @ 0x1C002C73C (CoreMsgObjectCallout.c)
 *     CoreMsgSend @ 0x1C002DC90 (CoreMsgSend.c)
 *     CoreMsgCreatePort @ 0x1C00A9098 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00A9BD0 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgOpenConnection @ 0x1C00A9D3C (CoreMsgOpenConnection.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01F9374 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
