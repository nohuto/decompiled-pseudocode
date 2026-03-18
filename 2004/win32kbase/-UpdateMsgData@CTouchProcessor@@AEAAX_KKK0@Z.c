/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C019DE0C
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0189D48 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0198DC0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(
        struct _KTHREAD **this,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v5; // ebx
  int v6; // esi
  __int64 v9; // r9

  v5 = a4;
  v6 = a3;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( (a2[9] & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  a2[8] = v5;
  a2[7] = v6;
  if ( a5 )
  {
    if ( (*(_DWORD *)(a5 + 36) & 0x40) != 0 )
    {
      if ( (a2[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
      CTouchProcessor::ReferenceMsgData((__int64)this, (__int64)a2, 1LL, a4);
      CTouchProcessor::UnreferenceMsgData(this, a5, 1LL, v9);
    }
    *(_DWORD *)(a5 + 36) |= 0x20u;
  }
}
