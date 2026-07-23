/*
 * XREFs of MiGetPageChain @ 0x1402B7610
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiGetHardFaultPages @ 0x1402990D4 (MiGetHardFaultPages.c)
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140212038 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiChangePageAttributeBatch @ 0x14030E2F0 (MiChangePageAttributeBatch.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiPerformFinalZeroing @ 0x14054F588 (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A834C (EtwTraceShouldYieldProcessor.c)
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
  int v9; // esi
  __int64 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdx
  int NodeShiftedColor; // ebx
  int v13; // r8d
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned int v17; // r12d
  __int64 v18; // rdi
  unsigned __int64 v19; // r9
  __int64 v20; // r13
  unsigned __int8 v21; // bp
  volatile signed __int32 *v22; // r12
  unsigned __int64 v23; // r10
  int v24; // r14d
  signed __int32 v25; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 LargePage; // rsi
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  bool v33; // zf
  LOGICAL ShouldYieldProcessor; // eax
  signed __int32 v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rsi
  __int64 v38; // r13
  __int64 Page; // rax
  ULONG_PTR v40; // r14
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // r9d
  signed __int64 v44; // rdx
  unsigned __int64 v45; // r9
  signed __int64 v46; // r8
  signed __int64 v47; // rcx
  int v48; // eax
  signed __int64 v49; // rdx
  signed __int64 v50; // r8
  signed __int64 v51; // rcx
  signed __int64 v52; // rdx
  __int64 v53; // rbp
  signed __int64 v54; // r8
  signed __int64 v55; // rcx
  LONG *v56; // rax
  struct _KPRCB *v57; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  int v61; // edx
  unsigned int v62; // ebx
  char v63; // cl
  unsigned int v64; // eax
  _KTHREAD *NextThread; // rax
  signed __int32 v67[8]; // [rsp+0h] [rbp-1F8h] BYREF
  unsigned __int64 v68; // [rsp+30h] [rbp-1C8h]
  int v69; // [rsp+38h] [rbp-1C0h]
  unsigned int v70; // [rsp+3Ch] [rbp-1BCh]
  int v71; // [rsp+40h] [rbp-1B8h]
  __int64 v72; // [rsp+48h] [rbp-1B0h]
  __int64 v73; // [rsp+50h] [rbp-1A8h]
  __int64 v74; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v75; // [rsp+60h] [rbp-198h]
  unsigned int v76; // [rsp+68h] [rbp-190h]
  unsigned int *p_PageColor; // [rsp+70h] [rbp-188h]
  __int64 v78; // [rsp+78h] [rbp-180h]
  __int64 v79; // [rsp+80h] [rbp-178h]
  unsigned __int64 *v80; // [rsp+88h] [rbp-170h]
  _OWORD v81[9]; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v82[16]; // [rsp+120h] [rbp-D8h] BYREF

  v9 = a1;
  v79 = a2;
  v73 = a1;
  v80 = a7;
  memset(v81, 0, sizeof(v81));
  CurrentIrql = KeGetCurrentIrql();
  v74 = CurrentIrql;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a3 - 1) << byte_140C4DECC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140C4DECD) - 1;
  v71 = NodeShiftedColor;
  v69 = v13;
  if ( a2 && (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    p_PageColor = (unsigned int *)a2;
  else
    p_PageColor = &CurrentPrcb->PageColor;
  v14 = *a7;
  v15 = 0xFFFFFFFFFLL;
  v16 = a6;
  v17 = a5 & 0xFFFFF0FF;
  v72 = 0xFFFFFFFFFLL;
  v18 = 0LL;
  v76 = a5 & 0xFFFFF0FF;
  v19 = 0LL;
  v75 = v14;
  v78 = 0LL;
  v70 = 0;
  v68 = 0LL;
  if ( a6 != -1 )
  {
    v17 = a5 & 0xFFFFB0FF | 0x4000;
    goto LABEL_44;
  }
  if ( v14 < 0x10 )
  {
LABEL_44:
    if ( v19 >= v14 )
      goto LABEL_105;
    while ( 1 )
    {
      v35 = v13 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u);
      v36 = v35 | v71;
      if ( v16 == -1 )
        goto LABEL_112;
      v37 = 15LL;
      if ( (unsigned int)dword_140C4DF38 < 0xFuLL )
        v37 = (unsigned int)dword_140C4DF38;
      v38 = v37 & v16;
      v36 = v38 | v36 & 0xFFFFFFF0;
      Page = MiGetPage(v73, v36, v17);
      v40 = Page;
      if ( Page == -1 )
        v17 &= ~0x4000u;
      v16 = v37 & (v38 + 1);
      if ( Page == -1 )
      {
LABEL_112:
        v40 = MiGetPage(v73, v36, v17);
        if ( v40 == -1LL )
          goto LABEL_104;
      }
      v41 = v17 | 0x4000;
      if ( v16 == -1 )
        v41 = v17;
      v17 = v41;
      v18 = 48 * v40 - 0x58000000000LL;
      v42 = *(unsigned __int8 *)(v18 + 34) >> 6;
      if ( v42 != a4 && ((unsigned __int8)((1 << v42) | (1 << a4)) & (unsigned __int8)byte_140C4E018) != 0 )
      {
        v43 = v70;
        v82[v70] = v40;
        v70 = v43 + 1;
        if ( v43 == 15 )
        {
          MiPerformFinalZeroing(v82, 16LL, a4);
          v70 = 0;
        }
        goto LABEL_68;
      }
      if ( (*(_DWORD *)(v18 + 16) & 0x3E0LL) != 0 && (a5 & 0x100) != 0 )
      {
        MiZeroPhysicalPage(v40, 1, a4);
        *(_QWORD *)(v18 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        _InterlockedOr(v67, 0);
        v44 = *(_QWORD *)(v18 + 24);
        v45 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
        v46 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v18 + 24),
                v45 | v44 & 0xF0FFFFFFFFFFFFFFuLL,
                v44);
        if ( v44 != v46 )
        {
          do
          {
            v47 = v46;
            v46 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v18 + 24),
                    v45 | v46 & 0xF0FFFFFFFFFFFFFFuLL,
                    v46);
          }
          while ( v47 != v46 );
        }
      }
      v48 = *(unsigned __int8 *)(v18 + 34) >> 6;
      if ( v48 != a4 )
      {
        if ( v48 == 1
          || v48 != 3
          && (v63 = *(_BYTE *)(v18 + 31) & 0xF,
              _InterlockedOr(v67, 0),
              v64 = ((_BYTE)KiTbFlushTimeStamp - v63) & 0xF,
              v64 <= 2)
          && ((v63 & 1) != 0 || v64 < 2) )
        {
          if ( (*(_DWORD *)(v18 + 16) & 0x3E0LL) != 0 )
            MiZeroPhysicalPage(v40, 1, a4);
          *(_QWORD *)(v18 + 16) = v78;
          v78 = 48 * v40 - 0x58000000000LL;
          goto LABEL_68;
        }
        MiChangePageAttribute(48 * v40 - 0x58000000000LL, a4, 4LL);
      }
      v49 = *(_QWORD *)(v18 + 24);
      v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v49 & 0xF0FFFFFFFFFFFFFFuLL, v49);
      if ( v49 != v50 )
      {
        do
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v50 & 0xF0FFFFFFFFFFFFFFuLL, v50);
        }
        while ( v51 != v50 );
      }
LABEL_68:
      v52 = *(_QWORD *)(v18 + 24);
      v53 = v15 & 0xFFFFFFFFFLL;
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v53 | v52 & 0xFFFFFFF000000000uLL, v52);
      if ( v52 != v54 )
      {
        do
        {
          v55 = v54;
          v54 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v18 + 24),
                  v53 | v54 & 0xFFFFFFF000000000uLL,
                  v54);
        }
        while ( v55 != v54 );
      }
      v15 = v40;
      v19 = ++v68;
      if ( (unsigned __int8)v74 >= 2u )
      {
        v56 = &dword_140C4F7C0;
        if ( (*(_BYTE *)(v79 + 184) & 7) != 2 )
          v56 = (LONG *)(v79 + 192);
        if ( (*v56 & 0x40000000) != 0 )
          goto LABEL_105;
        v57 = KeGetCurrentPrcb();
        DpcRequestSummary = v57->DpcRequestSummary;
        DpcWatchdogCount = v57->DpcWatchdogCount;
        DpcTimeCount = v57->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v61 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v57->QuantumEnd )
            {
              v62 = 1;
LABEL_98:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v62, DpcWatchdogCount, DpcTimeCount);
              v19 = v68;
              if ( v62 )
                goto LABEL_105;
LABEL_101:
              v15 = v40;
              goto LABEL_102;
            }
LABEL_93:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v62 = 5;
              goto LABEL_98;
            }
            if ( v57->CurrentThread != v57->IdleThread )
            {
              v62 = 6;
              goto LABEL_98;
            }
LABEL_97:
            _disable();
            v57->DpcWatchdogCount = 0;
            v57->DpcTimeCount = 0;
            KiResetGlobalDpcWatchdogProfiler((__int64)v57);
            _enable();
            v62 = 0;
            goto LABEL_98;
          }
        }
        else
        {
          v61 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v62 = 2;
            goto LABEL_98;
          }
          if ( v57->QuantumEnd )
          {
            v62 = 3;
            goto LABEL_98;
          }
          NextThread = v57->NextThread;
          if ( NextThread && NextThread != v57->CurrentThread )
          {
            v62 = 4;
            goto LABEL_98;
          }
        }
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_101;
        if ( v61 )
          goto LABEL_93;
        goto LABEL_97;
      }
LABEL_102:
      if ( v19 >= v75 )
        goto LABEL_105;
      v13 = v69;
    }
  }
  v20 = v72;
  v21 = 17;
  v22 = (volatile signed __int32 *)p_PageColor;
  v23 = v14;
  *(_QWORD *)&v81[0] = 1LL;
  v24 = 1;
  DWORD2(v81[0]) = 16;
  while ( 1 )
  {
    v25 = v13 & _InterlockedExchangeAdd(v22, 1u) | NodeShiftedColor;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v21 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (v21 + 1)) & 4;
        }
      }
    }
    if ( v23 < 0x200 || v24 != 1 )
      goto LABEL_22;
    LargePage = MiGetLargePage(v9, 1, a4, v25, 4, (__int64)v81);
    if ( !LargePage )
    {
      v9 = v73;
LABEL_22:
      v24 = 2;
      LargePage = MiGetLargePage(v9, 2, a4, v25, 4, (__int64)v81);
      if ( !LargePage )
        goto LABEL_24;
    }
    MiConvertEntireLargePageToSmall(LargePage, v24, 2, 1, 0LL, 0LL);
LABEL_24:
    v28 = v74;
    if ( (unsigned __int8)v74 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && v21 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (v21 + 1));
            v33 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8(v21);
    }
    if ( !LargePage )
      goto LABEL_36;
    MiSetPfnBlink(48 * ((LargePage + 0x58000000000LL) / 48 + MiLargePageSizes[v24]) - 0x58000000030LL, v20, 0LL);
    v20 = (LargePage + 0x58000000000LL) / 48;
    v18 = LargePage;
    v13 = v69;
    v23 = v75 - (MiLargePageSizes[v24] + v68);
    v9 = v73;
    NodeShiftedColor = v71;
    v68 += MiLargePageSizes[v24];
    if ( v23 < 0x10 )
      break;
    LOBYTE(CurrentIrql) = v74;
  }
  v28 = v74;
LABEL_36:
  v17 = v76;
  v72 = v20;
  v16 = -1LL;
  if ( DWORD1(v81[0]) )
    MiNotifyPageHeat(v81);
  if ( v28 < 2u )
  {
    v19 = v68;
    goto LABEL_43;
  }
  if ( (unsigned int)MiWorkingSetIsContended(v79) )
  {
LABEL_104:
    v19 = v68;
  }
  else
  {
    ShouldYieldProcessor = KeShouldYieldProcessor();
    v19 = v68;
    if ( !ShouldYieldProcessor )
    {
LABEL_43:
      v14 = v75;
      v13 = v69;
      v15 = v72;
      goto LABEL_44;
    }
  }
LABEL_105:
  *v80 = v19;
  if ( v70 )
    MiPerformFinalZeroing(v82, v70, a4);
  if ( v78 )
    MiChangePageAttributeBatch(v78, a4, ZeroPte);
  return v18;
}
