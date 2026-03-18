/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14071499C
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F7364 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x1407130C4 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407147A0 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x140714968 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140937414 (EtwpIncrementTraceFile.c)
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
