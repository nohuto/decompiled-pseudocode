/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29F4
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0192920 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C019450C (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0198788 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0199D68 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned __int64 i; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  CTouchProcessor *v17; // rcx
  CTouchProcessor *v18; // rcx
  int v19; // edi
  __int64 *PrevMsgId; // rax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v4 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  v10 = *((unsigned int *)gptiCurrent + 120);
  if ( (v10 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v11 = *((unsigned int *)a2 + 12);
  v12 = 0;
  for ( i = *((_QWORD *)a2 + 17); v12 < (unsigned int)v11; i += 480LL )
  {
    v14 = *((_QWORD *)a2 + 17) + 480 * v11;
    if ( i >= v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    if ( (*((_DWORD *)a2 + 30) & 1) != 0 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
        CTouchProcessor::FreePointerInfoNodeInt(this, a2, v12);
      }
    }
    else
    {
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v8);
      if ( !CurrentProcess
        || CurrentProcess != g_pepDwm
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
      {
        if ( !*(_QWORD *)(i + 16)
          || (v18 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                           v17,
                                                           a2,
                                                           (const struct CPointerInfoNode *)i)
                                       + 35),
              ((unsigned __int8)v18 & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
            CTouchProcessor::FreePointerInfoNode(this, v8, *((_DWORD *)a2 + 10), v12);
        }
        else
        {
          v19 = *(_DWORD *)(i + 180) & 2;
          if ( (*(_DWORD *)(i + 180) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v18, *(__int64 **)(i + 16));
            if ( PrevMsgId )
            {
              if ( (*((_DWORD *)PrevMsgId + 9) & 0x40) != 0 )
                CTouchProcessor::UnreferenceMsgData(this, PrevMsgId, 1LL);
            }
          }
          if ( !v19 )
            CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
        }
      }
    }
    v11 = *((unsigned int *)a2 + 12);
    ++v12;
  }
  CTouchProcessor::UnreferenceFrame(this, a2);
}
