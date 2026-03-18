/*
 * XREFs of MiGetPageChain @ 0x140274030
 * Callers:
 *     MiGetHardFaultPages @ 0x140232AB4 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiResolvePrivateZeroFault @ 0x140271440 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiChangePageAttributeBatch @ 0x1403495C4 (MiChangePageAttributeBatch.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 *     MiPerformFinalZeroing @ 0x14054D848 (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x14055E2F4 (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A66EC (EtwTraceShouldYieldProcessor.c)
 *     MxGetPhase0Mapping @ 0x140A55E14 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  unsigned int v7; // edi
  __int64 v9; // r11
  __int64 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  int NodeShiftedColor; // ebx
  __int64 v13; // r8
  volatile signed __int32 *p_PageColor; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  int v21; // r15d
  unsigned __int8 v22; // r14
  unsigned __int64 v23; // r10
  int v24; // ebx
  _DWORD *v25; // r9
  __int64 LargePage; // rsi
  __int64 v27; // rdx
  _DWORD *v28; // r9
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  int v32; // eax
  bool v33; // zf
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 Page; // rax
  ULONG_PTR v39; // r12
  int v40; // eax
  unsigned int v41; // ebx
  __int64 v42; // r14
  unsigned int v43; // r10d
  unsigned __int8 *v44; // rdi
  unsigned int v45; // r15d
  unsigned __int64 v46; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _KPRCB *v53; // rax
  _QWORD *v54; // r15
  void *HyperPte; // rax
  int v56; // r8d
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v62; // r10
  struct _KPRCB *v63; // rsi
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r14
  __int64 *v66; // r8
  unsigned __int64 Phase0Mapping; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  signed __int64 v78; // rdx
  unsigned __int64 v79; // r9
  signed __int64 v80; // r8
  signed __int64 v81; // rcx
  int v82; // eax
  signed __int64 v83; // rdx
  signed __int64 v84; // r8
  signed __int64 v85; // rcx
  signed __int64 v86; // rdx
  __int64 v87; // r9
  signed __int64 v88; // r8
  signed __int64 v89; // rcx
  LONG *v90; // rax
  struct _KPRCB *v91; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  int v95; // edx
  char v96; // cl
  unsigned int v97; // eax
  _KTHREAD *NextThread; // rax
  unsigned int v99; // ebx
  signed __int32 v101[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v102; // [rsp+30h] [rbp-D0h]
  unsigned int v103; // [rsp+34h] [rbp-CCh]
  unsigned int v104; // [rsp+38h] [rbp-C8h]
  unsigned int v105; // [rsp+3Ch] [rbp-C4h]
  unsigned int v106; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v107; // [rsp+48h] [rbp-B8h]
  int v108; // [rsp+50h] [rbp-B0h]
  __int64 v109; // [rsp+58h] [rbp-A8h]
  __int64 v110; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v111; // [rsp+68h] [rbp-98h]
  int v112; // [rsp+70h] [rbp-90h]
  unsigned int v113; // [rsp+74h] [rbp-8Ch]
  volatile signed __int32 *v114; // [rsp+78h] [rbp-88h]
  __int64 v115; // [rsp+80h] [rbp-80h]
  __int64 v116; // [rsp+88h] [rbp-78h]
  __int64 v117; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v118; // [rsp+98h] [rbp-68h]
  void *v119; // [rsp+A0h] [rbp-60h]
  __int64 v120; // [rsp+A8h] [rbp-58h]
  __int64 v121; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v122; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v123; // [rsp+C0h] [rbp-40h]
  _OWORD v124[9]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v125[16]; // [rsp+160h] [rbp+60h] BYREF

  v123 = a7;
  v7 = a4;
  memset(v124, 0, sizeof(v124));
  v103 = a4;
  v120 = a2;
  v9 = a1;
  v109 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v110 = CurrentIrql;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a3 - 1) << byte_140C4DD0C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  LODWORD(v13) = (1 << byte_140C4DD0D) - 1;
  v108 = NodeShiftedColor;
  v105 = v13;
  if ( !a2 || (p_PageColor = (volatile signed __int32 *)a2, (*(_BYTE *)(a2 + 184) & 7u) >= 2) )
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v15 = *a7;
  v16 = a6;
  v17 = a5 & 0xFFFFF0FF;
  v114 = p_PageColor;
  v18 = 0xFFFFFFFFFLL;
  v104 = a5 & 0xFFFFF0FF;
  v19 = 0LL;
  v111 = v15;
  v20 = 0LL;
  v116 = 0xFFFFFFFFFLL;
  v117 = 0LL;
  v106 = 0;
  v107 = 0LL;
  if ( a6 != -1 )
  {
    v17 = a5 & 0xFFFFB0FF | 0x4000;
    goto LABEL_43;
  }
  if ( v15 < 0x10 )
  {
LABEL_43:
    if ( v20 >= v15 )
      goto LABEL_179;
    v121 = (int)v7;
    while ( 1 )
    {
      v34 = v13 & _InterlockedExchangeAdd(v114, 1u);
      v35 = v34 | v108;
      if ( v16 == -1 )
        goto LABEL_187;
      v36 = 15LL;
      if ( (unsigned int)dword_140C4DD78 < 0xFuLL )
        v36 = (unsigned int)dword_140C4DD78;
      v37 = v36 & v16;
      v35 = v37 | v35 & 0xFFFFFFF0;
      Page = MiGetPage(v9, v35, v17);
      v115 = Page;
      v39 = Page;
      if ( Page == -1 )
        v17 &= ~0x4000u;
      v16 = v36 & (v37 + 1);
      v7 = v103;
      a6 = v16;
      if ( Page == -1 )
      {
LABEL_187:
        v115 = MiGetPage(v109, v35, v17);
        v39 = v115;
        if ( v115 == -1 )
          goto LABEL_179;
      }
      v40 = v17 | 0x4000;
      if ( v16 == -1 )
        v40 = v17;
      v104 = v40;
      v19 = 48 * v39 - 0x58000000000LL;
      v41 = 1;
      v42 = *(unsigned __int8 *)(v19 + 34) >> 6;
      v112 = v42;
      if ( (_DWORD)v42 == v7 || ((unsigned __int8)((1 << v42) | (1 << v7)) & (unsigned __int8)byte_140C4DE58) == 0 )
        break;
      v43 = v106;
      v125[v106] = v39;
      v106 = v43 + 1;
      if ( v43 == 15 )
      {
        MiPerformFinalZeroing(v125, 16LL, v7);
        v106 = 0;
      }
LABEL_142:
      v86 = *(_QWORD *)(v19 + 24);
      v87 = v116 & 0xFFFFFFFFFLL;
      v88 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v19 + 24),
              v116 & 0xFFFFFFFFFLL | v86 & 0xFFFFFFF000000000uLL,
              v86);
      if ( v86 != v88 )
      {
        do
        {
          v89 = v88;
          v88 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v19 + 24),
                  v87 | v88 & 0xFFFFFFF000000000uLL,
                  v88);
        }
        while ( v89 != v88 );
      }
      ++v20;
      v116 = v39;
      v107 = v20;
      if ( (unsigned __int8)v110 >= 2u )
      {
        v90 = &dword_140C4F600;
        if ( (*(_BYTE *)(v120 + 184) & 7) != 2 )
          v90 = (LONG *)(v120 + 192);
        if ( (*v90 & 0x40000000) != 0 )
          goto LABEL_179;
        v91 = KeGetCurrentPrcb();
        DpcRequestSummary = v91->DpcRequestSummary;
        DpcWatchdogCount = v91->DpcWatchdogCount;
        DpcTimeCount = v91->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v95 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v91->QuantumEnd )
            {
LABEL_172:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v41, DpcWatchdogCount, DpcTimeCount);
              if ( v41 )
                goto LABEL_179;
              goto LABEL_175;
            }
            goto LABEL_167;
          }
        }
        else
        {
          v95 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v41 = 2;
            goto LABEL_172;
          }
          if ( v91->QuantumEnd )
          {
            v41 = 3;
            goto LABEL_172;
          }
          NextThread = v91->NextThread;
          if ( NextThread && NextThread != v91->CurrentThread )
          {
            v41 = 4;
            goto LABEL_172;
          }
        }
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_175:
          v7 = v103;
          goto LABEL_176;
        }
        if ( !v95 )
        {
LABEL_171:
          _disable();
          v91->DpcWatchdogCount = 0;
          v91->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          v41 = 0;
          goto LABEL_172;
        }
LABEL_167:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v41 = 5;
          goto LABEL_172;
        }
        if ( v91->CurrentThread != v91->IdleThread )
        {
          v41 = 6;
          goto LABEL_172;
        }
        goto LABEL_171;
      }
LABEL_176:
      if ( v20 >= v111 )
        goto LABEL_179;
      v16 = a6;
      v17 = v104;
      v9 = v109;
      LODWORD(v13) = v105;
    }
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) == 0 || (a5 & 0x100) == 0 )
    {
LABEL_135:
      v82 = *(unsigned __int8 *)(v19 + 34) >> 6;
      if ( v82 != v7 )
      {
        if ( v82 == 1
          || v82 != 3
          && (v96 = *(_BYTE *)(v19 + 31) & 0xF,
              _InterlockedOr(v101, 0),
              v97 = ((_BYTE)KiTbFlushTimeStamp - v96) & 0xF,
              v97 <= 2)
          && ((v96 & 1) != 0 || v97 < 2) )
        {
          if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) != 0 )
            MiZeroPhysicalPage(v39);
          *(_QWORD *)(v19 + 16) = v117;
          v117 = v19;
LABEL_141:
          v41 = 1;
          goto LABEL_142;
        }
        MiChangePageAttribute(v19, v7, 4);
      }
      v83 = *(_QWORD *)(v19 + 24);
      v84 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v83 & 0xF0FFFFFFFFFFFFFFuLL, v83);
      if ( v83 != v84 )
      {
        do
        {
          v85 = v84;
          v84 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v84 & 0xF0FFFFFFFFFFFFFFuLL, v84);
        }
        while ( v85 != v84 );
      }
      goto LABEL_141;
    }
    v44 = (unsigned __int8 *)(v19 + 34);
    v118 = (unsigned __int8 *)(v19 + 34);
    v45 = dword_140C4DE18[4 * v42 + v121];
    v113 = v45;
    if ( v45 != (_DWORD)v42 )
      MiChangePageAttribute(48 * v39 - 0x58000000000LL, v45, 0);
    v46 = 0LL;
    if ( !KeGetCurrentPrcb()->HyperPte )
    {
      v46 = MiReservePtes(&qword_140C4EDC0, 1LL);
      if ( v46 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, 48 * v39 - 0x58000000000LL);
        ValidPte = MiMakeValidPte(v46, v39, ProtectionPfnCompatible | 0xA0000000);
        if ( MiPteInShadowRange(v46) )
        {
          if ( (unsigned int)MiPteHasShadow(v50, v49, v51, v52) )
          {
            if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
            *(_QWORD *)v46 = ValidPte;
            MiWritePteShadow(v46, ValidPte);
LABEL_74:
            KeZeroPages((__int64)(v46 << 25) >> 16, 4096LL);
            MiReleasePtes(&qword_140C4EDC0, v46, 1LL);
LABEL_128:
            v7 = v103;
            if ( v45 != (_DWORD)v42 && v45 != v103 && v46 )
              MiChangePageAttribute(v19, v42, 0);
            *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
            _InterlockedOr(v101, 0);
            v78 = *(_QWORD *)(v19 + 24);
            v79 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
            v80 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v19 + 24),
                    v79 | v78 & 0xF0FFFFFFFFFFFFFFuLL,
                    v78);
            if ( v78 != v80 )
            {
              do
              {
                v81 = v80;
                v80 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v19 + 24),
                        v79 | v80 & 0xF0FFFFFFFFFFFFFFuLL,
                        v80);
              }
              while ( v81 != v80 );
            }
            v20 = v107;
            goto LABEL_135;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v46 = ValidPte;
        goto LABEL_74;
      }
    }
    v102 = 17;
    v53 = KeGetCurrentPrcb();
    if ( v53->HyperPte )
      v46 = 1LL;
    v54 = 0LL;
    v122 = v46;
    HyperPte = v53->HyperPte;
    v119 = HyperPte;
    while ( 1 )
    {
      if ( HyperPte )
      {
        v56 = 4;
        v57 = *v44 >> 6;
        if ( !v57 || v57 == 3 )
        {
          v56 = 12;
        }
        else if ( v57 == 2 )
        {
          v56 = 28;
        }
        v60 = MiMakeValidPte(0LL, v39, v56 | 0xA0000000);
        v62 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
        {
          v59 = (unsigned int)v62 + 1;
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v58 = (-1LL << (v62 + 1)) & 4;
          SchedulerAssist[5] |= v58;
        }
        v63 = KeGetCurrentPrcb();
        v102 = v62;
        MmInternal = v63->MmInternal;
        if ( !MmInternal
          || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
              v66 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
              MmInternal[1543] = v66,
              !UltraMapping) )
        {
          UltraMapping = ((unsigned __int64)v63->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                       + (((__int64)v63->HyperPte & 0xFFF) << 12);
          v66 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        }
        if ( (unsigned __int64)v66 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v66 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_101;
        if ( !(unsigned int)MiPteHasShadow(v59, v58, v66, SchedulerAssist) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v60 & 1) != 0 )
          {
            v60 |= 0x8000000000000000uLL;
          }
LABEL_101:
          v44 = v118;
          *v66 = v60;
          goto LABEL_113;
        }
        if ( !HIBYTE(word_140C4DE88) && (v60 & 1) != 0 )
          v60 |= 0x8000000000000000uLL;
        *v66 = v60;
        MiWritePteShadow(v66, v60);
        v44 = v118;
      }
      else
      {
        Phase0Mapping = MxGetPhase0Mapping();
        UltraMapping = Phase0Mapping;
        if ( !Phase0Mapping )
          KeBugCheckEx(0x1Au, 0x3030305uLL, v39, 0LL, 0LL);
        v54 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v68 = MiMakeValidPte(v54, v39, 2684354564LL);
        if ( !MiPteInShadowRange((unsigned __int64)v54) )
          goto LABEL_112;
        if ( !(unsigned int)MiPteHasShadow(v70, v69, v71, v72) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v68 & 1) != 0 )
          {
            v68 |= 0x8000000000000000uLL;
          }
LABEL_112:
          *v54 = v68;
          goto LABEL_113;
        }
        if ( !HIBYTE(word_140C4DE88) && (v68 & 1) != 0 )
          v68 |= 0x8000000000000000uLL;
        *v54 = v68;
        MiWritePteShadow(v54, v68);
      }
LABEL_113:
      KeZeroPages(UltraMapping, 4096LL);
      if ( !v119 )
      {
        v73 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v54) )
        {
          if ( (unsigned int)MiPteHasShadow(v75, v74, v76, v77) )
          {
            if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
              v73 = ZeroPte | 0x8000000000000000uLL;
            *v54 = v73;
            MiWritePteShadow(v54, v73);
            goto LABEL_125;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v73 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *v54 = v73;
LABEL_125:
        KeFlushSingleTb(UltraMapping, 0LL);
        goto LABEL_126;
      }
      MiUnmapPageInHyperSpaceWorker(UltraMapping, v102, 0x80000000);
LABEL_126:
      ++v39;
      v44 += 48;
      v118 = v44;
      HyperPte = v119;
      if ( v39 != v115 )
      {
        v46 = v122;
        LODWORD(v42) = v112;
        v45 = v113;
        v39 = v115;
        goto LABEL_128;
      }
    }
  }
  DWORD2(v124[0]) = 16;
  *(_QWORD *)&v124[0] = 1LL;
  v21 = 1;
  v22 = 17;
  v23 = v15;
  while ( 1 )
  {
    v24 = v13 & _InterlockedExchangeAdd(p_PageColor, 1u) | NodeShiftedColor;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
        {
          v25 = KeGetCurrentPrcb()->SchedulerAssist;
          v25[5] |= (-1LL << (v22 + 1)) & 4;
        }
      }
    }
    if ( v23 < 0x200 || v21 != 1 )
      goto LABEL_21;
    LargePage = MiGetLargePage(v9, 1, v7, v24, 4, (__int64)v124);
    if ( !LargePage )
    {
      LODWORD(v9) = v109;
LABEL_21:
      v21 = 2;
      LargePage = MiGetLargePage(v9, 2, v7, v24, 4, (__int64)v124);
      if ( !LargePage )
        goto LABEL_23;
    }
    MiConvertEntireLargePageToSmall(LargePage, v21, 2, 1, 0LL, 0LL);
LABEL_23:
    v29 = v110;
    if ( (unsigned __int8)v110 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && v22 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v27 = -1LL << (v22 + 1);
            v28 = v31->SchedulerAssist;
            v32 = ~(unsigned __int16)v27;
            v33 = (v32 & v28[5]) == 0;
            v13 = (unsigned int)v32 & v28[5];
            v28[5] = v13;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v22);
    }
    if ( !LargePage )
      goto LABEL_35;
    MiSetPfnBlink(48 * ((LargePage + 0x58000000000LL) / 48 + MiLargePageSizes[v21]) - 0x58000000030LL, v18, 0);
    v18 = (LargePage + 0x58000000000LL) / 48;
    v19 = LargePage;
    v7 = v103;
    v23 = v111 - (MiLargePageSizes[v21] + v107);
    p_PageColor = v114;
    LODWORD(v9) = v109;
    v13 = v105;
    NodeShiftedColor = v108;
    v107 += MiLargePageSizes[v21];
    if ( v23 < 0x10 )
      break;
    LOBYTE(CurrentIrql) = v110;
  }
  v29 = v110;
LABEL_35:
  v116 = v18;
  if ( DWORD1(v124[0]) )
    MiNotifyPageHeat(v124, v27, v13, v28);
  if ( v29 < 2u )
  {
    v20 = v107;
    goto LABEL_42;
  }
  if ( (unsigned int)MiWorkingSetIsContended(v120) )
  {
    v20 = v107;
  }
  else
  {
    v20 = v107;
    if ( !KeShouldYieldProcessor() )
    {
LABEL_42:
      v15 = v111;
      LODWORD(v13) = v105;
      v9 = v109;
      v17 = v104;
      v16 = -1LL;
      goto LABEL_43;
    }
  }
LABEL_179:
  v99 = v103;
  *v123 = v20;
  if ( v106 )
    MiPerformFinalZeroing(v125, v106, v99);
  if ( v117 )
    MiChangePageAttributeBatch(v117, v99, ZeroPte);
  return v19;
}
