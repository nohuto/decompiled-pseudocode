/*
 * XREFs of MiGetPageChain @ 0x1402121E0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14020F5F0 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x140225160 (MiCreateSharedZeroPages.c)
 *     MiGetHardFaultPages @ 0x140325E70 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiGetClusterPage @ 0x14054FE80 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     MiPerformFinalZeroing @ 0x140549828 (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x14055A2D4 (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A255C (EtwTraceShouldYieldProcessor.c)
 *     MxGetPhase0Mapping @ 0x140A4FA94 (MxGetPhase0Mapping.c)
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
  int v13; // r8d
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
  signed __int32 v24; // ebx
  _DWORD *v25; // r9
  __int64 LargePage; // rsi
  unsigned __int8 v27; // bl
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  signed __int32 v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 Page; // rax
  ULONG_PTR v38; // r12
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // r14
  unsigned int v42; // r10d
  unsigned __int8 *v43; // rdi
  unsigned int v44; // r15d
  __int64 v45; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct _KPRCB *v51; // rax
  _QWORD *v52; // r15
  void *HyperPte; // rax
  int v54; // r8d
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  unsigned __int8 v59; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v61; // rsi
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r14
  __int64 *v64; // r8
  unsigned __int64 Phase0Mapping; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  signed __int64 v74; // rdx
  unsigned __int64 v75; // r9
  signed __int64 v76; // r8
  signed __int64 v77; // rcx
  int v78; // eax
  signed __int64 v79; // rdx
  signed __int64 v80; // r8
  signed __int64 v81; // rcx
  signed __int64 v82; // rdx
  __int64 v83; // r9
  signed __int64 v84; // r8
  signed __int64 v85; // rcx
  LONG *v86; // rax
  struct _KPRCB *v87; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  int v91; // edx
  char v92; // cl
  unsigned int v93; // eax
  _KTHREAD *NextThread; // rax
  unsigned int v95; // ebx
  signed __int32 v97[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v98; // [rsp+30h] [rbp-D0h]
  unsigned int v99; // [rsp+34h] [rbp-CCh]
  unsigned int v100; // [rsp+38h] [rbp-C8h]
  int v101; // [rsp+3Ch] [rbp-C4h]
  unsigned int v102; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v103; // [rsp+48h] [rbp-B8h]
  int v104; // [rsp+50h] [rbp-B0h]
  __int64 v105; // [rsp+58h] [rbp-A8h]
  __int64 v106; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v107; // [rsp+68h] [rbp-98h]
  int v108; // [rsp+70h] [rbp-90h]
  unsigned int v109; // [rsp+74h] [rbp-8Ch]
  volatile signed __int32 *v110; // [rsp+78h] [rbp-88h]
  __int64 v111; // [rsp+80h] [rbp-80h]
  __int64 v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v114; // [rsp+98h] [rbp-68h]
  void *v115; // [rsp+A0h] [rbp-60h]
  __int64 v116; // [rsp+A8h] [rbp-58h]
  __int64 v117; // [rsp+B0h] [rbp-50h]
  __int64 v118; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v119; // [rsp+C0h] [rbp-40h]
  _OWORD v120[9]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v121[16]; // [rsp+160h] [rbp+60h] BYREF

  v119 = a7;
  v7 = a4;
  memset(v120, 0, sizeof(v120));
  v99 = a4;
  v116 = a2;
  v9 = a1;
  v105 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v106 = CurrentIrql;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a3 - 1) << byte_140C4DDCC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140C4DDCD) - 1;
  v104 = NodeShiftedColor;
  v101 = v13;
  if ( !a2 || (p_PageColor = (volatile signed __int32 *)a2, (*(_BYTE *)(a2 + 184) & 7u) >= 2) )
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v15 = *a7;
  v16 = a6;
  v17 = a5 & 0xFFFFF0FF;
  v110 = p_PageColor;
  v18 = 0xFFFFFFFFFLL;
  v100 = a5 & 0xFFFFF0FF;
  v19 = 0LL;
  v107 = v15;
  v20 = 0LL;
  v112 = 0xFFFFFFFFFLL;
  v113 = 0LL;
  v102 = 0;
  v103 = 0LL;
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
    v117 = (int)v7;
    while ( 1 )
    {
      v33 = v13 & _InterlockedExchangeAdd(v110, 1u);
      v34 = v33 | v104;
      if ( v16 == -1 )
        goto LABEL_187;
      v35 = 15LL;
      if ( (unsigned int)dword_140C4DE38 < 0xFuLL )
        v35 = (unsigned int)dword_140C4DE38;
      v36 = v35 & v16;
      v34 = v36 | v34 & 0xFFFFFFF0;
      Page = MiGetPage(v9, v34, v17);
      v111 = Page;
      v38 = Page;
      if ( Page == -1 )
        v17 &= ~0x4000u;
      v16 = v35 & (v36 + 1);
      v7 = v99;
      a6 = v16;
      if ( Page == -1 )
      {
LABEL_187:
        v111 = MiGetPage(v105, v34, v17);
        v38 = v111;
        if ( v111 == -1 )
          goto LABEL_179;
      }
      v39 = v17 | 0x4000;
      if ( v16 == -1 )
        v39 = v17;
      v100 = v39;
      v19 = 48 * v38 - 0x58000000000LL;
      v40 = 1;
      v41 = *(unsigned __int8 *)(v19 + 34) >> 6;
      v108 = v41;
      if ( (_DWORD)v41 == v7 || ((unsigned __int8)((1 << v41) | (1 << v7)) & (unsigned __int8)byte_140C4DF18) == 0 )
        break;
      v42 = v102;
      v121[v102] = v38;
      v102 = v42 + 1;
      if ( v42 == 15 )
      {
        MiPerformFinalZeroing(v121, 16LL, v7);
        v102 = 0;
      }
LABEL_142:
      v82 = *(_QWORD *)(v19 + 24);
      v83 = v112 & 0xFFFFFFFFFLL;
      v84 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v19 + 24),
              v112 & 0xFFFFFFFFFLL | v82 & 0xFFFFFFF000000000uLL,
              v82);
      if ( v82 != v84 )
      {
        do
        {
          v85 = v84;
          v84 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v19 + 24),
                  v83 | v84 & 0xFFFFFFF000000000uLL,
                  v84);
        }
        while ( v85 != v84 );
      }
      ++v20;
      v112 = v38;
      v103 = v20;
      if ( (unsigned __int8)v106 >= 2u )
      {
        v86 = &dword_140C4F6C0;
        if ( (*(_BYTE *)(v116 + 184) & 7) != 2 )
          v86 = (LONG *)(v116 + 192);
        if ( (*v86 & 0x40000000) != 0 )
          goto LABEL_179;
        v87 = KeGetCurrentPrcb();
        DpcRequestSummary = v87->DpcRequestSummary;
        DpcWatchdogCount = v87->DpcWatchdogCount;
        DpcTimeCount = v87->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v91 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v87->QuantumEnd )
            {
LABEL_172:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v40, DpcWatchdogCount, DpcTimeCount);
              if ( v40 )
                goto LABEL_179;
              goto LABEL_175;
            }
            goto LABEL_167;
          }
        }
        else
        {
          v91 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v40 = 2;
            goto LABEL_172;
          }
          if ( v87->QuantumEnd )
          {
            v40 = 3;
            goto LABEL_172;
          }
          NextThread = v87->NextThread;
          if ( NextThread && NextThread != v87->CurrentThread )
          {
            v40 = 4;
            goto LABEL_172;
          }
        }
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_175:
          v7 = v99;
          goto LABEL_176;
        }
        if ( !v91 )
        {
LABEL_171:
          _disable();
          v87->DpcWatchdogCount = 0;
          v87->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          v40 = 0;
          goto LABEL_172;
        }
LABEL_167:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v40 = 5;
          goto LABEL_172;
        }
        if ( v87->CurrentThread != v87->IdleThread )
        {
          v40 = 6;
          goto LABEL_172;
        }
        goto LABEL_171;
      }
LABEL_176:
      if ( v20 >= v107 )
        goto LABEL_179;
      v16 = a6;
      v17 = v100;
      v9 = v105;
      v13 = v101;
    }
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) == 0 || (a5 & 0x100) == 0 )
    {
LABEL_135:
      v78 = *(unsigned __int8 *)(v19 + 34) >> 6;
      if ( v78 != v7 )
      {
        if ( v78 == 1
          || v78 != 3
          && (v92 = *(_BYTE *)(v19 + 31) & 0xF,
              _InterlockedOr(v97, 0),
              v93 = ((_BYTE)KiTbFlushTimeStamp - v92) & 0xF,
              v93 <= 2)
          && ((v92 & 1) != 0 || v93 < 2) )
        {
          if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) != 0 )
            MiZeroPhysicalPage(v38);
          *(_QWORD *)(v19 + 16) = v113;
          v113 = v19;
LABEL_141:
          v40 = 1;
          goto LABEL_142;
        }
        MiChangePageAttribute(v19, v7, 4LL);
      }
      v79 = *(_QWORD *)(v19 + 24);
      v80 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v79 & 0xF0FFFFFFFFFFFFFFuLL, v79);
      if ( v79 != v80 )
      {
        do
        {
          v81 = v80;
          v80 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v80 & 0xF0FFFFFFFFFFFFFFuLL, v80);
        }
        while ( v81 != v80 );
      }
      goto LABEL_141;
    }
    v43 = (unsigned __int8 *)(v19 + 34);
    v114 = (unsigned __int8 *)(v19 + 34);
    v44 = dword_140C4DED8[4 * v41 + v117];
    v109 = v44;
    if ( v44 != (_DWORD)v41 )
      MiChangePageAttribute(48 * v38 - 0x58000000000LL, v44, 0LL);
    v45 = 0LL;
    if ( !KeGetCurrentPrcb()->HyperPte )
    {
      v45 = MiReservePtes(&qword_140C4EE80, 1LL);
      if ( v45 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, 48 * v38 - 0x58000000000LL);
        ValidPte = MiMakeValidPte(v45, v38, ProtectionPfnCompatible | 0xA0000000);
        if ( (unsigned int)MiPteInShadowRange(v45, v48) )
        {
          if ( (unsigned int)MiPteHasShadow(v50, v49) )
          {
            if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
            *(_QWORD *)v45 = ValidPte;
            MiWritePteShadow(v45, ValidPte);
LABEL_74:
            KeZeroPages(v45 << 25 >> 16, 4096LL);
            MiReleasePtes(&qword_140C4EE80, v45, 1LL);
LABEL_128:
            v7 = v99;
            if ( v44 != (_DWORD)v41 && v44 != v99 && v45 )
              MiChangePageAttribute(v19, (unsigned int)v41, 0LL);
            *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
            _InterlockedOr(v97, 0);
            v74 = *(_QWORD *)(v19 + 24);
            v75 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
            v76 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v19 + 24),
                    v75 | v74 & 0xF0FFFFFFFFFFFFFFuLL,
                    v74);
            if ( v74 != v76 )
            {
              do
              {
                v77 = v76;
                v76 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v19 + 24),
                        v75 | v76 & 0xF0FFFFFFFFFFFFFFuLL,
                        v76);
              }
              while ( v77 != v76 );
            }
            v20 = v103;
            goto LABEL_135;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v45 = ValidPte;
        goto LABEL_74;
      }
    }
    v98 = 17;
    v51 = KeGetCurrentPrcb();
    if ( v51->HyperPte )
      v45 = 1LL;
    v52 = 0LL;
    v118 = v45;
    HyperPte = v51->HyperPte;
    v115 = HyperPte;
    while ( 1 )
    {
      if ( HyperPte )
      {
        v54 = 4;
        v55 = *v43 >> 6;
        if ( !v55 || v55 == 3 )
        {
          v54 = 12;
        }
        else if ( v55 == 2 )
        {
          v54 = 28;
        }
        v58 = MiMakeValidPte(0LL, v38, v54 | 0xA0000000);
        v59 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
        {
          v57 = (unsigned int)v59 + 1;
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v56 = (-1LL << (v59 + 1)) & 4;
          SchedulerAssist[5] |= v56;
        }
        v61 = KeGetCurrentPrcb();
        v98 = v59;
        MmInternal = v61->MmInternal;
        if ( !MmInternal
          || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
              v64 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
              MmInternal[1543] = v64,
              !UltraMapping) )
        {
          UltraMapping = ((unsigned __int64)v61->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                       + (((__int64)v61->HyperPte & 0xFFF) << 12);
          v64 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        }
        if ( (unsigned __int64)v64 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v64 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_101;
        if ( !(unsigned int)MiPteHasShadow(v57, v56) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v58 & 1) != 0 )
          {
            v58 |= 0x8000000000000000uLL;
          }
LABEL_101:
          v43 = v114;
          *v64 = v58;
          goto LABEL_113;
        }
        if ( !HIBYTE(word_140C4DF48) && (v58 & 1) != 0 )
          v58 |= 0x8000000000000000uLL;
        *v64 = v58;
        MiWritePteShadow(v64, v58);
        v43 = v114;
      }
      else
      {
        Phase0Mapping = MxGetPhase0Mapping();
        UltraMapping = Phase0Mapping;
        if ( !Phase0Mapping )
          KeBugCheckEx(0x1Au, 0x3030305uLL, v38, 0LL, 0LL);
        v52 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v66 = MiMakeValidPte(v52, v38, 2684354564LL);
        if ( !(unsigned int)MiPteInShadowRange(v52, v67) )
          goto LABEL_112;
        if ( !(unsigned int)MiPteHasShadow(v69, v68) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v66 & 1) != 0 )
          {
            v66 |= 0x8000000000000000uLL;
          }
LABEL_112:
          *v52 = v66;
          goto LABEL_113;
        }
        if ( !HIBYTE(word_140C4DF48) && (v66 & 1) != 0 )
          v66 |= 0x8000000000000000uLL;
        *v52 = v66;
        MiWritePteShadow(v52, v66);
      }
LABEL_113:
      KeZeroPages(UltraMapping, 4096LL);
      if ( !v115 )
      {
        v71 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v52, v70) )
        {
          if ( (unsigned int)MiPteHasShadow(v73, v72) )
          {
            if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
              v71 = ZeroPte | 0x8000000000000000uLL;
            *v52 = v71;
            MiWritePteShadow(v52, v71);
            goto LABEL_125;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v71 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *v52 = v71;
LABEL_125:
        KeFlushSingleTb(UltraMapping, 0LL, 1LL);
        goto LABEL_126;
      }
      MiUnmapPageInHyperSpaceWorker(UltraMapping, v98, 0x80000000LL);
LABEL_126:
      ++v38;
      v43 += 48;
      v114 = v43;
      HyperPte = v115;
      if ( v38 != v111 )
      {
        v45 = v118;
        LODWORD(v41) = v108;
        v44 = v109;
        v38 = v111;
        goto LABEL_128;
      }
    }
  }
  DWORD2(v120[0]) = 16;
  *(_QWORD *)&v120[0] = 1LL;
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
    LargePage = MiGetLargePage(v9, 1, v7, v24, 4, (__int64)v120);
    if ( !LargePage )
    {
      LODWORD(v9) = v105;
LABEL_21:
      v21 = 2;
      LargePage = MiGetLargePage(v9, 2, v7, v24, 4, (__int64)v120);
      if ( !LargePage )
        goto LABEL_23;
    }
    MiConvertEntireLargePageToSmall(LargePage, v21, 2, 1, 0LL, 0LL);
LABEL_23:
    v27 = v106;
    if ( (unsigned __int8)v106 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && v22 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (v22 + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8(v22);
    }
    if ( !LargePage )
      goto LABEL_35;
    MiSetPfnBlink(48 * ((LargePage + 0x58000000000LL) / 48 + MiLargePageSizes[v21]) - 0x58000000030LL, v18, 0LL);
    v18 = (LargePage + 0x58000000000LL) / 48;
    v19 = LargePage;
    v7 = v99;
    v23 = v107 - (MiLargePageSizes[v21] + v103);
    p_PageColor = v110;
    LODWORD(v9) = v105;
    v13 = v101;
    NodeShiftedColor = v104;
    v103 += MiLargePageSizes[v21];
    if ( v23 < 0x10 )
      break;
    LOBYTE(CurrentIrql) = v106;
  }
  v27 = v106;
LABEL_35:
  v112 = v18;
  if ( DWORD1(v120[0]) )
    MiNotifyPageHeat(v120);
  if ( v27 < 2u )
  {
    v20 = v103;
    goto LABEL_42;
  }
  if ( (unsigned int)MiWorkingSetIsContended(v116) )
  {
    v20 = v103;
  }
  else
  {
    v20 = v103;
    if ( !KeShouldYieldProcessor() )
    {
LABEL_42:
      v15 = v107;
      v13 = v101;
      v9 = v105;
      v17 = v100;
      v16 = -1LL;
      goto LABEL_43;
    }
  }
LABEL_179:
  v95 = v99;
  *v119 = v20;
  if ( v102 )
    MiPerformFinalZeroing(v121, v102, v95);
  if ( v113 )
    MiChangePageAttributeBatch(v113, v95, ZeroPte);
  return v19;
}
