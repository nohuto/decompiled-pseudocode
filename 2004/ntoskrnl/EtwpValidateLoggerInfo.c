/*
 * XREFs of EtwpValidateLoggerInfo @ 0x140645514
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F2950 (EtwpTransitionToRealtime.c)
 *     EtwpQueryTrace @ 0x140645318 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406454E0 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpFlushTrace @ 0x1406C65C8 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409315E4 (EtwpIncrementTraceFile.c)
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
