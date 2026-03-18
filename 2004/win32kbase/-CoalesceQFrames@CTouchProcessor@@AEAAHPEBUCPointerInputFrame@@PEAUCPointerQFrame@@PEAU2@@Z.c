/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0189FAC
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C018CA08 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1C00016F0 (ApiSetEditionDelQEntry.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C0127980 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0128100 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188B70 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188C3C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0189BD4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0189D48 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C018DE9C (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01907C4 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0194F78 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C019C854 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  __int64 v8; // rdx
  CTouchProcessor *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // r13d
  const struct CPointerInfoNode *v25; // rsi
  unsigned int v26; // r12d
  unsigned __int64 v27; // rcx
  int v28; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagQMSG *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // r12d
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  unsigned int v44; // ebx
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct tagQ *v48; // rcx
  __int64 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // rcx
  int CanCoalesceNodeWithPrevious; // [rsp+30h] [rbp-10h]
  struct tagQ *v57; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v59; // [rsp+90h] [rbp+50h] BYREF
  struct CPointerInputFrame *v60; // [rsp+98h] [rbp+58h]

  v60 = a4;
  v57 = 0LL;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  v16 = *((_DWORD *)a3 + 35);
  if ( (v16 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    v16 = *((_DWORD *)a3 + 35);
  }
  if ( (v16 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    v16 = *((_DWORD *)a3 + 35);
  }
  if ( (v16 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v21 = (__int64)result;
  if ( !result )
    return result;
  v22 = *((unsigned int *)a2 + 12);
  v23 = 1;
  v24 = 0;
  v59 = 1;
  v25 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
  v26 = 0;
  CanCoalesceNodeWithPrevious = 1;
  if ( !(_DWORD)v22 )
    goto LABEL_46;
  while ( 1 )
  {
    v27 = *((_QWORD *)a2 + 17) + 480 * v22;
    if ( (unsigned __int64)v25 >= v27 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v18, v19, v20);
    if ( *((_DWORD *)v25 + 2) == *(_DWORD *)a3 )
    {
      if ( (*(_DWORD *)v25 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v25) )
      {
        v57 = 0LL;
        NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v25, v28, &v57);
        v34 = NodeQueuedMessage;
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            if ( !v57 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
            v35 = *(_DWORD *)(v21 + 4);
            if ( v26 < v35 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
              v35 = *(_DWORD *)(v21 + 4);
            }
            if ( v35 >= *(_DWORD *)v21 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
              v35 = *(_DWORD *)(v21 + 4);
            }
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL * v35) = v57;
            v36 = 2LL * *(unsigned int *)(v21 + 4);
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v21 + 4))++ + 8) = v34;
            if ( *(_DWORD *)(v21 + 4) > *(_DWORD *)v21 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, 2LL * v35, v32, v33);
            CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                            this,
                                            v60,
                                            v25,
                                            v34,
                                            a3,
                                            (enum CPointerCoalesce *)&v59);
            v23 = CanCoalesceNodeWithPrevious;
            if ( !CanCoalesceNodeWithPrevious )
              goto LABEL_74;
            v24 = 1;
            goto LABEL_35;
          }
          v59 = 18;
        }
        else
        {
          v59 = 15;
        }
        v23 = 0;
        goto LABEL_74;
      }
      if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v60, v25, (enum CPointerCoalesce *)&v59) )
        break;
    }
LABEL_35:
    v22 = *((unsigned int *)a2 + 12);
    ++v26;
    v25 = (const struct CPointerInfoNode *)((char *)v25 + 480);
    if ( v26 >= (unsigned int)v22 )
      goto LABEL_44;
  }
  if ( v59 != 3 && v59 != 20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v18, v19, v20);
  v23 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_44:
  if ( v23 )
  {
    if ( !v24 )
    {
LABEL_46:
      v23 = 0;
      v59 = 19;
      CanCoalesceNodeWithPrevious = 0;
    }
    if ( v23 )
    {
      v38 = *((unsigned int *)a3 + 34);
      if ( (_DWORD)v38 != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
      {
        v23 = 0;
        v59 = 17;
        CanCoalesceNodeWithPrevious = 0;
      }
      if ( v23 )
      {
        if ( *(_DWORD *)(v21 + 4) > (unsigned int)v38 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v18, v19, v20);
        if ( v59 != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v18, v19, v20);
        EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 1);
        v41 = 0;
        v42 = *((unsigned int *)a2 + 12);
        v43 = *((_QWORD *)a2 + 17);
        if ( (_DWORD)v42 )
        {
          v44 = 0;
          do
          {
            v45 = *((_QWORD *)a2 + 17) + 480LL * (unsigned int)v42;
            if ( v43 >= v45 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v42, v39, v40);
            if ( *(_DWORD *)(v43 + 8) == *(_DWORD *)a3
              && (*(_DWORD *)v43 & 0x2000) == 0
              && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v43) )
            {
              if ( v44 > v41 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v39, v40);
              if ( v44 >= *(_DWORD *)(v21 + 4) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v39, v40);
              v48 = *(struct tagQ **)(*(_QWORD *)(v21 + 8) + 16LL * v44);
              v57 = v48;
              v49 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL * v44 + 8);
              if ( *(_QWORD *)(v43 + 16) != *(_QWORD *)(v49 + 40) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, 2LL * v44, v39, v40);
              CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v60, (struct CPointerInfoNode *)v43, v41, 1);
              if ( *(_QWORD *)(v43 + 16) == *(_QWORD *)(v49 + 40) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v52, v53);
              InputTraceLogging::Delivery::CoalesceMessage((const struct tagQMSG *)v49, v50);
              ApiSetEditionDelQEntry((__int64)v57 + 24, v49);
              ++v44;
            }
            v42 = *((unsigned int *)a2 + 12);
            ++v41;
            v43 += 480LL;
          }
          while ( v41 < (unsigned int)v42 );
          v23 = CanCoalesceNodeWithPrevious;
        }
        EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), v42, 1);
      }
    }
  }
LABEL_74:
  v54 = v59;
  v55 = *((_DWORD *)a3 + 35) & 0xFFFFFFF9 | (2 * ((2 * (v23 & 1)) | v23 & 1));
  *((_DWORD *)a3 + 35) = v55;
  CTouchProcessor::TrackCoalesceOnReassign(v55, a3, v54);
  return (struct tagCPointerCoalesceInfo *)v23;
}
