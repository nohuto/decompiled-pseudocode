/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01A3B6C
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018FA48 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(struct _KTHREAD **this, _DWORD *a2, int a3, int a4, unsigned __int64 a5)
{
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( (a2[9] & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  a2[8] = a4;
  a2[7] = a3;
  if ( a5 )
  {
    if ( (*(_DWORD *)(a5 + 36) & 0x40) != 0 )
    {
      if ( (a2[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      CTouchProcessor::ReferenceMsgData((__int64)this, (__int64)a2, 1);
      CTouchProcessor::UnreferenceMsgData(this, a5, 1LL);
    }
    *(_DWORD *)(a5 + 36) |= 0x20u;
  }
}
