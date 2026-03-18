/*
 * XREFs of MiGetPageChain @ 0x140323D70
 * Callers:
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiResolvePrivateZeroFault @ 0x1403219B0 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14033C5F0 (MiCreateSharedZeroPages.c)
 *     MiGetHardFaultPages @ 0x14033E280 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14023261C (MiUserPdeOrAbove.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiIsAddressGlobal @ 0x14027DAD4 (MiIsAddressGlobal.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     MiPerformFinalZeroing @ 0x1405ADCD4 (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x14062E40C (EtwTraceShouldYieldProcessor.c)
 *     MxGetPhase0Mapping @ 0x140AF4308 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        unsigned __int64 *a8)
{
  unsigned int v8; // r15d
  __int64 v11; // r11
  __int64 CurrentIrql; // r8
  unsigned int v13; // ebx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // eax
  int v16; // r10d
  volatile signed __int32 *p_PageColor; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // ebp
  __int64 v21; // r13
  unsigned __int64 v22; // rdi
  int v23; // r15d
  unsigned __int8 v24; // r14
  unsigned __int64 v25; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 LargePage; // rbp
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned __int8 v30; // si
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  bool v34; // zf
  __int64 v35; // r12
  signed __int32 v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rsi
  unsigned int v45; // r9d
  unsigned __int8 *v46; // rbx
  unsigned int v47; // ebp
  ULONG_PTR v48; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  signed __int64 v51; // rdx
  unsigned __int64 v52; // r9
  signed __int64 v53; // r8
  signed __int64 v54; // rcx
  ULONG_PTR v55; // r12
  struct _KPRCB *v56; // rax
  void *HyperPte; // rax
  char v58; // cl
  int v59; // eax
  unsigned __int64 v60; // rdi
  unsigned __int8 v61; // r14
  _DWORD *v62; // r9
  struct _KPRCB *v63; // rbp
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 UltraMapping; // rbx
  unsigned __int64 *v66; // rdx
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v68; // rdi
  unsigned __int64 *v69; // r15
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rbx
  int v72; // eax
  signed __int64 v73; // rdx
  signed __int64 v74; // r8
  signed __int64 v75; // rcx
  signed __int64 v76; // rdx
  __int64 v77; // r12
  signed __int64 v78; // r8
  signed __int64 v79; // rcx
  _DWORD *v80; // rax
  struct _KPRCB *v81; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // r9d
  unsigned int DpcTimeCount; // r10d
  int v85; // edx
  unsigned int v86; // ebx
  __int64 v87; // rax
  unsigned int v88; // ecx
  _KTHREAD *NextThread; // rax
  signed __int32 v91[8]; // [rsp+0h] [rbp-238h] BYREF
  unsigned int v92; // [rsp+44h] [rbp-1F4h]
  unsigned int v93; // [rsp+48h] [rbp-1F0h]
  unsigned int v94; // [rsp+4Ch] [rbp-1ECh]
  int v95; // [rsp+50h] [rbp-1E8h]
  __int64 v96; // [rsp+58h] [rbp-1E0h]
  unsigned int v97; // [rsp+60h] [rbp-1D8h]
  int v98; // [rsp+64h] [rbp-1D4h]
  unsigned int v99; // [rsp+68h] [rbp-1D0h]
  unsigned __int64 v100; // [rsp+70h] [rbp-1C8h]
  unsigned __int64 v101; // [rsp+78h] [rbp-1C0h]
  __int64 v102; // [rsp+80h] [rbp-1B8h]
  unsigned __int64 v103; // [rsp+88h] [rbp-1B0h]
  volatile signed __int32 *v104; // [rsp+90h] [rbp-1A8h]
  __int64 v105; // [rsp+98h] [rbp-1A0h]
  __int64 Page; // [rsp+A0h] [rbp-198h]
  __int64 v107; // [rsp+A8h] [rbp-190h]
  ULONG_PTR v108; // [rsp+B0h] [rbp-188h]
  __int64 v109; // [rsp+B8h] [rbp-180h]
  unsigned __int64 *v110; // [rsp+C0h] [rbp-178h]
  void *v111; // [rsp+C8h] [rbp-170h]
  _OWORD v112[8]; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v113; // [rsp+150h] [rbp-E8h]
  int v114; // [rsp+158h] [rbp-E0h]
  _QWORD v115[16]; // [rsp+160h] [rbp-D8h] BYREF

  v8 = a5;
  v110 = a8;
  memset(v112, 0, sizeof(v112));
  v113 = 0LL;
  v114 = 0;
  v11 = a1;
  v109 = a2;
  v96 = a1;
  v92 = a5;
  CurrentIrql = KeGetCurrentIrql();
  v102 = CurrentIrql;
  v13 = a4 - 1;
  if ( a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = v13 << byte_140C506CC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C506CD) - 1;
  v97 = NodeShiftedColor;
  v95 = v16;
  if ( a2 && (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    p_PageColor = (volatile signed __int32 *)a2;
  else
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v104 = p_PageColor;
  if ( !a4 )
    v13 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
  v18 = *a8;
  v19 = a7;
  v20 = a6 & 0xFFFFF0FF;
  v100 = 0x3FFFFFFFFFLL;
  v93 = a6 & 0xFFFFF0FF;
  v21 = 0LL;
  v103 = v18;
  v22 = 0LL;
  v105 = 0LL;
  v94 = 0;
  v101 = 0LL;
  if ( a7 != -1 )
  {
    v20 = a6 & 0xFFFFB0FF | 0x4000;
    goto LABEL_45;
  }
  if ( v18 >= 0x10 )
  {
    DWORD2(v112[0]) = 16;
    *(_QWORD *)&v112[0] = 1LL;
    v23 = 1;
    v24 = 17;
    v25 = v18;
    while ( 1 )
    {
      _InterlockedIncrement(p_PageColor);
      if ( (unsigned __int8)CurrentIrql < 2u )
      {
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (v24 + 1)) & 4;
          }
        }
      }
      if ( v25 < 0x200 || v23 != 1 )
        goto LABEL_24;
      LargePage = MiGetLargePage(v11, a3, 1u, v13, v92, 4, v112);
      if ( !LargePage )
        break;
LABEL_25:
      MiConvertEntireLargePageToSmall(LargePage, v23, 2, 1, 0LL, 0LL, 0LL);
LABEL_26:
      v30 = v102;
      if ( (unsigned __int8)v102 < 2u )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && v24 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              p_PageColor = (volatile signed __int32 *)(-1LL << (v24 + 1));
              v29 = v32->SchedulerAssist;
              v33 = ~(unsigned __int16)p_PageColor;
              v34 = (v33 & v29[5]) == 0;
              v28 = (unsigned int)v33 & v29[5];
              v29[5] = v28;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
        }
        __writecr8(v24);
      }
      if ( !LargePage )
        goto LABEL_38;
      a3 += MiLargePageSizes[v23] << 12;
      MiSetPfnBlink(
        48 * (MiLargePageSizes[v23] - 0x5555555555555555LL * ((LargePage + 0x220000000000LL) >> 4)) - 0x220000000030LL,
        v100,
        0);
      v21 = LargePage;
      p_PageColor = v104;
      v11 = v96;
      v100 = 0xAAAAAAAAAAAAAAABuLL * ((LargePage + 0x220000000000LL) >> 4);
      v22 = MiLargePageSizes[v23] + v101;
      v25 = v103 - v22;
      v101 = v22;
      if ( v103 - v22 < 0x10 )
      {
        v30 = v102;
LABEL_38:
        if ( DWORD1(v112[0]) )
          MiNotifyPageHeat(v112, p_PageColor, v28, v29);
        if ( v30 >= 2u && ((unsigned int)MiWorkingSetIsContended(v109) || KeShouldYieldProcessor()) )
        {
          *v110 = v22;
          return v21;
        }
        v16 = v95;
        v18 = v103;
        v11 = v96;
        v20 = v93;
        v19 = -1LL;
        v8 = v92;
        goto LABEL_45;
      }
      LOBYTE(CurrentIrql) = v102;
    }
    v11 = v96;
LABEL_24:
    v23 = 2;
    LargePage = MiGetLargePage(v11, a3, 2u, v13, v92, 4, v112);
    if ( !LargePage )
      goto LABEL_26;
    goto LABEL_25;
  }
LABEL_45:
  if ( v22 < v18 )
  {
    v35 = v100;
    while ( 1 )
    {
      v36 = v16 & _InterlockedExchangeAdd(v104, 1u);
      v37 = v36 | v97;
      if ( v19 != -1 )
      {
        v38 = 15LL;
        if ( (unsigned int)dword_140C50738 < 0xFuLL )
          v38 = (unsigned int)dword_140C50738;
        v39 = v38 & v19;
        v37 = v39 | v37 & 0xFFFFFFF0;
        Page = MiGetPage(v11, v37, v20);
        v40 = Page;
        v41 = v39 + 1;
        if ( Page != -1 )
        {
          v19 = v38 & v41;
          a7 = v38 & v41;
          goto LABEL_53;
        }
        v42 = (unsigned int)v38;
        v20 &= ~0x4000u;
        v22 = v101;
        v19 = v41 & v42;
        a7 = v19;
      }
      Page = MiGetPage(v96, v37, v20);
      v40 = Page;
      if ( Page == -1 )
        break;
LABEL_53:
      v43 = v20 | 0x4000;
      if ( v19 == -1 )
        v43 = v20;
      v20 = v43;
      v93 = v43;
      v21 = 48 * v40 - 0x220000000000LL;
      v44 = *(unsigned __int8 *)(v21 + 34) >> 6;
      v98 = v44;
      if ( (_DWORD)v44 == v8 || ((unsigned __int8)((1 << v44) | (1 << v8)) & (unsigned __int8)byte_140C50818) == 0 )
      {
        if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) == 0 || (a6 & 0x100) == 0 )
          goto LABEL_125;
        v46 = (unsigned __int8 *)(v21 + 34);
        v107 = v21 + 34;
        v47 = dword_140C507D8[4 * v44 + (int)v8];
        v99 = v47;
        if ( v47 != (_DWORD)v44 )
          MiChangePageAttribute(48 * v40 - 0x220000000000LL, v47, 0);
        v48 = 0LL;
        if ( !KeGetCurrentPrcb()->HyperPte )
        {
          v48 = MiReservePtes((__int64)&qword_140C534C0, 1u);
          if ( v48 )
          {
            ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v40 - 0x220000000000LL);
            ValidPte = MiMakeValidPte(v48, v40, ProtectionPfnCompatible | 0xA0000000);
            if ( MiPteInShadowRange(v48) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
                  ValidPte |= 0x8000000000000000uLL;
                *(_QWORD *)v48 = ValidPte;
                MiWritePteShadow(v48, ValidPte);
                goto LABEL_76;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ValidPte & 1) != 0 )
              {
                ValidPte |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v48 = ValidPte;
LABEL_76:
            KeZeroPages((__int64)(v48 << 25) >> 16, 4096LL);
            MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v48, 1u);
LABEL_77:
            if ( v47 != (_DWORD)v44 && v47 != v8 && v48 )
              MiChangePageAttribute(v21, v44, 0);
            *(_QWORD *)(v21 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
            _InterlockedOr(v91, 0);
            v51 = *(_QWORD *)(v21 + 24);
            v52 = (unsigned __int64)(KiTbFlushTimeStamp & 7) << 59;
            v53 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v21 + 24),
                    v52 | v51 & 0xC7FFFFFFFFFFFFFFuLL,
                    v51);
            if ( v51 != v53 )
            {
              do
              {
                v54 = v53;
                v53 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v21 + 24),
                        v52 | v53 & 0xC7FFFFFFFFFFFFFFuLL,
                        v53);
              }
              while ( v54 != v53 );
            }
            v20 = v93;
LABEL_125:
            v72 = *(unsigned __int8 *)(v21 + 34) >> 6;
            if ( v72 != v8 )
            {
              if ( v72 == 1
                || v72 != 3
                && ((v87 = (*(_QWORD *)(v21 + 24) >> 59) & 7LL, ((*(_QWORD *)(v21 + 24) >> 59) & 7) == 0)
                 || (_InterlockedOr(v91, 0), v88 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v87) & 7, v88 <= 2)
                 && ((v87 & 1) != 0 || v88 < 2)) )
              {
                if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0 )
                  MiZeroPhysicalPage(v40, 1, v8);
                *(_QWORD *)(v21 + 16) = v105;
                v105 = v21;
LABEL_131:
                v35 = v100;
                goto LABEL_132;
              }
              MiChangePageAttribute(v21, v8, 4);
            }
            v73 = *(_QWORD *)(v21 + 24);
            v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), v73 & 0xC7FFFFFFFFFFFFFFuLL, v73);
            if ( v73 != v74 )
            {
              do
              {
                v75 = v74;
                v74 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v21 + 24),
                        v74 & 0xC7FFFFFFFFFFFFFFuLL,
                        v74);
              }
              while ( v75 != v74 );
            }
            goto LABEL_131;
          }
        }
        v55 = v40;
        v56 = KeGetCurrentPrcb();
        if ( v56->HyperPte )
          v48 = 1LL;
        v108 = v48;
        HyperPte = v56->HyperPte;
        v111 = HyperPte;
        while ( 2 )
        {
          if ( HyperPte )
          {
            v58 = 4;
            v59 = *v46 >> 6;
            if ( !v59 || v59 == 3 )
            {
              v58 = 12;
            }
            else if ( v59 == 2 )
            {
              v58 = 28;
            }
            v60 = ((v55 & 0xFFFFFFFFFFLL) << 12) & 0xFAFFFFFFFFFFFEFFuLL | MmProtectToPteMask[v58 & 0x1F] & 0xFAF0000000000E7FuLL | 0x21 | ((unsigned __int64)(word_140C51864 & 1) << 8) | 0xA00000000000042LL;
            v61 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v61 <= 0xFu )
            {
              v62 = KeGetCurrentPrcb()->SchedulerAssist;
              v62[5] |= (-1 << (v61 + 1)) & 4;
            }
            v63 = KeGetCurrentPrcb();
            MmInternal = (unsigned __int64 *)v63->MmInternal;
            if ( !MmInternal
              || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
                  v66 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                  MmInternal[1543] = (unsigned __int64)v66,
                  !UltraMapping) )
            {
              UltraMapping = ((unsigned __int64)v63->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                           + (((__int64)v63->HyperPte & 0xFFF) << 12);
              v66 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            }
            *v66 = v60;
            KeZeroPages(UltraMapping, 4096LL);
            MiUnmapPageInHyperSpaceWorker(UltraMapping, v61);
            v40 = Page;
LABEL_123:
            ++v55;
            v46 = (unsigned __int8 *)(v107 + 48);
            v107 += 48LL;
            HyperPte = v111;
            if ( v55 != v40 )
            {
              v48 = v108;
              LODWORD(v44) = v98;
              v47 = v99;
              v8 = v92;
              goto LABEL_77;
            }
            continue;
          }
          break;
        }
        Phase0Mapping = MxGetPhase0Mapping();
        v68 = Phase0Mapping;
        if ( !Phase0Mapping )
          KeBugCheckEx(0x1Au, 0x3030305uLL, v55, 0LL, 0LL);
        v69 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v70 = MiMakeValidPte((unsigned __int64)v69, v55, -1610612732);
        if ( MiPteInShadowRange((unsigned __int64)v69) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (v70 & 1) != 0 )
              v70 |= 0x8000000000000000uLL;
            *v69 = v70;
            MiWritePteShadow((__int64)v69, v70);
LABEL_112:
            KeZeroPages(v68, 4096LL);
            v71 = ZeroPte;
            if ( MiPteInShadowRange((unsigned __int64)v69) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                  v71 = ZeroPte | 0x8000000000000000uLL;
                *v69 = v71;
                MiWritePteShadow((__int64)v69, v71);
                goto LABEL_122;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v71 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v69 = v71;
LABEL_122:
            KeFlushSingleTb(v68, 0, 1u);
            goto LABEL_123;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v70 & 1) != 0 )
          {
            v70 |= 0x8000000000000000uLL;
          }
        }
        *v69 = v70;
        goto LABEL_112;
      }
      v45 = v94;
      v115[v94] = v40;
      v94 = v45 + 1;
      if ( v45 == 15 )
      {
        MiPerformFinalZeroing(v115, 16LL, v8);
        v94 = 0;
      }
LABEL_132:
      v76 = *(_QWORD *)(v21 + 24);
      v77 = v35 & 0xFFFFFFFFFFLL;
      v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), v77 | v76 & 0xFFFFFF0000000000uLL, v76);
      if ( v76 != v78 )
      {
        do
        {
          v79 = v78;
          v78 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v21 + 24),
                  v77 | v78 & 0xFFFFFF0000000000uLL,
                  v78);
        }
        while ( v79 != v78 );
      }
      v35 = v40;
      v22 = v101 + 1;
      v100 = v40;
      ++v101;
      if ( (unsigned __int8)v102 < 2u )
        goto LABEL_166;
      v80 = &unk_140C53D00;
      if ( (*(_BYTE *)(v109 + 184) & 7) != 2 )
        v80 = (_DWORD *)(v109 + 192);
      if ( (*v80 & 0x40000000) != 0 )
        break;
      v81 = KeGetCurrentPrcb();
      DpcRequestSummary = v81->DpcRequestSummary;
      DpcWatchdogCount = v81->DpcWatchdogCount;
      DpcTimeCount = v81->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v85 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v86 = 2;
          goto LABEL_163;
        }
        if ( v81->QuantumEnd )
        {
          v86 = 3;
          goto LABEL_163;
        }
        NextThread = v81->NextThread;
        if ( NextThread && NextThread != v81->CurrentThread )
        {
          v86 = 4;
          goto LABEL_163;
        }
LABEL_156:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_166;
        if ( !v85 )
          goto LABEL_162;
        goto LABEL_158;
      }
      v85 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_156;
      if ( v81->QuantumEnd )
      {
        v86 = 1;
        goto LABEL_163;
      }
LABEL_158:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v86 = 5;
        goto LABEL_163;
      }
      if ( v81->CurrentThread != v81->IdleThread )
      {
        v86 = 6;
        goto LABEL_163;
      }
LABEL_162:
      _disable();
      v81->DpcWatchdogCount = 0;
      v81->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler((__int64)v81);
      _enable();
      v86 = 0;
LABEL_163:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v86, DpcWatchdogCount, DpcTimeCount);
      if ( v86 )
        break;
LABEL_166:
      if ( v22 >= v103 )
        break;
      v19 = a7;
      v11 = v96;
      v16 = v95;
    }
  }
  *v110 = v22;
  if ( v94 )
    MiPerformFinalZeroing(v115, v94, v8);
  if ( v105 )
    MiChangePageAttributeBatch(v105, v8, ZeroPte);
  return v21;
}
