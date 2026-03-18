/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x14036B9E4
 * Callers:
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036B918 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance((unsigned __int16 *)(a1 + 40));
}
