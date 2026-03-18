/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x14036DA10
 * Callers:
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036DA2C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
