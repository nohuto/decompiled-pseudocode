/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68
 * Callers:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D14F8 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01858A0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0186FEC (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C580 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0194A98 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A794 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AB70 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C019AC60 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C019B90C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C018C008 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018C2EC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C019C524 (WPP_RECORDER_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  int v7; // eax
  char v8; // al
  int v9; // [rsp+20h] [rbp-28h]

  _InterlockedDecrement((volatile signed __int32 *)(a2 + 24));
  v4 = (int)a3;
  v5 = (_DWORD *)a2;
  if ( (_DWORD)a3 == 1 )
  {
    v7 = *(_DWORD *)(a2 + 36);
    if ( (v7 & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      v7 = v5[9];
      if ( (v7 & 0x40) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          a2,
          v4 + 6,
          295,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        v7 = v5[9];
      }
    }
    v5[9] = v7 & 0xFFFFFFBF;
  }
  if ( (int)v4 > 8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = *((_BYTE *)v5 + v4 + 48);
  if ( !v8 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lq((_DWORD)a1, a2, a3, 296, v9, v4, (char)v5);
    v8 = *((_BYTE *)v5 + v4 + 48);
  }
  *((_BYTE *)v5 + v4 + 48) = v8 - 1;
  if ( !v5[6] )
  {
    if ( (v5[9] & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(a1, a2, (unsigned int)v5[7], (unsigned int)v5[8]);
    CTouchProcessor::FreeMsgData(a1, (__int64)v5, a3, a4);
  }
}
