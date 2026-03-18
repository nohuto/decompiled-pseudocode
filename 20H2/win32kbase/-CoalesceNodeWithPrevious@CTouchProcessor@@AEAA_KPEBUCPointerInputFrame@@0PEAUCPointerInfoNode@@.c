/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0187808
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0187A6C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019A3D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     EtwTracePointerCoalesce @ 0x1C0126250 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C019B90C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  CTouchProcessor *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // zf
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  unsigned int v43; // [rsp+40h] [rbp+8h] BYREF

  v43 = 0;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v15, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
  v22 = *(unsigned int *)a4;
  if ( (v22 & 0x800000) != 0 || (v22 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
    v22 = *(unsigned int *)a4;
  }
  if ( (int)v22 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
    v22 = *(unsigned int *)a4;
  }
  if ( (v22 & 0x100000) != 0 && (v22 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
  v23 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v23 )
      goto LABEL_27;
  }
  else if ( !v23 )
  {
    goto LABEL_27;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
LABEL_27:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v43);
  if ( !ValidNodeInFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27, v28);
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
  v33 = *(unsigned int *)ValidNodeInFrame;
  if ( (v33 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v29, v31, v32);
    v33 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v33 & 0x800000) != 0 || (v33 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v29, v31, v32);
    v33 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (int)v33 < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v29, v31, v32);
    v33 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v33 & 0x100000) != 0 && (v33 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v29, v31, v32);
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v29, v31, v32);
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v29, v31, v32);
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  v38 = a6 == 0;
  *((_DWORD *)a4 + 59) = *((_DWORD *)ValidNodeInFrame + 59) + 1;
  *((_DWORD *)a4 + 86) = v43;
  if ( v38 )
  {
    v39 = *(_DWORD *)ValidNodeInFrame;
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
      v39 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v39 & 0x800000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
      v39 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v39 & 0x8000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
    if ( *(int *)a4 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
    *(_DWORD *)a4 |= 0x80000u;
    v40 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *(_DWORD *)ValidNodeInFrame) & 0x100000;
    *(_DWORD *)a4 = v40;
    v41 = v40 ^ (v40 ^ *(_DWORD *)ValidNodeInFrame) & 0x200000;
    *(_DWORD *)a4 = v41;
    *(_DWORD *)a4 = v41 ^ (v41 ^ *(_DWORD *)ValidNodeInFrame) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 80), *((_WORD *)a4 + 86), a6);
  return *((_QWORD *)a4 + 2);
}
