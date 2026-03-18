/*
 * XREFs of KiInitializeBootStructures @ 0x140A57680
 * Callers:
 *     KiSystemStartup @ 0x140A47010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     HalInitializeProcessor @ 0x1403BFB00 (HalInitializeProcessor.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     KiDetermineRetpolineEnablement @ 0x1403DC4D0 (KiDetermineRetpolineEnablement.c)
 *     KiDetectTsx @ 0x1403DE2DC (KiDetectTsx.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atoi @ 0x1403E0CC0 (atoi.c)
 *     KiSaveInitialProcessorControlState @ 0x14041F600 (KiSaveInitialProcessorControlState.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetProcessorSignature @ 0x140A56118 (KiSetProcessorSignature.c)
 *     KiGetProcessorSignature @ 0x140A56A48 (KiGetProcessorSignature.c)
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 *     ExInitPoolLookasidePointers @ 0x140A57AD4 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x140A57CB4 (KiInitPrcb.c)
 *     KiEnableKvaShadowing @ 0x140A59FA4 (KiEnableKvaShadowing.c)
 *     KiInitializeIdt @ 0x140A5A324 (KiInitializeIdt.c)
 *     InitializeBuildStrings @ 0x140AF305C (InitializeBuildStrings.c)
 *     KiInitializeNxSupportDiscard @ 0x140AFB154 (KiInitializeNxSupportDiscard.c)
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 *     CmInitBootFeatureConfigurations @ 0x140B15450 (CmInitBootFeatureConfigurations.c)
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 *     ExRngInitializeSystem @ 0x140B29610 (ExRngInitializeSystem.c)
 *     HvlEnableVsmCalls @ 0x140B315C0 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rbp
  _KTHREAD *v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  _KIDTENTRY64 *IdtBase; // r15
  unsigned int ProcessorSignature; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 (__fastcall *v15)(); // rbx
  __int64 (__fastcall *v16)(); // rsi
  __int64 v18; // r10
  __int64 v19; // rax
  int v20; // edx
  const char *v21; // rcx
  char *v22; // rax
  int v23; // ecx
  char i; // cl
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
    v18 = *(_QWORD *)(a1 + 240);
    KiFeatureSettings = *(_DWORD *)(v18 + 3492);
    KiFeatureSimulations = (*(_DWORD *)(v18 + 132) >> 21) & 0x3F;
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    v19 = *(_QWORD *)(a1 + 128) + 28672LL;
    CurrentPrcb->IsrStack = (void *)v19;
    v19 += 28592LL;
    *(_QWORD *)(v19 + 40) = &KiExceptionDispatchOnExceptionStackContinue;
    CurrentPrcb->ExceptionStack = (void *)v19;
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v5 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v5;
  CurrentPrcb->IdleThread = v5;
  v5->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v5->ApcState.ApcListHead[0].Blink = v5->ApcState.ApcListHead;
  v5->ApcState.ApcListHead[0].Flink = v5->ApcState.ApcListHead;
  if ( !(_DWORD)Number )
    CmInitBootFeatureConfigurations(a1);
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v6 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v6 + 40) = &KiDispatchInterruptContinue;
  v7 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v6;
  if ( v7 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = KiGetProcessorSignature(&CurrentPrcb->CpuVendor, (int *)&v26, (int *)&v25, &v27);
  v11 = v26;
  v12 = ProcessorSignature;
  LOWORD(ProcessorSignature) = v27 | ((_WORD)v25 << 8);
  v7 = CurrentPrcb->CpuVendor == 2;
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = v11;
  CurrentPrcb->CpuStep = ProcessorSignature;
  if ( v7 && (v11 >= 0xF || v11 == 6 && v25 > 0xD) )
  {
    v13 = __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL;
    v10 = HIDWORD(v13);
    __writemsr(0x1A0u, v13);
  }
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature((__int64)CurrentPrcb, v12);
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    KiDetermineRetpolineEnablement(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL);
    if ( (v20 & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (v20 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v21 = *(const char **)(a1 + 216);
    if ( v21 )
    {
      v22 = strstr(v21, "GROUPSIZE");
      if ( v22 )
      {
        for ( i = *v22; *v22; i = *++v22 )
        {
          if ( i == 32 )
            break;
          if ( (unsigned __int8)(i - 48) <= 9u )
            break;
        }
        KiMaximumGroupSize = atoi(v22);
        if ( (unsigned int)(KiMaximumGroupSize - 1) > 0x3F )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(104LL, v10, v12);
  HalInitializeProcessor(Number);
  KiSetFeatureBits((__int64)CurrentPrcb);
  v14 = CurrentPrcb->Number;
  v15 = KiSystemCall32;
  v16 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v14 )
  {
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
    v14 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v15 = KiSystemCall32Shadow;
    v16 = KiSystemCall64Shadow;
  }
  if ( !v14 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v23 = KiDebugTrapIndex;
    qword_140C02C00 = (__int64)KiDebugTraps;
    qword_140C02C08 = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v16;
    KiDebugTraps[++v23] = v15;
    KiDebugTrapIndex = v23 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v15);
  __writemsr(0xC0000082, (unsigned __int64)v16);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 2097153;
    memset(&unk_140D06E44, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
