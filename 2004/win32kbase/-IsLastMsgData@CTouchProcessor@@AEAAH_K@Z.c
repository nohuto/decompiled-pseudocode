/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C0194FC0
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C001F380 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsLastMsgData(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v5 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    return 0LL;
  if ( *v5 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( v5[1] != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_WORD *)v5 - 104) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  return *((_DWORD *)v5 - 47) == 3;
}
