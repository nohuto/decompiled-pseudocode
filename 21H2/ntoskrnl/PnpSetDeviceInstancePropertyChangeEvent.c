/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14037E18C
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140746D9C (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037E1A8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
