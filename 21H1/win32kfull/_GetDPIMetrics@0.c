/*
 * XREFs of _GetDPIMetrics@0 @ 0xCCA30
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 */

int __stdcall GetDPIMetrics()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    return GetProcessDpiMetrics();
  else
    return Get96DpiMetrics();
}
