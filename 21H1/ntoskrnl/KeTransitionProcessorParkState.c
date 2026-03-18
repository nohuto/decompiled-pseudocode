/*
 * XREFs of KeTransitionProcessorParkState @ 0x14051F9AC
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x14051D5F8 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x140577D24 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x140577E1C (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x140577ED0 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140330300 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetProcessorIdle @ 0x140330C58 (KiSetProcessorIdle.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051A430 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 *     KiFlushReadyLists @ 0x14051FFFC (KiFlushReadyLists.c)
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
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  int v26; // eax
  int v27; // eax
  char v28; // bp
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // edx
  char v36; // cl
  __int64 v37; // rax
  char v38; // cl
  __int64 v39; // rdx
  char v40; // bp
  bool v41; // r12
  __int64 v42; // r8
  bool IsThreadRankNonZero; // al
  char v44; // cl
  int v45; // edx
  __int64 v46; // rdx
  struct _KPRCB *v47; // rsi
  volatile signed __int32 *v48; // r14
  _DWORD *v49; // rcx
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // eax
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  int v55; // eax
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  int v58; // eax
  _DWORD v60[2]; // [rsp+20h] [rbp-68h] BYREF
  int v61; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v62[11]; // [rsp+30h] [rbp-58h] BYREF
  char v63; // [rsp+90h] [rbp+8h]
  char v64; // [rsp+A8h] [rbp+20h]

  v62[0] = 0LL;
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
  v25 = *(_QWORD *)(a1 + 24);
  if ( v63 )
  {
    v26 = *(unsigned __int8 *)(a1 + 35);
    if ( (v26 & 2) != 0 )
    {
      v27 = v26 - 2;
      if ( v7 )
        v27 = *(unsigned __int8 *)(a1 + 35) - 6;
      *(_BYTE *)(a1 + 35) = v27;
      if ( !v27 )
        _InterlockedXor64((volatile signed __int64 *)v5, v6);
      v28 = 0;
      if ( !v27 )
      {
        *(_BYTE *)(a1 + 12587) = 1;
        v28 = 1;
      }
      KiUpdateThreadPriority(a1, v25, 0LL, v28);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      if ( v30 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v31 = v30[6] - 1;
          v30[6] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
      }
      if ( v28 && KeHeteroSystem && !KeHeteroSystemVirtual )
        KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
      LOBYTE(v32) = 106;
      _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
      return v32;
    }
LABEL_68:
    __fastfail(0x21u);
  }
  if ( v4 || v3 )
  {
    v35 = *(unsigned __int8 *)(a1 + 35);
    if ( v4 )
    {
      if ( (v35 & 6) != 0 )
        goto LABEL_68;
      v35 += 2;
      if ( v35 == 2 )
        _InterlockedXor64((volatile signed __int64 *)v5, v6);
    }
    v36 = v35 ^ 4;
    if ( !v7 )
      v36 = v35;
    v37 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 35) = v36;
    if ( !v37 || v37 == v25 )
    {
      v38 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _interlockedbittestandreset((volatile signed __int32 *)(v37 + 120), 0xCu);
      KiInsertDeferredReadyList((__int64)v62, v37);
      v37 = 0LL;
      v38 = 1;
    }
    v39 = *(_QWORD *)(a1 + 8);
    v40 = 1;
    if ( v39 == v25 )
    {
      if ( v38 )
      {
        KiSetProcessorIdle(a1, 1, 0);
        v41 = v23;
        goto LABEL_76;
      }
    }
    else if ( !v37 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 )
      {
        *(_BYTE *)(v39 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v39 + 120), 0xCu);
        *(_QWORD *)(a1 + 16) = v25;
        KiSetProcessorIdle(a1, 1, 0);
        v41 = (*(_BYTE *)(a1 + 12588) & 1) == 0;
LABEL_76:
        if ( v4 )
        {
          KiUpdateThreadPriority(a1, v25, (_SINGLE_LIST_ENTRY *)0x7F, 0);
          if ( v40 )
          {
            if ( (*(_BYTE *)(v25 + 2) & 4) == 0
              || (IsThreadRankNonZero = KiIsThreadRankNonZero(v25, (struct _KPRCB *)a1), v44 = 1, !IsThreadRankNonZero) )
            {
              v44 = *(_BYTE *)(v25 + 195);
            }
            **(_BYTE **)(a1 + 56) = v44;
            if ( *(_QWORD *)(a1 + 33976) )
            {
              v45 = KiVpThreadSystemWorkPriority;
              if ( v25 != *(_QWORD *)(a1 + 24) )
                v45 = v44;
              KiSetSchedulerAssistPriority(*(volatile signed __int32 **)(a1 + 33976), v45, 0);
            }
          }
          if ( KiGroupSchedulingEnabled )
          {
            LOBYTE(v42) = 1;
            KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], v42);
          }
          KiFlushReadyLists(a1 + 31872, a1 + 31768, v62);
          if ( v64 )
          {
            v47 = KeGetCurrentPrcb();
            v48 = *(volatile signed __int32 **)(a1 + 33864);
            v61 = 0;
            while ( 1 )
            {
              v49 = v47->SchedulerAssist;
              if ( v49 )
              {
                if ( v47->NestingLevel <= 1u )
                {
                  v50 = v49[6];
                  v49[6] = v50 + 1;
                  if ( v50 == -1 )
                    KiRemoveSystemWorkPriorityKick((__int64)v47);
                }
              }
              if ( !_interlockedbittestandset64(v48, 0LL) )
                break;
              v51 = v47->SchedulerAssist;
              if ( v51 )
              {
                if ( v47->NestingLevel <= 1u )
                {
                  v52 = v51[6] - 1;
                  v51[6] = v52;
                  if ( !v52 )
                    KiRemoveSystemWorkPriorityKick((__int64)v47);
                }
              }
              do
                KeYieldProcessorEx(&v61, v46, v23, v24);
              while ( *(_QWORD *)v48 );
            }
            KiFlushReadyLists(v48 + 4, v48 + 2, v62);
            _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
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
        LOBYTE(v32) = (unsigned __int8)KiReadyDeferredReadyList(a1, v62, v23, v24);
        if ( *(_QWORD *)(a1 + 16) )
        {
          LOBYTE(v32) = *(_BYTE *)(a1 + 12586);
          if ( !(_BYTE)v32 )
            LOBYTE(v32) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
        }
        if ( v4 )
        {
          LOBYTE(v32) = 106;
          _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
        }
        if ( v41 )
          LOBYTE(v32) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
        return v32;
      }
      v40 = 0;
    }
    v41 = 0;
    goto LABEL_76;
  }
  LOBYTE(v32) = *(_BYTE *)(a1 + 35) & 6;
  if ( (_BYTE)v32 != 2 )
    goto LABEL_68;
  *(_BYTE *)(a1 + 35) += 4;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v32 = v34[6] - 1;
      v34[6] = v32;
      if ( !v32 )
        LOBYTE(v32) = KiRemoveSystemWorkPriorityKick((__int64)v33);
    }
  }
  return v32;
}
