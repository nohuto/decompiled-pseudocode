/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0
 * Callers:
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D0C10 (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C018DAE0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C018DDF0 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C0191904 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C019B3C0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EB90 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01A3B6C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C01A4784 (WPP_RECORDER_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CTouchProcessor::ReferenceMsgData(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // zf
  char result; // al
  int v8; // [rsp+20h] [rbp-28h]

  v3 = a3;
  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 24));
  if ( a3 == 1 )
  {
    v5 = *(_DWORD *)(a2 + 36);
    if ( (v5 & 0x40) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v5 = *(_DWORD *)(v4 + 36);
      if ( (v5 & 0x40) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          a2,
          v3 + 6,
          293,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        v5 = *(_DWORD *)(v4 + 36);
      }
    }
    *(_DWORD *)(v4 + 36) = v5 | 0x40;
  }
  if ( (int)v3 > 8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v6 = (*(_BYTE *)(v3 + v4 + 48))++ == 0xFF;
  result = *(_BYTE *)(v3 + v4 + 48);
  if ( v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    result = *(_BYTE *)(v3 + v4 + 48);
  }
  if ( !result && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_Lq(a1, a2, a3, 294, v8, v3, v4);
  return result;
}
