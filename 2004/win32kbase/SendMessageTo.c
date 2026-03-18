/*
 * XREFs of SendMessageTo @ 0x1C0069660
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendMessageTo(__int64 a1, __int64 a2, unsigned int a3)
{
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, (unsigned int)a1, a2, a3);
}
