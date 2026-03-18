/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C019ACC0
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0009750 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsLastMsgData(struct _KTHREAD **this, __int64 a2)
{
  _QWORD *v3; // rbx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    return 0LL;
  if ( *v3 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( v3[1] != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_WORD *)v3 - 104) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  return *((_DWORD *)v3 - 47) == 3;
}
