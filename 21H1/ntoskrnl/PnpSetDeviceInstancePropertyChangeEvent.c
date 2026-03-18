/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14037B7FC
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14072C26C (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037B818 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
