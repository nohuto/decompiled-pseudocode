/*
 * XREFs of KeTransitionProcessorParkState @ 0x14057C888
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x140579F48 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x1405DD1A8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1405DD260 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x1405DD2E0 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRequestSoftwareInterrupt @ 0x14022BA6C (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140291380 (KiGroupSchedulingGenerationEnd.c)
 *     KiIsPrcbThread @ 0x1402916EC (KiIsPrcbThread.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetProcessorIdle @ 0x14035C560 (KiSetProcessorIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140574A7C (KiSendHeteroRescheduleIntRequest.c)
 *     KiFlushReadyLists @ 0x14057D0C0 (KiFlushReadyLists.c)
 */

void __fastcall KeTransitionProcessorParkState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  char v5; // r12
  char v6; // r15
  bool v7; // zf
  bool v8; // r13
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  char v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  char v23; // al
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  int v31; // eax
  int v32; // r12d
  int v33; // r12d
  struct _KPRCB *v34; // r14
  _DWORD *v35; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  int v41; // eax
  char v42; // si
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  int v46; // r12d
  struct _KPRCB *v47; // r14
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  char v55; // cl
  __int64 v56; // rcx
  char v57; // al
  __int64 v58; // rdx
  char v59; // si
  bool v60; // r12
  __int64 v61; // r8
  __int64 v62; // r9
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v67; // cl
  char v68; // al
  volatile signed __int32 *v69; // rcx
  int v70; // edx
  unsigned int v71; // edx
  char v72; // al
  char v73; // al
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  struct _KPRCB *v77; // rsi
  volatile signed __int32 *v78; // r14
  _DWORD *v79; // rcx
  int v80; // eax
  _DWORD *v81; // rcx
  int v82; // eax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  int v85; // eax
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  int v88; // eax
  _QWORD *v89; // rsi
  char v90; // r14
  char v91; // [rsp+30h] [rbp-48h]
  _DWORD v92[3]; // [rsp+34h] [rbp-44h] BYREF
  _QWORD *v93; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v94; // [rsp+48h] [rbp-30h]
  int v95[10]; // [rsp+50h] [rbp-28h] BYREF
  int v96; // [rsp+C0h] [rbp+48h] BYREF
  int v97; // [rsp+C8h] [rbp+50h] BYREF
  int v98; // [rsp+D0h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 192);
  v93 = 0LL;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0;
  v91 = 0;
  v6 = 0;
  v94 = v4;
  LOBYTE(v97) = 0;
  LOBYTE(v98) = 0;
  if ( a2 )
  {
    _m_prefetchw((const void *)(v2 + 80));
    if ( (v4 & *(_QWORD *)(v2 + 80)) != 0 )
    {
      LOBYTE(v97) = 1;
      v5 = 1;
      if ( a2 == 2 )
      {
        v8 = 1;
        goto LABEL_10;
      }
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    v9 = v5;
    LOBYTE(v97) = v5;
    if ( a2 == 1 )
    {
      v5 = 1;
      LOBYTE(v97) = v9;
    }
  }
  else
  {
    v7 = (v4 & *(_QWORD *)(v2 + 88)) == 0;
    v6 = 1;
    LOBYTE(v98) = 1;
    v8 = !v7;
  }
LABEL_10:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 104));
  CurrentPrcb = KeGetCurrentPrcb();
  v92[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[6];
        SchedulerAssist[6] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v16[6] - 1;
        v16[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(v92, v10, v11, v12);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v18 = v97;
  if ( (_BYTE)v97 || v6 )
  {
    v19 = v94;
    _InterlockedXor64((volatile signed __int64 *)(v2 + 80), v94);
    v20 = *(_QWORD *)(a1 + 34880);
    if ( !v20 )
      goto LABEL_34;
    v21 = *(_QWORD *)(a1 + 34888);
    v22 = v20 & *(_QWORD *)(v2 + 80);
    if ( !v22 )
    {
      v91 = 1;
      goto LABEL_34;
    }
    if ( v22 == v19 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                      * (unsigned __int64)*(unsigned __int8 *)(a1 + 208)
                                                                      + *(unsigned __int8 *)(v21 + 661)]]
                + 34896) = 0;
      v23 = *(_BYTE *)(a1 + 209);
      *(_DWORD *)(a1 + 34896) = 1;
LABEL_29:
      *(_BYTE *)(v21 + 661) = v23;
      goto LABEL_34;
    }
    if ( *(_DWORD *)(a1 + 34896) && v18 )
    {
      _BitScanReverse64(&v24, v22);
      v25 = (unsigned int)v24 + (*(unsigned __int8 *)(a1 + 208) << 6);
      v92[1] = v24;
      v26 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v25]];
      *(_DWORD *)(a1 + 34896) = 0;
      *(_DWORD *)(v26 + 34896) = 1;
      v23 = *(_BYTE *)(v26 + 209);
      goto LABEL_29;
    }
  }
  else
  {
    v19 = v94;
  }
