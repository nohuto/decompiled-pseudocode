/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018FA48
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018FCAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01A2630 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     EtwTracePointerCoalesce @ 0x1C012E590 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01A3B6C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rcx
  CTouchProcessor *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  unsigned int v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = 0;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  v13 = *(unsigned int *)a4;
  if ( (v13 & 0x800000) != 0 || (v13 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v13 = *(unsigned int *)a4;
  }
  if ( (int)v13 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v13 = *(unsigned int *)a4;
  }
  if ( (v13 & 0x100000) != 0 && (v13 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v14 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v14 )
      goto LABEL_27;
  }
  else if ( !v14 )
  {
    goto LABEL_27;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
LABEL_27:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v25);
  if ( !ValidNodeInFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  v18 = *(unsigned int *)ValidNodeInFrame;
  if ( (v18 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    v18 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v18 & 0x800000) != 0 || (v18 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    v18 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (int)v18 < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    v18 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v18 & 0x100000) != 0 && (v18 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  v20 = a6 == 0;
  *((_DWORD *)a4 + 59) = *((_DWORD *)ValidNodeInFrame + 59) + 1;
  *((_DWORD *)a4 + 86) = v25;
  if ( v20 )
  {
    v21 = *(_DWORD *)ValidNodeInFrame;
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      v21 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v21 & 0x800000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      v21 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v21 & 0x8000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
    if ( *(int *)a4 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
    *(_DWORD *)a4 |= 0x80000u;
    v22 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *(_DWORD *)ValidNodeInFrame) & 0x100000;
    *(_DWORD *)a4 = v22;
    v23 = v22 ^ (v22 ^ *(_DWORD *)ValidNodeInFrame) & 0x200000;
    *(_DWORD *)a4 = v23;
    *(_DWORD *)a4 = v23 ^ (v23 ^ *(_DWORD *)ValidNodeInFrame) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 80), *((_WORD *)a4 + 86), a6);
  return *((_QWORD *)a4 + 2);
}
