/*
 * XREFs of MiGetPageChain @ 0x1402A4CF0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402A2100 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x1402B7DE0 (MiCreateSharedZeroPages.c)
 *     MiGetHardFaultPages @ 0x1402E0D70 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiGetClusterPage @ 0x1405504D0 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140327CB8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EFF78 (MiConvertEntireLargePageToSmall.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     MiPerformFinalZeroing @ 0x140549E78 (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x14055A924 (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A2C4C (EtwTraceShouldYieldProcessor.c)
 *     MxGetPhase0Mapping @ 0x140A55794 (MxGetPhase0Mapping.c)
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
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  ULONG_PTR v40; // r12
  int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // r14
  unsigned int v44; // r10d
  unsigned __int8 *v45; // rdi
  unsigned int v46; // r15d
  ULONG_PTR v47; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v49; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  struct _KPRCB *v55; // rax
  unsigned __int64 *v56; // r15
  void *HyperPte; // rax
  int v58; // r8d
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 v62; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v64; // r10
  struct _KPRCB *v65; // rsi
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r14
  unsigned __int64 *v68; // r8
  unsigned __int64 Phase0Mapping; // rax
  __int64 v70; // r9
  unsigned __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r9
  unsigned __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  signed __int64 v80; // rdx
  unsigned __int64 v81; // r9
  signed __int64 v82; // r8
  signed __int64 v83; // rcx
  int v84; // eax
  signed __int64 v85; // rdx
  signed __int64 v86; // r8
  signed __int64 v87; // rcx
  signed __int64 v88; // rdx
  __int64 v89; // r9
  signed __int64 v90; // r8
  signed __int64 v91; // rcx
  LONG *v92; // rax
  struct _KPRCB *v93; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  int v97; // edx
  char v98; // cl
  unsigned int v99; // eax
  _KTHREAD *NextThread; // rax
  unsigned int v101; // ebx
  signed __int32 v103[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v104; // [rsp+30h] [rbp-D0h]
  unsigned int v105; // [rsp+34h] [rbp-CCh]
  unsigned int v106; // [rsp+38h] [rbp-C8h]
  int v107; // [rsp+3Ch] [rbp-C4h]
  unsigned int v108; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v109; // [rsp+48h] [rbp-B8h]
  int v110; // [rsp+50h] [rbp-B0h]
  __int64 v111; // [rsp+58h] [rbp-A8h]
  __int64 v112; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v113; // [rsp+68h] [rbp-98h]
  int v114; // [rsp+70h] [rbp-90h]
  unsigned int v115; // [rsp+74h] [rbp-8Ch]
  volatile signed __int32 *v116; // [rsp+78h] [rbp-88h]
  __int64 v117; // [rsp+80h] [rbp-80h]
  __int64 v118; // [rsp+88h] [rbp-78h]
  __int64 v119; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v120; // [rsp+98h] [rbp-68h]
  void *v121; // [rsp+A0h] [rbp-60h]
  __int64 v122; // [rsp+A8h] [rbp-58h]
  __int64 v123; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v124; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v125; // [rsp+C0h] [rbp-40h]
  _OWORD v126[9]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v127[16]; // [rsp+160h] [rbp+60h] BYREF

  v125 = a7;
  v7 = a4;
  memset(v126, 0, sizeof(v126));
  v105 = a4;
  v122 = a2;
  v9 = a1;
  v111 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v112 = CurrentIrql;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a3 - 1) << byte_140C4DC8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140C4DC8D) - 1;
  v110 = NodeShiftedColor;
  v107 = v13;
  if ( !a2 || (p_PageColor = (volatile signed __int32 *)a2, (*(_BYTE *)(a2 + 184) & 7u) >= 2) )
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v15 = *a7;
  v16 = a6;
  v17 = a5 & 0xFFFFF0FF;
  v116 = p_PageColor;
  v18 = 0xFFFFFFFFFLL;
  v106 = a5 & 0xFFFFF0FF;
  v19 = 0LL;
  v113 = v15;
  v20 = 0LL;
  v118 = 0xFFFFFFFFFLL;
  v119 = 0LL;
  v108 = 0;
  v109 = 0LL;
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
    v123 = (int)v7;
    while ( 1 )
    {
      v33 = v13 & _InterlockedExchangeAdd(v116, 1u);
      v34 = v33 | v110;
      if ( v16 == -1 )
        goto LABEL_187;
      v35 = 15LL;
      if ( (unsigned int)dword_140C4DCF8 < 0xFuLL )
        v35 = (unsigned int)dword_140C4DCF8;
      v36 = v35 & v16;
      v34 = v36 | v34 & 0xFFFFFFF0;
      Page = MiGetPage(v9, v34, v17);
      v117 = Page;
      v40 = Page;
      if ( Page == -1 )
        v17 &= ~0x4000u;
      v16 = v35 & (v36 + 1);
      v7 = v105;
      a6 = v16;
      if ( Page == -1 )
      {
LABEL_187:
        v117 = MiGetPage(v111, v34, v17);
        v40 = v117;
        if ( v117 == -1 )
          goto LABEL_179;
      }
      v41 = v17 | 0x4000;
      if ( v16 == -1 )
        v41 = v17;
      v106 = v41;
      v19 = 48 * v40 - 0x58000000000LL;
      v42 = 1;
      v43 = *(unsigned __int8 *)(v19 + 34) >> 6;
      v114 = v43;
      if ( (_DWORD)v43 == v7 || ((unsigned __int8)((1 << v43) | (1 << v7)) & (unsigned __int8)byte_140C4DDD8) == 0 )
        break;
      v44 = v108;
      v127[v108] = v40;
      v108 = v44 + 1;
      if ( v44 == 15 )
      {
        MiPerformFinalZeroing(v127, 16LL, v7);
        v108 = 0;
      }
LABEL_142:
      v88 = *(_QWORD *)(v19 + 24);
      v89 = v118 & 0xFFFFFFFFFLL;
      v90 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v19 + 24),
              v118 & 0xFFFFFFFFFLL | v88 & 0xFFFFFFF000000000uLL,
              v88);
      if ( v88 != v90 )
      {
        do
        {
          v91 = v90;
          v90 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v19 + 24),
                  v89 | v90 & 0xFFFFFFF000000000uLL,
                  v90);
        }
        while ( v91 != v90 );
      }
      ++v20;
      v118 = v40;
      v109 = v20;
      if ( (unsigned __int8)v112 >= 2u )
      {
        v92 = &dword_140C4F580;
        if ( (*(_BYTE *)(v122 + 184) & 7) != 2 )
          v92 = (LONG *)(v122 + 192);
        if ( (*v92 & 0x40000000) != 0 )
          goto LABEL_179;
        v93 = KeGetCurrentPrcb();
        DpcRequestSummary = v93->DpcRequestSummary;
        DpcWatchdogCount = v93->DpcWatchdogCount;
        DpcTimeCount = v93->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v97 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v93->QuantumEnd )
            {
LABEL_172:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v42, DpcWatchdogCount, DpcTimeCount);
              if ( v42 )
                goto LABEL_179;
              goto LABEL_175;
            }
            goto LABEL_167;
          }
        }
        else
        {
          v97 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v42 = 2;
            goto LABEL_172;
          }
          if ( v93->QuantumEnd )
          {
            v42 = 3;
            goto LABEL_172;
          }
          NextThread = v93->NextThread;
          if ( NextThread && NextThread != v93->CurrentThread )
          {
            v42 = 4;
            goto LABEL_172;
          }
        }
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_175:
          v7 = v105;
          goto LABEL_176;
        }
        if ( !v97 )
        {
LABEL_171:
          _disable();
          v93->DpcWatchdogCount = 0;
          v93->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler(v93);
          _enable();
          v42 = 0;
          goto LABEL_172;
        }
LABEL_167:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v42 = 5;
          goto LABEL_172;
        }
        if ( v93->CurrentThread != v93->IdleThread )
        {
          v42 = 6;
          goto LABEL_172;
        }
        goto LABEL_171;
      }
LABEL_176:
      if ( v20 >= v113 )
        goto LABEL_179;
      v16 = a6;
      v17 = v106;
      v9 = v111;
      v13 = v107;
    }
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) == 0 || (a5 & 0x100) == 0 )
    {
LABEL_135:
      v84 = *(unsigned __int8 *)(v19 + 34) >> 6;
      if ( v84 != v7 )
      {
        if ( v84 == 1
          || v84 != 3
          && (v98 = *(_BYTE *)(v19 + 31) & 0xF,
              _InterlockedOr(v103, 0),
              v99 = ((_BYTE)KiTbFlushTimeStamp - v98) & 0xF,
              v99 <= 2)
          && ((v98 & 1) != 0 || v99 < 2) )
        {
          if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) != 0 )
            MiZeroPhysicalPage(v40);
          *(_QWORD *)(v19 + 16) = v119;
          v119 = v19;
LABEL_141:
          v42 = 1;
          goto LABEL_142;
        }
        MiChangePageAttribute(v19, v7, 4LL);
      }
      v85 = *(_QWORD *)(v19 + 24);
      v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v85 & 0xF0FFFFFFFFFFFFFFuLL, v85);
      if ( v85 != v86 )
      {
        do
        {
          v87 = v86;
          v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v86 & 0xF0FFFFFFFFFFFFFFuLL, v86);
        }
        while ( v87 != v86 );
      }
      goto LABEL_141;
    }
    v45 = (unsigned __int8 *)(v19 + 34);
    v120 = (unsigned __int8 *)(v19 + 34);
    v46 = dword_140C4DD98[4 * v43 + v123];
    v115 = v46;
    if ( v46 != (_DWORD)v43 )
      MiChangePageAttribute(48 * v40 - 0x58000000000LL, v46, 0LL);
    v47 = 0LL;
    if ( !KeGetCurrentPrcb()->HyperPte )
    {
      v47 = MiReservePtes((__int64)&qword_140C4ED40, 1u, v38, v39);
      if ( v47 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v40 - 0x58000000000LL);
        ValidPte = MiMakeValidPte(v47, v40, ProtectionPfnCompatible | 0xA0000000, v49);
        if ( MiPteInShadowRange(v47) )
        {
          if ( (unsigned int)MiPteHasShadow(v52, v51, v53, v54) )
          {
            if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
            *(_QWORD *)v47 = ValidPte;
            MiWritePteShadow(v47, ValidPte);
LABEL_74:
            KeZeroPages((__int64)(v47 << 25) >> 16, 4096LL, v53);
            MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v47, 1u);
LABEL_128:
            v7 = v105;
            if ( v46 != (_DWORD)v43 && v46 != v105 && v47 )
              MiChangePageAttribute(v19, (unsigned int)v43, 0LL);
            *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
            _InterlockedOr(v103, 0);
            v80 = *(_QWORD *)(v19 + 24);
            v81 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
            v82 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v19 + 24),
                    v81 | v80 & 0xF0FFFFFFFFFFFFFFuLL,
                    v80);
            if ( v80 != v82 )
            {
              do
              {
                v83 = v82;
                v82 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v19 + 24),
                        v81 | v82 & 0xF0FFFFFFFFFFFFFFuLL,
                        v82);
              }
              while ( v83 != v82 );
            }
            v20 = v109;
            goto LABEL_135;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v47 = ValidPte;
        goto LABEL_74;
      }
    }
    v104 = 17;
    v55 = KeGetCurrentPrcb();
    if ( v55->HyperPte )
      v47 = 1LL;
    v56 = 0LL;
    v124 = v47;
    HyperPte = v55->HyperPte;
    v121 = HyperPte;
    while ( 1 )
    {
      if ( HyperPte )
      {
        v58 = 4;
        v59 = *v45 >> 6;
        if ( !v59 || v59 == 3 )
        {
          v58 = 12;
        }
        else if ( v59 == 2 )
        {
          v58 = 28;
        }
        v62 = MiMakeValidPte(0LL, v40, v58 | 0xA0000000, v39);
        v64 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v64 <= 0xFu )
        {
          v61 = (unsigned int)v64 + 1;
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v60 = (-1LL << (v64 + 1)) & 4;
          SchedulerAssist[5] |= v60;
        }
        v65 = KeGetCurrentPrcb();
        v104 = v64;
        MmInternal = (unsigned __int64 *)v65->MmInternal;
        if ( !MmInternal
          || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
              v68 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
              MmInternal[1543] = (unsigned __int64)v68,
              !UltraMapping) )
        {
          UltraMapping = ((unsigned __int64)v65->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                       + (((__int64)v65->HyperPte & 0xFFF) << 12);
          v68 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        }
        if ( (unsigned __int64)v68 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v68 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_101;
        if ( !(unsigned int)MiPteHasShadow(v61, v60, v68, SchedulerAssist) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v62 & 1) != 0 )
          {
            v62 |= 0x8000000000000000uLL;
          }
LABEL_101:
          v45 = v120;
          *v68 = v62;
          goto LABEL_113;
        }
        if ( !HIBYTE(word_140C4DE08) && (v62 & 1) != 0 )
          v62 |= 0x8000000000000000uLL;
        *v68 = v62;
        MiWritePteShadow(v68, v62);
        v45 = v120;
      }
      else
      {
        Phase0Mapping = MxGetPhase0Mapping();
        UltraMapping = Phase0Mapping;
        if ( !Phase0Mapping )
          KeBugCheckEx(0x1Au, 0x3030305uLL, v40, 0LL, 0LL);
        v56 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v71 = MiMakeValidPte((unsigned __int64)v56, v40, 2684354564LL, v70);
        if ( !MiPteInShadowRange((unsigned __int64)v56) )
          goto LABEL_112;
        if ( !(unsigned int)MiPteHasShadow(v73, v72, v68, v74) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v71 & 1) != 0 )
          {
            v71 |= 0x8000000000000000uLL;
          }
LABEL_112:
          *v56 = v71;
          goto LABEL_113;
        }
        if ( !HIBYTE(word_140C4DE08) && (v71 & 1) != 0 )
          v71 |= 0x8000000000000000uLL;
        *v56 = v71;
        MiWritePteShadow(v56, v71);
      }
LABEL_113:
      KeZeroPages(UltraMapping, 4096LL, v68);
      if ( !v121 )
      {
        v75 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v56) )
        {
          if ( (unsigned int)MiPteHasShadow(v77, v76, v78, v79) )
          {
            if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
              v75 = ZeroPte | 0x8000000000000000uLL;
            *v56 = v75;
            MiWritePteShadow(v56, v75);
            goto LABEL_125;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v75 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *v56 = v75;
LABEL_125:
        KeFlushSingleTb(UltraMapping, 0LL, 1LL);
        goto LABEL_126;
      }
      MiUnmapPageInHyperSpaceWorker(UltraMapping, v104, 0x80000000);
LABEL_126:
      ++v40;
      v45 += 48;
      v120 = v45;
      HyperPte = v121;
      if ( v40 != v117 )
      {
        v47 = v124;
        LODWORD(v43) = v114;
        v46 = v115;
        v40 = v117;
        goto LABEL_128;
      }
    }
  }
  DWORD2(v126[0]) = 16;
  *(_QWORD *)&v126[0] = 1LL;
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
    LargePage = MiGetLargePage(v9, 1, v7, v24, 4, (__int64)v126);
    if ( !LargePage )
    {
      LODWORD(v9) = v111;
LABEL_21:
      v21 = 2;
      LargePage = MiGetLargePage(v9, 2, v7, v24, 4, (__int64)v126);
      if ( !LargePage )
        goto LABEL_23;
    }
    MiConvertEntireLargePageToSmall(LargePage, v21, 2, 1, 0LL, 0LL);
LABEL_23:
    v27 = v112;
    if ( (unsigned __int8)v112 < 2u )
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
    MiSetPfnBlink(48 * ((LargePage + 0x58000000000LL) / 48 + MiLargePageSizes[v21]) - 0x58000000030LL, v18, 0);
    v18 = (LargePage + 0x58000000000LL) / 48;
    v19 = LargePage;
    v7 = v105;
    v23 = v113 - (MiLargePageSizes[v21] + v109);
    p_PageColor = v116;
    LODWORD(v9) = v111;
    v13 = v107;
    NodeShiftedColor = v110;
    v109 += MiLargePageSizes[v21];
    if ( v23 < 0x10 )
      break;
    LOBYTE(CurrentIrql) = v112;
  }
  v27 = v112;
LABEL_35:
  v118 = v18;
  if ( DWORD1(v126[0]) )
    MiNotifyPageHeat(v126);
  if ( v27 < 2u )
  {
    v20 = v109;
    goto LABEL_42;
  }
  if ( MiWorkingSetIsContended(v122) )
  {
    v20 = v109;
  }
  else
  {
    v20 = v109;
    if ( !KeShouldYieldProcessor() )
    {
LABEL_42:
      v15 = v113;
      v13 = v107;
      v9 = v111;
      v17 = v106;
      v16 = -1LL;
      goto LABEL_43;
    }
  }
LABEL_179:
  v101 = v105;
  *v125 = v20;
  if ( v108 )
    MiPerformFinalZeroing(v127, v108, v101);
  if ( v119 )
    MiChangePageAttributeBatch(v119, v101, ZeroPte);
  return v19;
}
