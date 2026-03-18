/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C018E560
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0193E00 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x1C00641A8 (ApiSetAddMagnificationOutputTransform.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     GetPointerInfoSize @ 0x1C01339CC (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C018E820 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01918BC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C01966DC (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01B6280 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        struct tagMANIPULATION_INPUT_INFO *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  CTouchProcessor *v9; // rcx
  CTouchProcessor *v10; // rcx
  int v11; // ebx
  size_t v12; // r12
  unsigned int PointerInfoSize; // eax
  struct tagPROCESSINFO *InputProcessContext; // rax
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rbp
  __int64 v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // rcx
  int v21; // edx

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v9, v7) )
  {
    v11 = 0;
    v12 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 17) + 168LL));
      v12 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v10, *((void **)a4 + 8));
    if ( InputProcessContext )
      v15 = *((unsigned int *)InputProcessContext + 14);
    else
      v15 = 0LL;
    *((_DWORD *)a2 + 10) = v15;
    v16 = 0;
    *((_DWORD *)a2 + 11) = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v17 = *((_QWORD *)a4 + 17) + 480LL * v16;
        if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v17) )
        {
          v19 = (_QWORD *)((char *)a2 + 240 * v18);
          memmove(v19 + 7, (const void *)(v17 + 168), v12);
          v20 = 240LL * *((unsigned int *)a2 + 11);
          *(_OWORD *)((char *)a2 + v20 + 200) = *(_OWORD *)(v17 + 384);
          *(_OWORD *)((char *)a2 + v20 + 216) = *(_OWORD *)(v17 + 400);
          *(_OWORD *)((char *)a2 + v20 + 232) = *(_OWORD *)(v17 + 416);
          if ( (*(_DWORD *)(v17 + 4) & 0x80u) == 0 )
            v21 = 0;
          else
            v21 = *(_DWORD *)(v17 + 348);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 11) + 62) = v21;
          *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 11) + 32) = *(_QWORD *)(v17 + 448);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 11) + 66) = *(_DWORD *)(v17 + 456);
          v19[10] = 0LL;
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v19 + 11)) )
            ConvertPointCoordinates(v19[11]);
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v19 + 13)) )
            ConvertPointCoordinates(v19[13]);
          LODWORD(v18) = ++*((_DWORD *)a2 + 11);
        }
        ++v16;
      }
      while ( v16 < *((_DWORD *)a4 + 12) );
      v11 = v18;
    }
    if ( v11 != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_QWORD *)a2 + 4) = *((_QWORD *)a4 + 13);
    *((_DWORD *)a2 + 12) = -__CFSHR__(*((_DWORD *)a4 + 30), 10);
  }
}
