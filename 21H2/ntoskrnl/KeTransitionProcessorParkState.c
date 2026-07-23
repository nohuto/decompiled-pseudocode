/*
 * XREFs of KeTransitionProcessorParkState @ 0x1405256EC
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x140523338 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x14057D9F4 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14057DAEC (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x14057DBA0 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiSetProcessorIdle @ 0x14027878C (KiSetProcessorIdle.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14027AF4C (KiGroupSchedulingGenerationEnd.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140520170 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     KiFlushReadyLists @ 0x140525D3C (KiFlushReadyLists.c)
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
  __int64 v40; // r8
  bool IsThreadRankNonZero; // al
  char v42; // cl
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct _KPRCB *v47; // rsi
  volatile signed __int32 *v48; // r14
  _DWORD *v49; // rcx
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // eax
  bool v53; // r8
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // eax
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  int v59; // eax
  _DWORD v61[2]; // [rsp+20h] [rbp-68h] BYREF
  int v62; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v63[11]; // [rsp+30h] [rbp-58h] BYREF
  char v64; // [rsp+90h] [rbp+8h]
  char v65; // [rsp+A8h] [rbp+20h]

  v63[0] = 0LL;
  v3 = 0;
  v65 = 0;
  v4 = 0;
  v64 = 0;
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
    v64 = 1;
    v7 = (v6 & *(_QWORD *)(v5 + 88)) != 0;
  }
LABEL_10:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 104));
  CurrentPrcb = KeGetCurrentPrcb();
  v61[0] = 0;
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
      KeYieldProcessorEx(v61, v8, v9, v10);
    while ( *(_QWORD *)(a1 + 48) );
  }
  if ( v4 || v64 )
  {
    _InterlockedXor64((volatile signed __int64 *)(v5 + 80), v6);
    v16 = *(_QWORD *)(a1 + 33856);
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 33864);
      v18 = v16 & *(_QWORD *)(v5 + 80);
      if ( !v18 )
      {
        v65 = 1;
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
        v61[1] = v20;
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
  if ( v64 )
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
      KiInsertDeferredReadyList((__int64)v63, v35);
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
        v39 = v53;
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
          KiUpdateThreadPriority(a1, v23, (PVOID *)0x7F, 0);
          if ( v38 )
          {
            if ( (*(_BYTE *)(v23 + 2) & 4) == 0
              || (IsThreadRankNonZero = KiIsThreadRankNonZero(v23, (struct _KPRCB *)a1), v42 = 1, !IsThreadRankNonZero) )
            {
              v42 = *(_BYTE *)(v23 + 195);
            }
            **(_BYTE **)(a1 + 56) = v42;
            if ( *(_QWORD *)(a1 + 33976) )
            {
              v43 = KiVpThreadSystemWorkPriority;
              if ( v23 != *(_QWORD *)(a1 + 24) )
                v43 = v42;
              KiSetSchedulerAssistPriority(*(volatile signed __int32 **)(a1 + 33976), v43, 0);
            }
          }
          if ( KiGroupSchedulingEnabled )
          {
            LOBYTE(v40) = 1;
            KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], v40);
          }
          KiFlushReadyLists(a1 + 31872, a1 + 31768, v63);
          if ( v65 )
          {
            v47 = KeGetCurrentPrcb();
            v48 = *(volatile signed __int32 **)(a1 + 33864);
            v62 = 0;
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
                KeYieldProcessorEx(&v62, v44, v45, v46);
              while ( *(_QWORD *)v48 );
            }
            KiFlushReadyLists(v48 + 4, v48 + 2, v63);
            _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            if ( v55 )
            {
              if ( v54->NestingLevel <= 1u )
              {
                v56 = v55[6] - 1;
                v55[6] = v56;
                if ( !v56 )
                  KiRemoveSystemWorkPriorityKick((__int64)v54);
              }
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v57 = KeGetCurrentPrcb();
        v58 = v57->SchedulerAssist;
        if ( v58 )
        {
          if ( v57->NestingLevel <= 1u )
          {
            v59 = v58[6] - 1;
            v58[6] = v59;
            if ( !v59 )
              KiRemoveSystemWorkPriorityKick((__int64)v57);
          }
        }
        LOBYTE(v30) = (unsigned __int8)KiReadyDeferredReadyList(a1, v63);
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
