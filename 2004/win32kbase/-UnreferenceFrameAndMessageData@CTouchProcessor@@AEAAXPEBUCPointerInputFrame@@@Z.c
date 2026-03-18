/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC94
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018CC20 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018E80C (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018E8E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01908AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0192A88 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0194068 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0194EC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  CInputThread *v6; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned __int64 i; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID CurrentProcess; // rax
  CTouchProcessor *v24; // rcx
  CTouchProcessor *v25; // rcx
  int v26; // edi
  __int64 *PrevMsgId; // rax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = *((_DWORD *)v6 + 10);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 != v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v14 = *((unsigned int *)gptiCurrent + 120);
  if ( (v14 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v10, v12, v13);
  v15 = *((unsigned int *)a2 + 12);
  v16 = 0;
  for ( i = *((_QWORD *)a2 + 17); v16 < (unsigned int)v15; i += 480LL )
  {
    v18 = *((_QWORD *)a2 + 17) + 480 * v15;
    if ( i >= v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v10, v12, v13);
    if ( (*((_DWORD *)a2 + 30) & 1) != 0 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v10, v12, v13);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        CTouchProcessor::FreePointerInfoNodeInt(this, a2, v16, v22);
      }
    }
    else
    {
      CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v10);
      if ( !CurrentProcess
        || CurrentProcess != g_pepDwm
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
      {
        if ( !*(_QWORD *)(i + 16)
          || (v25 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                           v24,
                                                           a2,
                                                           (const struct CPointerInfoNode *)i)
                                       + 35),
              ((unsigned __int8)v25 & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
            CTouchProcessor::FreePointerInfoNode(this, v10, *((unsigned int *)a2 + 10), v16);
        }
        else
        {
          v26 = *(_DWORD *)(i + 180) & 2;
          if ( (*(_DWORD *)(i + 180) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v25, *(__int64 **)(i + 16));
            if ( PrevMsgId )
            {
              if ( (*((_DWORD *)PrevMsgId + 9) & 0x40) != 0 )
                CTouchProcessor::UnreferenceMsgData(this, PrevMsgId, 1LL);
            }
          }
          if ( !v26 )
            CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
        }
      }
    }
    v15 = *((unsigned int *)a2 + 12);
    ++v16;
  }
  CTouchProcessor::UnreferenceFrame(this, a2, v12, v13);
}