LABEL_34:
  if ( v8 )
    _InterlockedXor64((volatile signed __int64 *)(v2 + 88), v19);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 104));
  v30 = *(_QWORD *)(a1 + 24);
  if ( (_BYTE)v98 )
  {
    v31 = *(unsigned __int8 *)(a1 + 35);
    if ( (v31 & 2) != 0 )
    {
      v32 = v8 ? -6 : -2;
      v7 = v31 + v32 == 0;
      v33 = v31 + v32;
      *(_BYTE *)(a1 + 35) = v33;
      if ( !v7 )
        goto LABEL_55;
      v34 = KeGetCurrentPrcb();
      v97 = 0;
      while ( 1 )
      {
        v35 = v34->SchedulerAssist;
        if ( v35 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v36 = v35[6];
            v35[6] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v34);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
          break;
        v37 = v34->SchedulerAssist;
        if ( v37 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v38 = v37[6] - 1;
            v37[6] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick((__int64)v34);
          }
        }
        do
          KeYieldProcessorEx(&v97, v27, v28, v29);
        while ( *(_QWORD *)v2 );
      }
      *(_QWORD *)(v2 + 8) ^= v94;
      _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 && v39->NestingLevel <= 1u && (v41 = v40[6] - 1, (v40[6] = v41) == 0) )
      {
        KiRemoveSystemWorkPriorityKick((__int64)v39);
      }
      else
      {
LABEL_55:
        v42 = 0;
        if ( v33 )
          goto LABEL_57;
      }
      *(_BYTE *)(a1 + 13243) = 1;
      v42 = 1;
LABEL_57:
      KiUpdateThreadPriority(a1, v30, 0LL, v42);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      if ( v44 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v45 = v44[6] - 1;
          v44[6] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
      }
      if ( v42 && KeHeteroSystem && !KeHeteroSystemVirtual )
        KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
      _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
      return;
    }
