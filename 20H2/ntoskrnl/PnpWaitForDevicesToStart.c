/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140A5C8A0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407A25F4 (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
