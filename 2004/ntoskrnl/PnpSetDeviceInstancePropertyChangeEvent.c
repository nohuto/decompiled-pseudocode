/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x140379FF4
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140728EF0 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037A010 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
