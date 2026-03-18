/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0186320
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x1C00347D8 (ApiSetAddMagnificationOutputTransform.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     GetPointerInfoSize @ 0x1C012B68C (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01865E0 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0189694 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C018E4BC (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01AE1A0 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        struct tagMANIPULATION_INPUT_INFO *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  CTouchProcessor *v13; // rcx
  int v14; // ebx
  size_t v15; // r12
  unsigned int PointerInfoSize; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagPROCESSINFO *InputProcessContext; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // rbp
  _QWORD *v27; // r13
  __int64 v28; // rcx
  int v29; // edx

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v10, v7) )
  {
    v14 = 0;
    v15 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 17) + 168LL));
      v15 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v17, v18, v19);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v13, *((void **)a4 + 8));
    if ( InputProcessContext )
      v24 = *((unsigned int *)InputProcessContext + 14);
    else
      v24 = 0LL;
    *((_DWORD *)a2 + 10) = v24;
    v25 = 0;
    *((_DWORD *)a2 + 11) = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v26 = *((_QWORD *)a4 + 17) + 480LL * v25;
        if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v26) )
        {
          v27 = (_QWORD *)((char *)a2 + 240 * v21);
          memmove(v27 + 7, (const void *)(v26 + 168), v15);
          v28 = 240LL * *((unsigned int *)a2 + 11);
          *(_OWORD *)((char *)a2 + v28 + 200) = *(_OWORD *)(v26 + 384);
          *(_OWORD *)((char *)a2 + v28 + 216) = *(_OWORD *)(v26 + 400);
          *(_OWORD *)((char *)a2 + v28 + 232) = *(_OWORD *)(v26 + 416);
          if ( (*(_DWORD *)(v26 + 4) & 0x80u) == 0 )
            v29 = 0;
          else
            v29 = *(_DWORD *)(v26 + 348);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 11) + 62) = v29;
          *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 11) + 32) = *(_QWORD *)(v26 + 448);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 11) + 66) = *(_DWORD *)(v26 + 456);
          v27[10] = 0LL;
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v27 + 11)) )
            ConvertPointCoordinates(v27[11]);
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v27 + 13)) )
            ConvertPointCoordinates(v27[13]);
          v21 = (unsigned int)++*((_DWORD *)a2 + 11);
        }
        ++v25;
      }
      while ( v25 < *((_DWORD *)a4 + 12) );
      v14 = v21;
    }
    if ( v14 != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v21, v22, v23);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_QWORD *)a2 + 4) = *((_QWORD *)a4 + 13);
    *((_DWORD *)a2 + 12) = -__CFSHR__(*((_DWORD *)a4 + 30), 10);
  }
}
