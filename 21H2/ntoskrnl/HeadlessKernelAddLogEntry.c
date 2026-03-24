/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14036F610
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B83B4 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1409EF9AC (HdlspKernelAddLogEntry.c)
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
