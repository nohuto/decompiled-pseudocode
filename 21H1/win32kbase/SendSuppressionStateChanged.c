/*
 * XREFs of SendSuppressionStateChanged @ 0x1C01B1C40
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendSuppressionStateChanged(__int64 a1)
{
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, 1);
}
