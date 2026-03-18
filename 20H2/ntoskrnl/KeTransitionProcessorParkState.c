/*
 * XREFs of KeTransitionProcessorParkState @ 0x1405239CC
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x140521618 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x14057BDA4 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14057BE9C (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x14057BF50 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402D9798 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetProcessorIdle @ 0x1402D9BD8 (KiSetProcessorIdle.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051E450 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 *     KiFlushReadyLists @ 0x14052401C (KiFlushReadyLists.c)
 */

char __fastcall KeTransitionProcessorParkState(__int64 a1, int a2)
{
  char v3; // r13
  char v4; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  bool v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  char v19; // al
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  char v26; // bp
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v29; // eax
  int v30; // eax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  int v33; // edx
  char v34; // cl
  __int64 v35; // rax
  char v36; // cl
  __int64 v37; // rdx
  char v38; // bp
  bool v39; // r12
  bool IsThreadRankNonZero; // al
  char v41; // cl
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _KPRCB *v46; // rsi
  volatile signed __int32 *v47; // r14
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  bool v52; // r8
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  int v55; // eax
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  int v58; // eax
  _DWORD v60[2]; // [rsp+20h] [rbp-68h] BYREF
  int v61; // [rsp+28h] [rbp-60h] BYREF
  _SINGLE_LIST_ENTRY v62[11]; // [rsp+30h] [rbp-58h] BYREF
  char v63; // [rsp+90h] [rbp+8h]
  char v64; // [rsp+A8h] [rbp+20h]

  v62[0].Next = 0LL;
  v3 = 0;
  v64 = 0;
  v4 = 0;
  v63 = 0;
  v5 = *(_QWORD *)(a1 + 192);
  v6 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    _m_prefetchw((const void *)(v5 + 80));
    if ( (v6 & *(_QWORD *)(v5 + 80)) != 0 )
    {
      v3 = 1;
      v4 = 1;
      if ( a2 == 2 )
      {
        v7 = 1;
        goto LABEL_10;
      }
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    v4 = v3;
    if ( a2 == 1 )
      v3 = 1;
  }
  else
  {
    v63 = 1;
    v7 = (v6 & *(_QWORD *)(v5 + 88)) != 0;
  }
LABEL_10:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 104));
  CurrentPrcb = KeGetCurrentPrcb();
  v60[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[6];
        SchedulerAssist[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[6] - 1;
        v14[6] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(v60, v8, v9, v10);
    while ( *(_QWORD *)(a1 + 48) );
  }
  if ( v4 || v63 )
  {
    _InterlockedXor64((volatile signed __int64 *)(v5 + 80), v6);
    v16 = *(_QWORD *)(a1 + 33856);
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 33864);
      v18 = v16 & *(_QWORD *)(v5 + 80);
      if ( !v18 )
      {
        v64 = 1;
        goto LABEL_33;
      }
      if ( v18 == v6 )
      {
        *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                        * (unsigned __int64)*(unsigned __int8 *)(a1 + 208)
                                                                        + *(unsigned __int8 *)(v17 + 596)]]
                  + 33872) = 0;
        v19 = *(_BYTE *)(a1 + 209);
        *(_DWORD *)(a1 + 33872) = 1;
LABEL_32:
        *(_BYTE *)(v17 + 596) = v19;
        goto LABEL_33;
      }
      if ( *(_DWORD *)(a1 + 33872) && v4 )
      {
        _BitScanReverse64(&v20, v18);
        v21 = (unsigned int)v20 + (*(unsigned __int8 *)(a1 + 208) << 6);
        v60[1] = v20;
        v22 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v21]];
        *(_DWORD *)(a1 + 33872) = 0;
        *(_DWORD *)(v22 + 33872) = 1;
        v19 = *(_BYTE *)(v22 + 209);
        goto LABEL_32;
      }
    }
  }
LABEL_33:
  if ( v7 )
    _InterlockedXor64((volatile signed __int64 *)(v5 + 88), v6);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 104));
  v23 = *(_QWORD *)(a1 + 24);
  if ( v63 )
  {
    v24 = *(unsigned __int8 *)(a1 + 35);
    if ( (v24 & 2) != 0 )
    {
      v25 = v24 - 2;
      if ( v7 )
        v25 = *(unsigned __int8 *)(a1 + 35) - 6;
      *(_BYTE *)(a1 + 35) = v25;
      if ( !v25 )
        _InterlockedXor64((volatile signed __int64 *)v5, v6);
      v26 = 0;
      if ( !v25 )
      {
        *(_BYTE *)(a1 + 12587) = 1;
        v26 = 1;
      }
      KiUpdateThreadPriority(a1, v23, 0LL, v26);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v29 = v28[6] - 1;
          v28[6] = v29;
          if ( !v29 )
            KiRemoveSystemWorkPriorityKick((__int64)v27);
        }
      }
      if ( v26 && KeHeteroSystem && !KeHeteroSystemVirtual )
        KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
      LOBYTE(v30) = 106;
      _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
      return v30;
    }
