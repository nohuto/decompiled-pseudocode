/*
 * XREFs of SendOrientationChanged @ 0x1C01B1B30
 * Callers:
 *     SetContentOrientation @ 0x1C01B1C80 (SetContentOrientation.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendOrientationChanged(__int64 a1)
{
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, 1);
}
