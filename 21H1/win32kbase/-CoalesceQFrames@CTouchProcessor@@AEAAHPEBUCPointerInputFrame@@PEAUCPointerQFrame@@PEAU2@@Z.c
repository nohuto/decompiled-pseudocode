/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018FCAC
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0192708 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1C00015A0 (ApiSetEditionDelQEntry.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C012D970 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C012E0F0 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E870 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E93C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C018F8D4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018FA48 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0193B9C (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01964C4 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C019AC78 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01A25B4 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  CTouchProcessor *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v15; // r13d
  const struct CPointerInfoNode *v16; // rsi
  unsigned int v17; // r12d
  unsigned __int64 v18; // rcx
  int v19; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  __int64 v21; // rcx
  struct tagQMSG *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // r12d
  unsigned int v28; // edx
  unsigned __int64 v29; // rsi
  unsigned int v30; // ebx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  struct tagQ *v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  int CanCoalesceNodeWithPrevious; // [rsp+30h] [rbp-10h]
  struct tagQ *v40; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v42; // [rsp+90h] [rbp+50h] BYREF
  struct CPointerInputFrame *v43; // [rsp+98h] [rbp+58h]

  v43 = a4;
  v40 = 0LL;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v8, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  v10 = *((_DWORD *)a3 + 35);
  if ( (v10 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v10 = *((_DWORD *)a3 + 35);
  }
  if ( (v10 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v10 = *((_DWORD *)a3 + 35);
  }
  if ( (v10 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v12 = (__int64)result;
  if ( !result )
    return result;
  v13 = *((unsigned int *)a2 + 12);
  v14 = 1;
  v15 = 0;
  v42 = 1;
  v16 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
  v17 = 0;
  CanCoalesceNodeWithPrevious = 1;
  if ( !(_DWORD)v13 )
    goto LABEL_46;
  while ( 1 )
  {
    v18 = *((_QWORD *)a2 + 17) + 480 * v13;
    if ( (unsigned __int64)v16 >= v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    if ( *((_DWORD *)v16 + 2) == *(_DWORD *)a3 )
    {
      if ( (*(_DWORD *)v16 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v16) )
      {
        v40 = 0LL;
        NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v16, v19, &v40);
        v22 = NodeQueuedMessage;
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            if ( !v40 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
            v23 = *(_DWORD *)(v12 + 4);
            if ( v17 < v23 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
              v23 = *(_DWORD *)(v12 + 4);
            }
            if ( v23 >= *(_DWORD *)v12 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
              v23 = *(_DWORD *)(v12 + 4);
            }
            *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v23) = v40;
            v24 = 2LL * *(unsigned int *)(v12 + 4);
            *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v12 + 4))++ + 8) = v22;
            if ( *(_DWORD *)(v12 + 4) > *(_DWORD *)v12 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
            CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                            this,
                                            v43,
                                            v16,
                                            v22,
                                            a3,
                                            (enum CPointerCoalesce *)&v42);
            v14 = CanCoalesceNodeWithPrevious;
            if ( !CanCoalesceNodeWithPrevious )
              goto LABEL_74;
            v15 = 1;
            goto LABEL_35;
          }
          v42 = 18;
        }
        else
        {
          v42 = 15;
        }
        v14 = 0;
        goto LABEL_74;
      }
      if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v43, v16, (enum CPointerCoalesce *)&v42) )
        break;
    }
LABEL_35:
    v13 = *((unsigned int *)a2 + 12);
    ++v17;
    v16 = (const struct CPointerInfoNode *)((char *)v16 + 480);
    if ( v17 >= (unsigned int)v13 )
      goto LABEL_44;
  }
  if ( v42 != 3 && v42 != 20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
  v14 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_44:
  if ( v14 )
  {
    if ( !v15 )
    {
LABEL_46:
      v14 = 0;
      v42 = 19;
      CanCoalesceNodeWithPrevious = 0;
    }
    if ( v14 )
    {
      v26 = *((unsigned int *)a3 + 34);
      if ( (_DWORD)v26 != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
      {
        v14 = 0;
        v42 = 17;
        CanCoalesceNodeWithPrevious = 0;
      }
      if ( v14 )
      {
        if ( *(_DWORD *)(v12 + 4) > (unsigned int)v26 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
        if ( v42 != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
        EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 1);
        v27 = 0;
        v28 = *((_DWORD *)a2 + 12);
        v29 = *((_QWORD *)a2 + 17);
        if ( v28 )
        {
          v30 = 0;
          do
          {
            v31 = *((_QWORD *)a2 + 17) + 480LL * v28;
            if ( v29 >= v31 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
            if ( *(_DWORD *)(v29 + 8) == *(_DWORD *)a3
              && (*(_DWORD *)v29 & 0x2000) == 0
              && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v29) )
            {
              if ( v30 > v27 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
              if ( v30 >= *(_DWORD *)(v12 + 4) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
              v33 = *(struct tagQ **)(*(_QWORD *)(v12 + 8) + 16LL * v30);
              v40 = v33;
              v34 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v30 + 8);
              if ( *(_QWORD *)(v29 + 16) != *(_QWORD *)(v34 + 40) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
              CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v43, (struct CPointerInfoNode *)v29, v27, 1);
              if ( *(_QWORD *)(v29 + 16) == *(_QWORD *)(v34 + 40) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
              InputTraceLogging::Delivery::CoalesceMessage((const struct tagQMSG *)v34, v35);
              ApiSetEditionDelQEntry((__int64)v40 + 24, v34);
              ++v30;
            }
            v28 = *((_DWORD *)a2 + 12);
            ++v27;
            v29 += 480LL;
          }
          while ( v27 < v28 );
          v14 = CanCoalesceNodeWithPrevious;
        }
        EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), v28, 1);
      }
    }
  }
LABEL_74:
  v37 = v42;
  v38 = *((_DWORD *)a3 + 35) & 0xFFFFFFF9 | (2 * ((2 * (v14 & 1)) | v14 & 1));
  *((_DWORD *)a3 + 35) = v38;
  CTouchProcessor::TrackCoalesceOnReassign(v38, a3, v37);
  return (struct tagCPointerCoalesceInfo *)v14;
}
