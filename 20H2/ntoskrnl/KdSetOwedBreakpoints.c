/*
 * XREFs of KdSetOwedBreakpoints @ 0x1405103B0
 * Callers:
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x1409BD5E0 (KdpSetOwedBreakpoints.c)
 */

__int64 KdSetOwedBreakpoints()
{
  __int64 result; // rax

  if ( !KdPitchDebugger )
  {
    if ( KdpOweBreakpoint )
      return KdpSetOwedBreakpoints();
  }
  return result;
}