LABEL_68:
    __fastfail(0x21u);
  }
  if ( v4 || v3 )
  {
    v33 = *(unsigned __int8 *)(a1 + 35);
    if ( v4 )
    {
      if ( (v33 & 6) != 0 )
        goto LABEL_68;
      v33 += 2;
      if ( v33 == 2 )
        _InterlockedXor64((volatile signed __int64 *)v5, v6);
    }
    v34 = v33 ^ 4;
    if ( !v7 )
      v34 = v33;
    v35 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 35) = v34;
    if ( !v35 || v35 == v23 )
    {
      v36 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _interlockedbittestandreset((volatile signed __int32 *)(v35 + 120), 0xCu);
      KiInsertDeferredReadyList((__int64)v62, v35);
      v35 = 0LL;
      v36 = 1;
    }
    v37 = *(_QWORD *)(a1 + 8);
    v38 = 1;
    if ( v37 == v23 )
    {
      if ( v36 )
      {
        KiSetProcessorIdle(a1, 1, 0);
        v39 = v52;
        goto LABEL_76;
      }
    }
    else if ( !v35 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 )
      {
        *(_BYTE *)(v37 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v37 + 120), 0xCu);
        *(_QWORD *)(a1 + 16) = v23;
        KiSetProcessorIdle(a1, 1, 0);
        v39 = (*(_BYTE *)(a1 + 12588) & 1) == 0;
LABEL_76:
        if ( v4 )
        {
          KiUpdateThreadPriority(a1, v23, (_SINGLE_LIST_ENTRY *)0x7F, 0);
          if ( v38 )
          {
            if ( (*(_BYTE *)(v23 + 2) & 4) == 0
              || (IsThreadRankNonZero = KiIsThreadRankNonZero(v23, (struct _KPRCB *)a1), v41 = 1, !IsThreadRankNonZero) )
            {
              v41 = *(_BYTE *)(v23 + 195);
            }
            **(_BYTE **)(a1 + 56) = v41;
            if ( *(_QWORD *)(a1 + 33976) )
            {
              v42 = KiVpThreadSystemWorkPriority;
              if ( v23 != *(_QWORD *)(a1 + 24) )
                v42 = v41;
              KiSetSchedulerAssistPriority(*(volatile signed __int32 **)(a1 + 33976), v42, 0);
            }
          }
          if ( KiGroupSchedulingEnabled )
            KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], 1);
          KiFlushReadyLists(a1 + 31872, a1 + 31768, v62);
          if ( v64 )
          {
            v46 = KeGetCurrentPrcb();
            v47 = *(volatile signed __int32 **)(a1 + 33864);
            v61 = 0;
            while ( 1 )
            {
              v48 = v46->SchedulerAssist;
              if ( v48 )
              {
                if ( v46->NestingLevel <= 1u )
                {
                  v49 = v48[6];
                  v48[6] = v49 + 1;
                  if ( v49 == -1 )
                    KiRemoveSystemWorkPriorityKick((__int64)v46);
                }
              }
              if ( !_interlockedbittestandset64(v47, 0LL) )
                break;
              v50 = v46->SchedulerAssist;
              if ( v50 )
              {
                if ( v46->NestingLevel <= 1u )
                {
                  v51 = v50[6] - 1;
                  v50[6] = v51;
                  if ( !v51 )
                    KiRemoveSystemWorkPriorityKick((__int64)v46);
                }
              }
              do
                KeYieldProcessorEx(&v61, v43, v44, v45);
              while ( *(_QWORD *)v47 );
            }
            KiFlushReadyLists(v47 + 4, v47 + 2, v62);
            _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
            v53 = KeGetCurrentPrcb();
            v54 = v53->SchedulerAssist;
            if ( v54 )
            {
              if ( v53->NestingLevel <= 1u )
              {
                v55 = v54[6] - 1;
                v54[6] = v55;
                if ( !v55 )
                  KiRemoveSystemWorkPriorityKick((__int64)v53);
              }
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        if ( v57 )
        {
          if ( v56->NestingLevel <= 1u )
          {
            v58 = v57[6] - 1;
            v57[6] = v58;
            if ( !v58 )
              KiRemoveSystemWorkPriorityKick((__int64)v56);
          }
        }
        LOBYTE(v30) = (unsigned __int8)KiReadyDeferredReadyList(a1, v62);
        if ( *(_QWORD *)(a1 + 16) )
        {
          LOBYTE(v30) = *(_BYTE *)(a1 + 12586);
          if ( !(_BYTE)v30 )
            LOBYTE(v30) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
        }
        if ( v4 )
        {
          LOBYTE(v30) = 106;
          _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
        }
        if ( v39 )
          LOBYTE(v30) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
        return v30;
      }
      v38 = 0;
    }
    v39 = 0;
    goto LABEL_76;
  }
  LOBYTE(v30) = *(_BYTE *)(a1 + 35) & 6;
  if ( (_BYTE)v30 != 2 )
    goto LABEL_68;
  *(_BYTE *)(a1 + 35) += 4;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v30 = v32[6] - 1;
      v32[6] = v30;
      if ( !v30 )
        LOBYTE(v30) = KiRemoveSystemWorkPriorityKick((__int64)v31);
    }
  }
  return v30;
}
