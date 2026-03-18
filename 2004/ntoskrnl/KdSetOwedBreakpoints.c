/*
 * XREFs of KdSetOwedBreakpoints @ 0x14050CA80
 * Callers:
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x1409B75E0 (KdpSetOwedBreakpoints.c)
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
