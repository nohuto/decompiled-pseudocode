/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14078C4EC
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140255030 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1402DE270 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403A6C78 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x140768194 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x1407699F8 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x14076C288 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14078AB30 (PnpSetCustomTargetEvent.c)
 *     PnpShutdownDevices @ 0x1409404FC (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140950968 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1409509D8 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140950AE4 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140950B80 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140950C38 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCreateDeviceEventEntry(unsigned int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, a1, 1265659472LL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
