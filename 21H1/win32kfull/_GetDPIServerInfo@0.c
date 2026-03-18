/*
 * XREFs of _GetDPIServerInfo@0 @ 0xEC39A
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 */

int __stdcall GetDPIServerInfo()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo();
}
