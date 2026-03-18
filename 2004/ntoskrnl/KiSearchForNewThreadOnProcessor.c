/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x14020CFA0
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KiSearchForNewThreadOnNode @ 0x1402EB808 (KiSearchForNewThreadOnNode.c)
 * Callees:
 *     KiMayStealStandbyThread @ 0x14020D4F0 (KiMayStealStandbyThread.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140281520 (KiEnterDeferredReadyState.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x1402ED834 (KiCheckThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x1402EF758 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x1402F130C (KiGroupSchedulingMoveThread.c)
 *     KiFindReadyThread @ 0x14032BB40 (KiFindReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // rbx
  int v6; // ebp
  struct _KPRCB *v8; // r14
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // r14
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *v15; // r15
  _DWORD *v16; // r14
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v18; // r14
  _DWORD *v19; // rcx
  __int64 ReadyThread; // r14
  char v21; // r15
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  _DWORD *v27; // rdx
  char v28; // cl
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  char IsThreadRankNonZero; // al
  _DWORD *v41; // rdx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  struct _KPRCB *v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  int v63; // eax
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  int v72; // [rsp+20h] [rbp-58h] BYREF
  int v73; // [rsp+24h] [rbp-54h] BYREF
  int v74; // [rsp+28h] [rbp-50h]
  __int64 v75[9]; // [rsp+30h] [rbp-48h] BYREF
  int v76; // [rsp+88h] [rbp+10h] BYREF
  int v77; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v4 )
      {
        if ( !v4[7942] && !(unsigned __int8)KiMayStealStandbyThread(v4, a1) && !*((_QWORD *)v4 + 3982) )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = (_DWORD *)a1;
        v76 = 0;
        v16 = v4;
        if ( a1 <= (unsigned __int64)v4 )
        {
          v15 = v4;
          v16 = (_DWORD *)a1;
        }
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v45 = SchedulerAssist[6];
            SchedulerAssist[6] = v45 + 1;
            if ( v45 == -1 )
LABEL_85:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64(v16 + 12, 0LL) )
        {
          v38 = CurrentPrcb->SchedulerAssist;
          if ( v38 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v38[6] - 1;
              v38[6] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v76, a2);
          while ( *((_QWORD *)v16 + 6) );
          v39 = CurrentPrcb->SchedulerAssist;
          if ( v39 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v47 = v39[6];
              v39[6] = v47 + 1;
              if ( v47 == -1 )
                goto LABEL_85;
            }
          }
        }
        if ( v16 != v15 )
        {
          v18 = KeGetCurrentPrcb();
          v77 = 0;
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v48 = v19[6];
              v19[6] = v48 + 1;
              if ( v48 == -1 )
LABEL_94:
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          while ( _interlockedbittestandset64(v15 + 12, 0LL) )
          {
            v36 = v18->SchedulerAssist;
            if ( v36 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v49 = v36[6] - 1;
                v36[6] = v49;
                if ( !v49 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx(&v77, a2);
            while ( *((_QWORD *)v15 + 6) );
            v37 = v18->SchedulerAssist;
            if ( v37 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v50 = v37[6];
                v37[6] = v50 + 1;
                if ( v50 == -1 )
                  goto LABEL_94;
              }
            }
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v8 = KeGetCurrentPrcb();
        v72 = 0;
        v9 = v8->SchedulerAssist;
        if ( v9 )
        {
          if ( v8->NestingLevel <= 1u )
          {
            v51 = v9[6];
            v9[6] = v51 + 1;
            if ( v51 == -1 )
LABEL_103:
              KiRemoveSystemWorkPriorityKick(v8);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v42 = v8->SchedulerAssist;
          if ( v42 )
          {
            if ( v8->NestingLevel <= 1u )
            {
              v52 = v42[6] - 1;
              v42[6] = v52;
              if ( !v52 )
                KiRemoveSystemWorkPriorityKick(v8);
            }
          }
          do
            KeYieldProcessorEx(&v72, a2);
          while ( *(_QWORD *)(a1 + 48) );
          v43 = v8->SchedulerAssist;
          if ( v43 )
          {
            if ( v8->NestingLevel <= 1u )
            {
              v53 = v43[6];
              v43[6] = v53 + 1;
              if ( v53 == -1 )
                goto LABEL_103;
            }
          }
        }
        v10 = KeGetCurrentPrcb();
        v73 = 0;
        v11 = v10->SchedulerAssist;
        if ( v11 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v54 = v11[6];
            v11[6] = v54 + 1;
            if ( v54 == -1 )
LABEL_112:
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          v12 = v10->SchedulerAssist;
          if ( v12 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v55 = v12[6] - 1;
              v12[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v10);
            }
          }
          do
            KeYieldProcessorEx(&v73, a2);
          while ( *(_QWORD *)a3 );
          v13 = v10->SchedulerAssist;
          if ( v13 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v56 = v13[6];
              v13[6] = v56 + 1;
              if ( v56 == -1 )
                goto LABEL_112;
            }
          }
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v21 = 0;
      if ( ReadyThread )
        break;
      if ( !a3 )
      {
        if ( (unsigned __int8)KiMayStealStandbyThread(v4, a1)
          && (unsigned int)KiCheckThreadAffinity(*((_QWORD *)v4 + 2)) )
        {
          ReadyThread = *((_QWORD *)v4 + 2);
          if ( (unsigned int)KiPrcbInGroupAffinity(a1, ReadyThread + 576) )
          {
            KiSelectNextThread(v4, 0LL, v32, v33);
            *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
            if ( ReadyThread )
              goto LABEL_30;
          }
          else
          {
            ReadyThread = 0LL;
          }
        }
        if ( !v4[7942] || (ReadyThread = KiFindReadyThread(a1, v4, 0LL)) == 0 )
        {
          v74 = 0;
          if ( !KiPerfIsoEnabled
            || (v58 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL),
                (unsigned int)((0x101010101010101LL
                              * (((v58 & 0x3333333333333333LL)
                                + ((v58 >> 2) & 0x3333333333333333LL)
                                + (((v58 & 0x3333333333333333LL) + ((v58 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
            && ((v59 = *(_QWORD *)(a1 + 200), v60 = *(_QWORD *)(a1 + 33880), v59 == v60)
             || (v61 = v60 & ~v59, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL) & v61) != 0)
             || (_BitScanForward64(&v62, v61),
                 v74 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208) + (unsigned int)v62],
                 (*(_DWORD *)(KiProcessorBlock[v74] + 236) & 0x400) != 0)) )
          {
            ReadyThread = KiGroupSchedulingMoveThread(a1, v4, v4 + 7964);
          }
        }
LABEL_30:
        _InterlockedAnd64((volatile signed __int64 *)v4 + 6, 0LL);
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v63 = v23[6] - 1;
            v23[6] = v63;
            if ( !v63 )
              goto LABEL_129;
          }
        }
        goto LABEL_31;
      }
      if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) != 0 )
        ReadyThread = KiFindReadyThread(a1, 0LL, a3);
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v22 = KeGetCurrentPrcb();
      v27 = v22->SchedulerAssist;
      if ( v27 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v57 = v27[6] - 1;
          v27[6] = v57;
          if ( !v57 )
LABEL_129:
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
LABEL_31:
      if ( !ReadyThread )
      {
        v24 = *(_QWORD *)(a1 + 33976);
        if ( v24 )
          *(_BYTE *)(v24 + 16) = 1;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 && v25->NestingLevel <= 1u )
        {
          v70 = v26[6] - 1;
          v26[6] = v70;
          if ( !v70 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
        return ReadyThread;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v6 = 2;
        goto LABEL_42;
      }
      KiEnterDeferredReadyState(ReadyThread);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v64 = KeGetCurrentPrcb();
      v65 = v64->SchedulerAssist;
      if ( v65 )
      {
        if ( v64->NestingLevel <= 1u )
        {
          v66 = v65[6] - 1;
          v65[6] = v66;
          if ( !v66 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
      *(_QWORD *)(ReadyThread + 216) = 0LL;
      v75[0] = ReadyThread + 216;
      KiReadyDeferredReadyList(a1, v75);
    }
    if ( a3 )
    {
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v34 = KeGetCurrentPrcb();
      v41 = v34->SchedulerAssist;
      if ( v41 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v67 = v41[6] - 1;
          v41[6] = v67;
          if ( !v67 )
LABEL_140:
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v4 + 6, 0LL);
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v68 = v35[6] - 1;
          v35[6] = v68;
          if ( !v68 )
            goto LABEL_140;
        }
      }
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v44 = KeGetCurrentPrcb();
    a2 = v44->SchedulerAssist;
    if ( a2 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v69 = a2[6] - 1;
        a2[6] = v69;
        if ( !v69 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
  }
  v21 = 1;
LABEL_42:
  if ( v6 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(ReadyThread, a1), v28 = 1, !IsThreadRankNonZero) )
    {
      v28 = *(_BYTE *)(ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v28;
    if ( *(_QWORD *)(a1 + 33976) )
    {
      v71 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ReadyThread != *(_QWORD *)(a1 + 24) )
        v71 = (unsigned int)v28;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v71, 0LL);
    }
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  if ( *(_BYTE *)(ReadyThread + 388) == 1 )
    *(_DWORD *)(ReadyThread + 132) = *(_DWORD *)(ReadyThread + 132)
                                   - *(_DWORD *)(ReadyThread + 436)
                                   + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(ReadyThread + 388) = 2;
  if ( !v21 )
  {
    v29 = *(unsigned __int8 *)(a1 + 35);
    v30 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 12587) = 0;
    if ( (v29 & 1) != 0 )
      __fastfail(0x21u);
    v31 = v29 + 1;
    *(_BYTE *)(a1 + 35) = v31;
    if ( v31 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v30, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v30 + 24), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 8), ~*(_QWORD *)(a1 + 33880));
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 16), ~*(_QWORD *)(a1 + 33880));
    if ( (*(_QWORD *)(a1 + 33880) & ~*(_QWORD *)(v30 + 24)) == *(_QWORD *)(a1 + 200) )
      _interlockedbittestandset64((volatile signed __int32 *)(v30 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  return ReadyThread;
}
