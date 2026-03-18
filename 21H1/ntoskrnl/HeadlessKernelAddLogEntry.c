/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14036AF8C
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B3664 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
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
