/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14036B9C8
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B4188 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1409EC9AC (HdlspKernelAddLogEntry.c)
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
