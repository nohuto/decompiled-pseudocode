/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1406B62F4
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F91C4 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x1406B4984 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406B60F8 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406B62C0 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140934DB4 (EtwpIncrementTraceFile.c)
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
