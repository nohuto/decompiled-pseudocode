/*
 * XREFs of KiInitializeBootStructures @ 0x14099D160
 * Callers:
 *     KiSystemStartup @ 0x140990010 (KiSystemStartup.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
 *     KeInitializeAffinityEx @ 0x1402CDC50 (KeInitializeAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     HalInitializeProcessor @ 0x1403ADC60 (HalInitializeProcessor.c)
 *     KiDetectTsx @ 0x1403B5160 (KiDetectTsx.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     KiDetermineRetpolineEnablement @ 0x1403CD320 (KiDetermineRetpolineEnablement.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     atoi @ 0x1403D1A70 (atoi.c)
 *     KiSaveInitialProcessorControlState @ 0x1403FE300 (KiSaveInitialProcessorControlState.c)
 *     KiGetProcessorSignature @ 0x14099CEA8 (KiGetProcessorSignature.c)
 *     KiInitializeNXSupport @ 0x14099D02C (KiInitializeNXSupport.c)
 *     ExInitPoolLookasidePointers @ 0x14099D5A8 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x14099D788 (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x14099DB6C (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x14099F964 (KiSetProcessorSignature.c)
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 *     KiInitializeIdt @ 0x1409A09F8 (KiInitializeIdt.c)
 *     CmInitBootFeatureConfigurations @ 0x140A39340 (CmInitBootFeatureConfigurations.c)
 *     InitializeBuildStrings @ 0x140A39E88 (InitializeBuildStrings.c)
 *     MmInitSystem @ 0x140A54D6C (MmInitSystem.c)
 *     InbvDriverInitialize @ 0x140A6C590 (InbvDriverInitialize.c)
 *     ExRngInitializeSystem @ 0x140A6F660 (ExRngInitializeSystem.c)
 *     HvlEnableVsmCalls @ 0x140A75220 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  _KTHREAD *v7; // rbx
  __int64 v8; // rax
  bool v9; // zf
  _KIDTENTRY64 *IdtBase; // r15
  unsigned int ProcessorSignature; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  int v15; // eax
  const char *v16; // rcx
  char *v17; // rax
  char v18; // cl
  int v19; // eax
  unsigned int v20; // eax
  __int64 (__fastcall *v21)(); // rbx
  __int64 (__fastcall *v22)(); // rsi
  int v23; // ecx
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  v25 = 0;
  v27 = 0;
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    InitializeBuildStrings(*(_QWORD *)(a1 + 240));
    v5 = *(_QWORD *)(a1 + 240);
    KiFeatureSettings = *(_DWORD *)(v5 + 3460);
    KiFeatureSimulations = (*(_DWORD *)(v5 + 132) >> 21) & 0x3F;
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    v6 = *(_QWORD *)(a1 + 128) + 28672LL;
    CurrentPrcb->IsrStack = (void *)v6;
    v6 += 28592LL;
    *(_QWORD *)(v6 + 40) = &KiExceptionDispatchOnExceptionStackContinue;
    CurrentPrcb->ExceptionStack = (void *)v6;
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v7 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v7;
  CurrentPrcb->IdleThread = v7;
  if ( !(_DWORD)Number || PoEnergyEstimationEnabled() )
    _interlockedbittestandset(&v7->Header.Lock, 0x15u);
  v7->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v7->ApcState.ApcListHead[0].Blink = v7->ApcState.ApcListHead;
  v7->ApcState.ApcListHead[0].Flink = v7->ApcState.ApcListHead;
  if ( !(_DWORD)Number )
    CmInitBootFeatureConfigurations(a1);
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v8 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v8 + 40) = &KiDispatchInterruptContinue;
  v9 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v8;
  if ( v9 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = KiGetProcessorSignature(&CurrentPrcb->CpuVendor, (int *)&v26, (int *)&v25, &v27);
  v12 = v26;
  v13 = ProcessorSignature;
  LOWORD(ProcessorSignature) = v27 | ((_WORD)v25 << 8);
  v9 = CurrentPrcb->CpuVendor == 2;
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = v12;
  CurrentPrcb->CpuStep = ProcessorSignature;
  if ( v9 && (v12 >= 0xF || v12 == 6 && v25 > 0xD) )
    __writemsr(0x1A0u, __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL);
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature(CurrentPrcb, v13);
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    KiDetermineRetpolineEnablement(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v14 = *(_QWORD *)(a1 + 240);
    v15 = *(_DWORD *)(v14 + 132);
    if ( (v15 & 8) != 0 )
    {
      KiBootDebuggerActive = 1;
      v15 = *(_DWORD *)(v14 + 132);
    }
    if ( (v15 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v16 = *(const char **)(a1 + 216);
    if ( v16 )
    {
      v17 = strstr(v16, "GROUPSIZE");
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( !*v17 || v18 == 32 || (unsigned __int8)(v18 - 48) <= 9u )
            break;
          ++v17;
        }
        v19 = atoi(v17);
        KiMaximumGroupSize = v19;
        if ( (unsigned int)(v19 - 1) > 0x3F || ((v19 - 1) & v19) != 0 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  KiInitializeNXSupport();
  HalInitializeProcessor(Number);
  KiSetFeatureBits(CurrentPrcb);
  v20 = CurrentPrcb->Number;
  v21 = KiSystemCall32;
  v22 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v20 )
  {
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
    v20 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v21 = KiSystemCall32Shadow;
    v22 = KiSystemCall64Shadow;
  }
  if ( !v20 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v23 = KiDebugTrapIndex;
    qword_140C01650 = (__int64)KiDebugTraps;
    qword_140C01658 = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v22;
    KiDebugTraps[++v23] = v21;
    KiDebugTrapIndex = v23 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v21);
  __writemsr(0xC0000082, (unsigned __int64)v22);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeInitializeAffinityEx(KeActiveProcessors);
    KeAddProcessorAffinityEx(KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
