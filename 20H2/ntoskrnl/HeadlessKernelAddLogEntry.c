/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14036D9A8
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B6E24 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1409F29AC (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
