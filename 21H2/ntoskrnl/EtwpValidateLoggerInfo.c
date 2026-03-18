/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1406EF140
 * Callers:
 *     EtwpTransitionToRealtime @ 0x140630D00 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406EF10C (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpIncrementTraceFile @ 0x1409E4DAC (EtwpIncrementTraceFile.c)
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
