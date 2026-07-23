/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14036F7C0
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B8524 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1409F09AC (HdlspKernelAddLogEntry.c)
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