LABEL_95:
    __fastfail(0x21u);
  }
  if ( !v18 && !v5 )
  {
    if ( (*(_BYTE *)(a1 + 35) & 6) == 2 )
    {
      *(_BYTE *)(a1 + 35) += 4;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
      return;
    }
    goto LABEL_95;
  }
  v46 = *(unsigned __int8 *)(a1 + 35);
  if ( v18 )
  {
    if ( (v46 & 6) != 0 )
      goto LABEL_95;
    v46 += 2;
    if ( v46 == 2 )
    {
      v47 = KeGetCurrentPrcb();
      v98 = 0;
      while ( 1 )
      {
        v48 = v47->SchedulerAssist;
        if ( v48 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v49 = v48[6];
            v48[6] = v49 + 1;
            if ( v49 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v47);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
          break;
        v50 = v47->SchedulerAssist;
        if ( v50 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v51 = v50[6] - 1;
            v50[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick((__int64)v47);
          }
        }
        do
          KeYieldProcessorEx(&v98, v27, v28, v29);
        while ( *(_QWORD *)v2 );
      }
      *(_QWORD *)(v2 + 8) ^= v94;
      _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
      v52 = KeGetCurrentPrcb();
      v53 = v52->SchedulerAssist;
      if ( v53 )
      {
        if ( v52->NestingLevel <= 1u )
        {
          v54 = v53[6] - 1;
          v53[6] = v54;
          if ( !v54 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
      v18 = v97;
    }
  }
  v55 = v46 ^ 4;
  if ( !v8 )
    v55 = v46;
  *(_BYTE *)(a1 + 35) = v55;
  v56 = *(_QWORD *)(a1 + 16);
  if ( !v56 || KiIsPrcbThread(v56) )
  {
    v57 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(v56 + 120), 0xCu);
    KiInsertDeferredReadyList((__int64)&v93, v56);
    v56 = 0LL;
    v57 = 1;
  }
  v58 = *(_QWORD *)(a1 + 8);
  if ( v58 == v30 && !v56 || (v59 = 0, v56 == v30) )
    v59 = 1;
  if ( v58 == v30 )
  {
    if ( v57 )
      KiSetProcessorIdle(a1, 1LL, 0LL, v29);
    goto LABEL_108;
  }
  if ( v56 || (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 || v58 == *(_QWORD *)(a1 + 13112) )
  {
LABEL_108:
    v60 = 0;
    goto LABEL_109;
  }
  *(_BYTE *)(v58 + 565) = 1;
  _interlockedbittestandset((volatile signed __int32 *)(v58 + 120), 0xCu);
  *(_QWORD *)(a1 + 16) = v30;
  KiSetProcessorIdle(a1, 1LL, 0LL, v29);
  v59 = 1;
  v60 = (*(_BYTE *)(a1 + 13244) & 1) == 0;
LABEL_109:
  if ( v18 )
  {
    KiUpdateThreadPriority(a1, v30, (PVOID *)0x3F, 0);
    if ( v59 )
    {
      v63 = *(_BYTE **)(a1 + 56);
      if ( (*(_BYTE *)(v30 + 2) & 4) == 0
        || *(char *)(v30 + 195) >= 16
        || !*(_QWORD *)(v30 + 104)
        || (v64 = *(_QWORD *)(v30 + 104)) == 0
        || (v65 = *(unsigned int *)(a1 + 216) + v64) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v30, v65, 0LL, 0, 0LL),
            v67 = 1,
            !ThreadEffectiveRankNonZero) )
      {
        v67 = *(_BYTE *)(v30 + 195);
      }
      v68 = v67 & 0x7F | (*(_BYTE *)(v30 + 119) << 7);
      *v63 = v68;
      v69 = *(volatile signed __int32 **)(a1 + 35000);
      if ( v69 )
      {
        if ( v30 == *(_QWORD *)(a1 + 24) )
          v70 = KiVpThreadSystemWorkPriority;
        else
          v70 = v68 & 0x7F;
        KiSetSchedulerAssistPriority(v69, v70, 0);
      }
      v61 = *(_QWORD *)(a1 + 56);
      if ( KeHeteroSystem )
      {
        v71 = *(_DWORD *)(v30 + 80);
        v72 = (*(_BYTE *)(v61 + 64) ^ *(_BYTE *)(v30 + 512)) & 7 ^ *(_BYTE *)(v61 + 64);
        v73 = (v72 ^ (8 * *(_BYTE *)(v30 + 516))) & 0x38 ^ v72;
        if ( v71 <= *(_DWORD *)(v30 + 84) )
          v71 = *(_DWORD *)(v30 + 84);
        *(_BYTE *)(v61 + 64) = (v71 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v73 & 0xBF;
      }
    }
    if ( KiGroupSchedulingEnabled )
    {
      LOBYTE(v61) = 1;
      KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], v61, v62);
    }
    KiFlushReadyLists(a1 + 32576, a1 + 32472, &v93);
    if ( v91 )
    {
      v77 = KeGetCurrentPrcb();
      v78 = *(volatile signed __int32 **)(a1 + 34888);
      v96 = 0;
      while ( 1 )
      {
        v79 = v77->SchedulerAssist;
        if ( v79 )
        {
          if ( v77->NestingLevel <= 1u )
          {
            v80 = v79[6];
            v79[6] = v80 + 1;
            if ( v80 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v77);
          }
        }
        if ( !_interlockedbittestandset64(v78, 0LL) )
          break;
        v81 = v77->SchedulerAssist;
        if ( v81 )
        {
          if ( v77->NestingLevel <= 1u )
          {
            v82 = v81[6] - 1;
            v81[6] = v82;
            if ( !v82 )
              KiRemoveSystemWorkPriorityKick((__int64)v77);
          }
        }
        do
          KeYieldProcessorEx(&v96, v74, v75, v76);
        while ( *(_QWORD *)v78 );
      }
      KiFlushReadyLists(v78 + 4, v78 + 2, &v93);
      _InterlockedAnd64((volatile signed __int64 *)v78, 0LL);
      v83 = KeGetCurrentPrcb();
      v84 = v83->SchedulerAssist;
      if ( v84 )
      {
        if ( v83->NestingLevel <= 1u )
        {
          v85 = v84[6] - 1;
          v84[6] = v85;
          if ( !v85 )
            KiRemoveSystemWorkPriorityKick((__int64)v83);
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v86 = KeGetCurrentPrcb();
  v87 = v86->SchedulerAssist;
  if ( v87 )
  {
    if ( v86->NestingLevel <= 1u )
    {
      v88 = v87[6] - 1;
      v87[6] = v88;
      if ( !v88 )
        KiRemoveSystemWorkPriorityKick((__int64)v86);
    }
  }
  v89 = v93;
  v90 = 0;
  if ( v93 )
  {
    v93 = (_QWORD *)*v93;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)(v89 - 27), (__int64)&v93);
      v89 = v93;
      ++v90;
      if ( v93 )
        v93 = (_QWORD *)*v93;
      if ( (v90 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    while ( v89 );
  }
  KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 13242) )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      v95[0] = 5;
      *(_OWORD *)&v95[1] = 0LL;
      HalpInterruptSendIpi(v95, 0x2Fu);
    }
  }
  if ( (_BYTE)v97 )
    _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
  if ( v60 )
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
}
