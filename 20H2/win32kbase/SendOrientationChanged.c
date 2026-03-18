/*
 * XREFs of SendOrientationChanged @ 0x1C01A9A50
 * Callers:
 *     SetContentOrientation @ 0x1C01A9BA0 (SetContentOrientation.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendOrientationChanged(__int64 a1)
{
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, 1);
}
