/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1403A5358
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14080DA78 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140255030 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance((unsigned __int16 *)(a1 + 40));
}
