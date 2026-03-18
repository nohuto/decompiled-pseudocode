/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018B8A0
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C0186630 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019900C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01865AC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  CTouchProcessor *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rsi
  bool v18; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v8, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  v15 = *((_DWORD *)a2 + 12);
  v16 = 0;
  v17 = *((_QWORD *)a2 + 17);
  if ( v15 )
  {
    LODWORD(v12) = *((_DWORD *)a2 + 12);
    do
    {
      v11 = (unsigned int)v12;
      v12 = *((_QWORD *)a2 + 17) + 480LL * (unsigned int)v12;
      if ( v17 >= v12 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
        v11 = *((unsigned int *)a2 + 12);
      }
      v15 = v11;
      if ( *(_WORD *)(v17 + 172) == a3 )
        break;
      v17 += 480LL;
      ++v16;
      v12 = (unsigned int)v11;
    }
    while ( v16 < (unsigned int)v11 );
  }
  v18 = v16 == v15;
  if ( v16 > v15 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    v18 = v16 == *((_DWORD *)a2 + 12);
  }
  if ( v18 )
    return 0LL;
  if ( a4 )
    *a4 = v16;
  return (struct CPointerInfoNode *)v17;
}
