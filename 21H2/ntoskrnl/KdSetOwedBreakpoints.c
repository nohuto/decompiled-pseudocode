/*
 * XREFs of KdSetOwedBreakpoints @ 0x140512120
 * Callers:
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x1409BB5E0 (KdpSetOwedBreakpoints.c)
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
