/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14067A750
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F16C0 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14067A554 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x14067A71C (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140930334 (EtwpIncrementTraceFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 < 0xB0u )
      return 3221225990LL;
    if ( (a1[11] & 0x20000) != 0 )
      return 0LL;
  }
  return 3221225485LL;
}
