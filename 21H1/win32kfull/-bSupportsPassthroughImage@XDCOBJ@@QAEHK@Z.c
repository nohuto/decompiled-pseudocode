/*
 * XREFs of ?bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z @ 0x2269E2
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 * Callees:
 *     ?bSupportsJPEG@XDCOBJ@@QAEHXZ @ 0x1D7C13 (-bSupportsJPEG@XDCOBJ@@QAEHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QAEHXZ @ 0x1D7C26 (-bSupportsPNG@XDCOBJ@@QAEHXZ.c)
 */

int __thiscall XDCOBJ::bSupportsPassthroughImage(XDCOBJ *this, unsigned int a2)
{
  if ( a2 == 4 )
    return XDCOBJ::bSupportsJPEG(this);
  if ( a2 == 5 )
    return XDCOBJ::bSupportsPNG(this);
  return 0;
}
