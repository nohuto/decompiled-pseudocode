/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x14036BA30
 * Callers:
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036BA4C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
