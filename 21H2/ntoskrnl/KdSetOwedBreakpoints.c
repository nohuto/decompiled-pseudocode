/*
 * XREFs of KdSetOwedBreakpoints @ 0x140565E50
 * Callers:
 *     KiPageFault @ 0x140430000 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140A74B64 (KdpSetOwedBreakpoints.c)
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
