/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1406DF014
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F9098 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x1406DD6A4 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406DEE18 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406DEFE0 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140934BE4 (EtwpIncrementTraceFile.c)
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
