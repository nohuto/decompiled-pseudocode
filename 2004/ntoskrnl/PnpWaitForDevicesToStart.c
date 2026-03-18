/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140A4D904
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14078C344 (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
