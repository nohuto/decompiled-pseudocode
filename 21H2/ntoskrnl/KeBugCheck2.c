/*
 * XREFs of KeBugCheck2 @ 0x140516D10
 * Callers:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402651D0 (KeQueryCurrentStackInformation.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403D0080 (KdRefreshDebuggerNotPresent.c)
 *     KiFilterBugCheckInfo @ 0x1403DBFAC (KiFilterBugCheckInfo.c)
 *     KiMarkBugCheckRegions @ 0x1403DC948 (KiMarkBugCheckRegions.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x1404F1B4C (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x1404F5E14 (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F5EDC (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x140502488 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x140502700 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x140502928 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x140502C50 (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x140510A44 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x140510FBC (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x140512850 (KiCheckForFreezeExecution.c)
 *     KiBugCheckDebugBreak @ 0x140518060 (KiBugCheckDebugBreak.c)
 *     KiBugCheckUnicodeToAnsi @ 0x140518280 (KiBugCheckUnicodeToAnsi.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405182C4 (KiBugcheckUnloadDebugSymbols.c)
 *     KiDisplayBlueScreen @ 0x140518300 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x140518694 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14051882C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405189E8 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140518AB0 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140518B80 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x140518CAC (KiScanBugCheckCallbackList.c)
 *     KeSaveSupervisorState @ 0x14051A138 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x14051E3C0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14051E490 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x14051E654 (KiSetDebuggerOwner.c)
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 *     MmLocateUnloadedDriver @ 0x140535B0C (MmLocateUnloadedDriver.c)
 *     MmIsAddressValid @ 0x140536DB0 (MmIsAddressValid.c)
 *     MmIsSpecialPoolAddress @ 0x140537730 (MmIsSpecialPoolAddress.c)
 *     PoAddPowerTriageData @ 0x14056EC9C (PoAddPowerTriageData.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rsi
  __int64 v8; // r14
  __int64 v11; // r8
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  signed __int32 v14; // eax
  unsigned int v15; // edx
  signed __int32 v16; // ecx
  char v17; // bl
  signed __int32 v18; // eax
  unsigned int v19; // edx
  signed __int32 v20; // ecx
  int v21; // ecx
  size_t v22; // r8
  _OWORD *v23; // rcx
  __int64 v24; // rdx
  _CONTEXT *Context; // rax
  __int64 v26; // r8
  __int128 v27; // xmm1
  char v28; // r10
  unsigned int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // rax
  BOOL IsSessionAddress; // eax
  struct _KTHREAD *v33; // r15
  __int64 UnloadedDriver; // rax
  const CHAR *v35; // r14
  _QWORD *v36; // rcx
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  struct _KTHREAD *v39; // rcx
  _KPROCESS *Process; // rcx
  int v41; // edx
  int IsEmptyAffinity; // eax
  struct _KPRCB *v43; // rdi
  __int64 v44; // rcx
  _DWORD *v45; // r9
  bool v46; // si
  int v47; // ecx
  bool v48; // r14
  unsigned int v49; // eax
  __int64 v50; // rcx
  _CONTEXT *v51; // rax
  _OWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int128 v55; // xmm1
  __int64 v56; // rbx
  char v57; // bl
  int v58; // ecx
  char v59; // [rsp+50h] [rbp-B0h]
  char v60; // [rsp+51h] [rbp-AFh]
  char v61; // [rsp+52h] [rbp-AEh] BYREF
  bool v62; // [rsp+53h] [rbp-ADh]
  bool v63; // [rsp+54h] [rbp-ACh]
  bool v64; // [rsp+55h] [rbp-ABh]
  char v65; // [rsp+56h] [rbp-AAh]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-A8h]
  unsigned int v67; // [rsp+60h] [rbp-A0h] BYREF
  PCSTR Format; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+78h] [rbp-88h]
  unsigned __int64 v70; // [rsp+80h] [rbp-80h]
  int v71; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  unsigned int v73; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int Number; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+C0h] [rbp-40h]
  unsigned __int16 v79[88]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v80[77]; // [rsp+180h] [rbp+80h] BYREF
  char pszDest[176]; // [rsp+650h] [rbp+550h] BYREF

  v6 = (const CHAR *)a5;
  v8 = a6;
  v67 = a1;
  memset(v79, 0, 0xA8uLL);
  v62 = 1;
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v78 = KiBugCheckProgress;
  v64 = IopAutoReboot != 0;
  v74 = 0LL;
  v61 = 0;
  LOBYTE(v69) = 0;
  v65 = 0;
  Format = 0LL;
  v70 = 0LL;
  v63 = 1;
  v71 = 0;
  v76 = 0LL;
  Src = 0LL;
  v73 = 0;
  v11 = 15LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v11 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v11;
      }
    }
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    LOBYTE(v11) = KeQueryCurrentStackInformation((__int64)&v73, (__int64)&Src, (__int64)&v76);
    v18 = KiBugCheckActive;
    v19 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v18 & 3) != 3 )
    {
      v20 = v18;
      v18 = _InterlockedCompareExchange(&KiBugCheckActive, v19, v18);
      if ( v18 == v20 )
      {
        if ( (_BYTE)v11 )
        {
          if ( v73 > 9 || (v21 = 929, !_bittest(&v21, v73)) )
          {
            v22 = v76 - (_QWORD)Src;
            if ( (unsigned __int64)(v76 - (_QWORD)Src) > 0x6000 )
              v22 = 24576LL;
            memmove(&KiPreBugcheckStackSaveArea, Src, v22);
          }
        }
LABEL_25:
        v59 = 1;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v14 = KiBugCheckActive;
    v15 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v14 & 3) != 3 )
    {
      v16 = v14;
      v14 = _InterlockedCompareExchange(&KiBugCheckActive, v15, v14);
      if ( v14 == v16 )
        goto LABEL_25;
    }
  }
  v59 = 0;
LABEL_11:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL, v11);
  if ( !qword_140C23AA0 )
    goto LABEL_14;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_140C23AA0 + 3) )
  {
    if ( v59 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v67 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v78 = 0LL;
    v17 = 1;
  }
  else
  {
LABEL_14:
    v17 = 0;
  }
  v23 = v80;
  v24 = 9LL;
  v60 = v17;
  Context = CurrentPrcb->Context;
  v26 = 128LL;
  do
  {
    *v23 = *(_OWORD *)&Context->P1Home;
    v23[1] = *(_OWORD *)&Context->P3Home;
    v23[2] = *(_OWORD *)&Context->P5Home;
    v23[3] = *(_OWORD *)&Context->ContextFlags;
    v23[4] = *(_OWORD *)&Context->SegGs;
    v23[5] = *(_OWORD *)&Context->Dr1;
    v23[6] = *(_OWORD *)&Context->Dr3;
    v23 += 8;
    v27 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *(v23 - 1) = v27;
    --v24;
  }
  while ( v24 );
  v28 = v59;
  *v23 = *(_OWORD *)&Context->P1Home;
  v23[1] = *(_OWORD *)&Context->P3Home;
  v23[2] = *(_OWORD *)&Context->P5Home;
  v23[3] = *(_OWORD *)&Context->ContextFlags;
  v23[4] = *(_OWORD *)&Context->SegGs;
  if ( !v59 )
  {
    v33 = CurrentThread;
    goto LABEL_143;
  }
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v17 )
    KiSaveCurrentEtwTraceBuffer(v23, v24, v26);
  IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  v29 = v67;
  if ( v67 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_140C008A8[0])(0LL);
    HalReturnToFirmware(3);
  }
  *((_QWORD *)&KiBugCheckData + 1) = a2;
  *(_QWORD *)&xmmword_140C31530 = a3;
  if ( v67 == -1073741103 )
    v29 = 195;
  *((_QWORD *)&xmmword_140C31530 + 1) = a4;
  *(_QWORD *)&KiBugCheckData = v29;
  v67 = v29;
  qword_140C31540 = a5;
  if ( v29 > 0xCB )
  {
    if ( v29 != 216 )
    {
      if ( v29 == 234 )
      {
        KiBugCheckDriver = a4;
        goto LABEL_113;
      }
      if ( v29 == 239 )
        goto LABEL_60;
      if ( v29 != 252 )
      {
        if ( v29 == 317 )
        {
          v71 = 8;
        }
        else if ( v29 == 335 )
        {
          if ( a3 < 0x100 && a5 )
          {
            v39 = CurrentThread;
            if ( *(_QWORD *)(a5 + 8) )
              v39 = *(struct _KTHREAD **)(a5 + 8);
            CurrentThread = v39;
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          v41 = HIDWORD(Process[2].Header.WaitListHead.Flink) >> 12;
          LOBYTE(v41) = (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
          v69 = v41;
        }
        goto LABEL_113;
      }
LABEL_52:
      if ( !a6 )
      {
        if ( !a4 || (a4 & 3) != 0 )
          goto LABEL_113;
        v8 = a4;
      }
      if ( v29 == 142
        || (v70 = *(_QWORD *)(v8 + 360), KeGetCurrentThread()->ApcStateIndex != 1)
        || !MmIsSessionAddress(v70)
        || (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_113:
        v33 = CurrentThread;
        goto LABEL_114;
      }
LABEL_60:
      LOBYTE(v69) = 1;
      goto LABEL_113;
    }
    v74 = a2;
    v38 = a2 + 88;
LABEL_112:
    KiBugCheckDriver = v38;
    goto LABEL_113;
  }
  switch ( v29 )
  {
    case 0xCBu:
      v70 = a2;
      goto LABEL_113;
    case 0xAu:
      if ( a5 >= ExPoolCodeStart && a5 < ExPoolCodeEnd )
      {
        *(_QWORD *)&KiBugCheckData = 197LL;
        goto LABEL_113;
      }
      KiPcToFileHeader(a5, &v74, 0LL, &v61);
      if ( v61 != 1 )
      {
        *(_QWORD *)&KiBugCheckData = 209LL;
        goto LABEL_113;
      }
      if ( !KiPcToFileHeader(a2, &v74, 1LL, &v61) )
      {
        KiBugCheckDriver = MmLocateUnloadedDriver(a2);
        if ( KiBugCheckDriver )
          *(_QWORD *)&KiBugCheckData = 212LL;
        goto LABEL_113;
      }
      v38 = v74 + 88;
      *(_QWORD *)&KiBugCheckData = 211LL;
      goto LABEL_112;
    case 0x4Cu:
      v36 = (_QWORD *)&KiBugCheckData + 1;
      *(_QWORD *)&KiBugCheckData = (unsigned int)a2;
      v37 = a3 - ((_QWORD)&KiBugCheckData + 8);
      LOBYTE(v69) = 1;
      v35 = (const CHAR *)a4;
      v65 = 1;
      do
      {
        *v36 = *(_QWORD *)((char *)v36 + v37);
        ++v36;
      }
      while ( (__int64)v36 < (__int64)&KiHardwareTrigger );
      v33 = CurrentThread;
      goto LABEL_115;
  }
  if ( v29 != 80 )
  {
    if ( v29 == 123 )
    {
      v62 = (a4 & 1) == 0;
      v63 = (a4 & 2) == 0;
      goto LABEL_113;
    }
    if ( v29 != 142 && v29 != 190 )
      goto LABEL_113;
    goto LABEL_52;
  }
  v30 = 0LL;
  if ( a6 )
    goto LABEL_66;
  if ( a4 && (a4 & 3) == 0 )
  {
    v8 = a4;
LABEL_66:
    v70 = *(_QWORD *)(v8 + 360);
    *((_QWORD *)&xmmword_140C31530 + 1) = v70;
    v30 = KiPcToFileHeader(v70, &v74, 0LL, &v61);
    if ( KeGetCurrentThread()->ApcStateIndex == 1
      && MmIsSessionAddress(v70)
      && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      LOBYTE(v69) = 1;
    }
    goto LABEL_70;
  }
  v61 = 1;
LABEL_70:
  if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
  {
    v31 = 213LL;
    v17 = v60;
    if ( v61 == 1 )
      v31 = 204LL;
    *(_QWORD *)&KiBugCheckData = v31;
    goto LABEL_113;
  }
  if ( v70 == a2 )
  {
    IsSessionAddress = MmIsSessionAddress(a2);
    v33 = CurrentThread;
    if ( IsSessionAddress && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      *(_QWORD *)&KiBugCheckData = 207LL;
LABEL_79:
      v17 = v60;
LABEL_114:
      v35 = Format;
      v6 = Format;
      goto LABEL_115;
    }
  }
  else
  {
    v33 = CurrentThread;
  }
  if ( v30 )
    goto LABEL_79;
  UnloadedDriver = MmLocateUnloadedDriver(a2);
  v35 = Format;
  v17 = v60;
  v6 = Format;
  KiBugCheckDriver = UnloadedDriver;
  if ( UnloadedDriver )
    *(_QWORD *)&KiBugCheckData = 206LL;
LABEL_115:
  if ( v64 )
    KiAttemptBugcheckRecovery();
  off_140C008C8[0]();
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  ((void (__fastcall *)(bool))off_140C00698[0])(IsEmptyAffinity == 0);
  KiFilterBugCheckInfo(&v67, (__int64)&KiBugCheckData);
  HvlLogGuestCrashInformation(
    KiBugCheckData,
    *((__int64 *)&KiBugCheckData + 1),
    xmmword_140C31530,
    *((__int64 *)&xmmword_140C31530 + 1),
    qword_140C31540);
  if ( KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v70 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !KdPitchDebugger )
    qword_140C00B48 = (__int64)v80;
  if ( v67 == 226
    || !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled
    || KiHypervisorInitiatedCrashDump
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    v28 = v59;
LABEL_143:
    v43 = CurrentPrcb;
    goto LABEL_144;
  }
  v43 = CurrentPrcb;
  if ( !CurrentPrcb->NmiActive )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      (_DWORD)KiBugCheckData,
      *((const void **)&KiBugCheckData + 1),
      (const void *)xmmword_140C31530,
      *((const void **)&xmmword_140C31530 + 1),
      (const void *)qword_140C31540);
    if ( KiBugCheckDriver )
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
    if ( v65 )
    {
      if ( v35 )
        DbgPrintEx(0x65u, 0, v35);
      if ( v6 )
        DbgPrintEx(0x65u, 0, v6);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    KiBugCheckDebugBreak(3u);
  v28 = v59;
LABEL_144:
  _disable();
  v44 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v44 <= 0xFu )
  {
    v44 = (unsigned int)(unsigned __int8)v44 + 1;
    v45 = KeGetCurrentPrcb()->SchedulerAssist;
    v45[5] |= ~((unsigned __int16)(1LL << v44) - 1) & 0xFFFC;
  }
  if ( v28 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner(v43);
      KeCopyAffinityEx((__int64)v79, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v79, v43->Number);
      KiSendFreeze(v79, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoInitializeBugCheckProgress(v67, a2);
    IoSaveBugCheckProgress(1);
    v46 = v63;
    if ( v17 )
    {
      v48 = v62;
    }
    else
    {
      if ( CrashdmpDumpBlock && v63 )
        v47 = v71;
      else
        v47 = v71 | 4;
      v48 = v62;
      v49 = v47 | 2;
      if ( v64 )
        v49 = v47;
      v50 = v49 | 1;
      if ( v62 )
        v50 = v49;
      KiDisplayBlueScreen(v50);
    }
    HvlPrepareForRootCrashdump();
    if ( !v17 )
    {
      KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
      IoSaveBugCheckProgress(5);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v51 = v43->Context;
    v52 = v80;
    v53 = 9LL;
    v54 = 128LL;
    do
    {
      *(_OWORD *)&v51->P1Home = *v52;
      *(_OWORD *)&v51->P3Home = v52[1];
      *(_OWORD *)&v51->P5Home = v52[2];
      *(_OWORD *)&v51->ContextFlags = v52[3];
      *(_OWORD *)&v51->SegGs = v52[4];
      *(_OWORD *)&v51->Dr1 = v52[5];
      *(_OWORD *)&v51->Dr3 = v52[6];
      v51 = (_CONTEXT *)((char *)v51 + 128);
      v55 = v52[7];
      v52 += 8;
      *(_OWORD *)&v51[-1].LastExceptionToRip = v55;
      --v53;
    }
    while ( v53 );
    *(_OWORD *)&v51->P1Home = *v52;
    *(_OWORD *)&v51->P3Home = v52[1];
    *(_OWORD *)&v51->P5Home = v52[2];
    *(_OWORD *)&v51->ContextFlags = v52[3];
    *(_OWORD *)&v51->SegGs = v52[4];
    if ( v46 )
    {
      if ( v67 == 265 )
      {
        KiMarkBugCheckRegions(
          *((__int64 *)&KiBugCheckData + 1),
          xmmword_140C31530,
          *((unsigned __int64 *)&xmmword_140C31530 + 1),
          qword_140C31540);
        if ( qword_140C31540 == 47 )
        {
          v56 = *((_QWORD *)&xmmword_140C31530 + 1);
          if ( MmIsAddressValid((PVOID)(*((_QWORD *)&xmmword_140C31530 + 1) + 1928LL)) )
            IoAddTriageDumpDataBlock(*(_QWORD *)(v56 + 1928), (PVOID)0x1000);
        }
      }
      KdDecodeDataBlock();
      if ( v67 == 395 )
      {
        if ( *((_QWORD *)&KiBugCheckData + 1) != 396LL )
        {
LABEL_185:
          IoWriteCrashDump(
            KiBugCheckData,
            *((__int64 *)&KiBugCheckData + 1),
            xmmword_140C31530,
            *((__int64 *)&xmmword_140C31530 + 1),
            qword_140C31540,
            v80,
            v33,
            (__int64)v78);
          IoSaveBugCheckProgress(3);
          goto LABEL_193;
        }
        if ( KdpBreakpointChangeCount )
          IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
        IoAddTriageDumpDataBlock((ULONG)&VslpTraceLog, (PVOID)0xA08);
        if ( *(_QWORD *)&VslpHotpatchLog )
        {
          IoAddTriageDumpDataBlock((ULONG)&VslpHotpatchLog, (PVOID)8);
          IoAddTriageDumpDataBlock(VslpHotpatchLog, (PVOID)0x50008);
        }
      }
      if ( v67 == 239 )
      {
        PoAddPowerTriageData();
        if ( CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((ULONG)&CriticalProcessExceptionData, (PVOID)0x30);
          if ( (_WORD)xmmword_140C19770 )
            IoAddTriageDumpDataBlock(DWORD2(xmmword_140C19770), (PVOID)(unsigned __int16)xmmword_140C19770);
        }
      }
      goto LABEL_185;
    }
  }
  else
  {
    v57 = KiBugCheckActive;
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (KiBugCheckActive & 0xCu) >= 8 )
    {
      while ( 1 )
        ((void (__fastcall *)(__int64))off_140C005D8)(v44);
    }
    IoSetBugCheckProgressFlag(0x20000);
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( (v57 & 0xC) != 0 )
      KiBugCheckDebugBreak(4u);
    v48 = v62;
  }
LABEL_193:
  if ( !VslVsmEnabled )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    ((void (__fastcall *)(_OWORD *, __int64, __int64))off_140C007A8[0])(v52, v53, v54);
  }
  IoSaveBugCheckProgress(99);
  if ( !v60 )
    KiScanBugCheckCallbackList();
  off_140C008B8[0]();
  IoSaveBugCheckProgress(4);
  if ( v64 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    KiBugcheckUnloadDebugSymbols();
    ((void (__fastcall *)(_QWORD))off_140C008A8[0])(0LL);
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || (v58 = 3, !v48) )
    {
      v58 = 1;
    }
    HalReturnToFirmware(v58);
  }
  KiBugCheckDebugBreak(4u);
}
