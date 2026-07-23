/*
 * XREFs of IopLiveDumpEndMirroringCallback @ 0x1409A9070
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveProcessorControlState @ 0x1403F7420 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x1403FF110 (RtlCaptureContext.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvlCollectLivedump @ 0x1404F3808 (HvlCollectLivedump.c)
 *     IoFillDumpHeader @ 0x1404FC6A8 (IoFillDumpHeader.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14050348C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140503B50 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140503D90 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140504638 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140504690 (IopLiveDumpTraceMirroringPhase1End.c)
 *     KeSaveSupervisorState @ 0x140514A88 (KeSaveSupervisorState.c)
 *     RtlNumberOfSetBitsEx @ 0x140582B40 (RtlNumberOfSetBitsEx.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1409A9838 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409A9BE8 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409A9F7C (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AA358 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AA6E8 (IopLiveDumpStartDumpDataBuffering.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AA778 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEndMirroringCallback(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  int v3; // ebx
  int v4; // ecx
  __int64 MillisecondCounter; // rax
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v8; // edx
  struct _KPRCB *v9; // r14
  __int64 v10; // rbx
  int v11; // edx
  _OWORD *v12; // rbx
  _CONTEXT *Context; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax

  v1 = IopLiveDumpContext;
  v2 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      IopLiveDumpTraceMirroringPhase1End();
      v4 = *(_DWORD *)(v1 + 80);
      if ( (v4 & 0x80u) != 0 )
      {
        MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
        v4 = *(_DWORD *)(v1 + 80);
        v2 = MillisecondCounter;
        v6 = MillisecondCounter - qword_140CF5180;
        if ( (v4 & 1) != 0 )
          *(_QWORD *)(v1 + 448) = v6;
        else
          *(_QWORD *)(v1 + 496) = v6;
      }
      if ( (v4 & 1) != 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        RtlCaptureContext(CurrentPrcb->Context);
        KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v8);
      }
      else
      {
        v9 = KeGetCurrentPrcb();
        v10 = *(_QWORD *)(v1 + 560);
        RtlCaptureContext(v9->Context);
        KiSaveProcessorControlState((__int64)&v9->ProcessorState, v11);
        v12 = (_OWORD *)(v10 + 840);
        if ( v12 )
        {
          memset(v12, 0, 0xBB8uLL);
          Context = v9->Context;
          v14 = 9LL;
          do
          {
            v15 = *(_OWORD *)&Context->P1Home;
            Context = (_CONTEXT *)((char *)Context + 128);
            *v12 = v15;
            v12 += 8;
            *(v12 - 7) = Context[-1].VectorRegister[22];
            *(v12 - 6) = Context[-1].VectorRegister[23];
            *(v12 - 5) = Context[-1].VectorRegister[24];
            *(v12 - 4) = Context[-1].VectorRegister[25];
            *(v12 - 3) = *(_OWORD *)&Context[-1].VectorControl;
            *(v12 - 2) = *(_OWORD *)&Context[-1].LastBranchToRip;
            *(v12 - 1) = *(_OWORD *)&Context[-1].LastExceptionToRip;
            --v14;
          }
          while ( v14 );
          *v12 = *(_OWORD *)&Context->P1Home;
          v12[1] = *(_OWORD *)&Context->P3Home;
          v12[2] = *(_OWORD *)&Context->P5Home;
          v12[3] = *(_OWORD *)&Context->ContextFlags;
          v12[4] = *(_OWORD *)&Context->SegGs;
        }
        if ( SaveSupervisorState )
        {
          KeSaveSupervisorState(
            (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
            MEMORY[0xFFFFF780000005F0] | 0x100LL);
          *(_BYTE *)(v1 + 425) = 1;
        }
      }
      v16 = *(_DWORD *)(v1 + 80);
      if ( (v16 & 0x80u) != 0 )
      {
        v17 = IopLiveDumpGetMillisecondCounter(0);
        IopLiveDumpTraceCaptureProcessorContextDuration((const GUID *)v1, v17 - v2);
        v16 = *(_DWORD *)(v1 + 80);
      }
      v18 = 0LL;
      if ( (v16 & 1) == 0 )
        v18 = v1 + 688;
      v3 = IopLiveDumpMarkRequiredDumpData(v1, v18);
      if ( v3 >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 1) != 0
          && (v20 = RtlNumberOfSetBitsEx((_QWORD *)(v1 + 544)),
              v21 = *(_DWORD *)(v1 + 80),
              v19 = v20,
              *(_QWORD *)(v1 + 104) = v20,
              (v21 & 0x200) != 0)
          && v20 > (*(_QWORD *)(v1 + 1048) >> 12) + (unsigned __int64)((*(_QWORD *)(v1 + 1048) & 0xFFFLL) != 0) )
        {
          v3 = -1073741670;
          *(_DWORD *)(v1 + 80) = v21 | 0x400;
        }
        else
        {
          v3 = IopLiveDumpMarkImportantDumpData(v1, v18, v19);
          if ( v3 >= 0 )
          {
            if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
            {
              IopLiveDumpPopulateBitmapForDump(v1);
            }
            else
            {
              IoFillDumpHeader(
                *(_NT_PRODUCT_TYPE **)(v1 + 560),
                6,
                *(_DWORD *)v1,
                *(_QWORD *)(v1 + 8),
                *(_QWORD *)(v1 + 16),
                *(_QWORD *)(v1 + 24),
                *(_QWORD *)(v1 + 32),
                (__int64)KeGetCurrentThread());
              if ( *(_QWORD *)(v1 + 696) || *(_QWORD *)(v1 + 704) )
              {
                if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
                  v2 = IopLiveDumpGetMillisecondCounter(0);
                HvlCollectLivedump(v22, *(_QWORD *)(v1 + 208), (_QWORD *)(v1 + 192), v1 + 144);
                if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
                {
                  *(_QWORD *)(v1 + 528) = IopLiveDumpGetMillisecondCounter(0) - v2;
                  IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration((const GUID *)v1);
                }
              }
              IopLiveDumpGenerateIptSecondaryData();
              IopLiveDumpPopulateBitmapForDump(v1);
              IopLiveDumpStartDumpDataBuffering(v1);
            }
            v3 = 0;
          }
        }
      }
      IopLiveDumpUncorralProcessors(v1 + 304, 0LL);
      if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
      {
        v23 = IopLiveDumpGetMillisecondCounter(0) - qword_140CF5180;
        if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
          *(_QWORD *)(v1 + 440) = v23;
        else
          *(_QWORD *)(v1 + 488) = v23;
      }
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    IopLiveDumpTraceMirroringPhase0End();
    *(_QWORD *)(v1 + 192) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    IopLiveDumpCorralProcessors((char *)(v1 + 304));
    v3 = 0;
    if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
      qword_140CF5180 = IopLiveDumpGetMillisecondCounter(0);
  }
  return (unsigned int)v3;
}
