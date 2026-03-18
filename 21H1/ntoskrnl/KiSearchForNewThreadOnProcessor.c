/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x140265FF0
 * Callers:
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiSearchForNewThreadOnNode @ 0x140330948 (KiSearchForNewThreadOnNode.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140244D40 (KiEnterDeferredReadyState.c)
 *     KiMayStealStandbyThread @ 0x140266540 (KiMayStealStandbyThread.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x140332974 (KiCheckThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x140334898 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x14033644C (KiGroupSchedulingMoveThread.c)
 *     KiFindReadyThread @ 0x140337CC0 (KiFindReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  int v7; // ebp
  struct _KPRCB *v9; // r14
  _DWORD *v10; // rcx
  struct _KPRCB *v11; // r14
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v19; // r14
  _DWORD *v20; // rcx
  __int64 ReadyThread; // r14
  char v22; // r15
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _DWORD *v28; // rdx
  char v29; // cl
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  char IsThreadRankNonZero; // al
  _DWORD *v40; // rdx
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  struct _KPRCB *v43; // rcx
  int v44; // eax
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
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  int v62; // eax
  struct _KPRCB *v63; // rcx
  _DWORD *v64; // rdx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  __int64 v70; // rdx
  int v71; // [rsp+20h] [rbp-58h] BYREF
  int v72; // [rsp+24h] [rbp-54h] BYREF
  int v73; // [rsp+28h] [rbp-50h]
  __int64 v74[9]; // [rsp+30h] [rbp-48h] BYREF
  int v75; // [rsp+88h] [rbp+10h] BYREF
  int v76; // [rsp+98h] [rbp+20h] BYREF

  v5 = a2;
  v7 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v5 )
      {
        if ( !*(_DWORD *)(v5 + 31768) && !(unsigned __int8)KiMayStealStandbyThread(v5, a1) && !*(_QWORD *)(v5 + 31856) )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = a1;
        v75 = 0;
        v17 = v5;
        if ( a1 <= v5 )
        {
          v16 = v5;
          v17 = a1;
        }
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = SchedulerAssist[6];
            SchedulerAssist[6] = v44 + 1;
            if ( v44 == -1 )
LABEL_85:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
        {
          v37 = CurrentPrcb->SchedulerAssist;
          if ( v37 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v45 = v37[6] - 1;
              v37[6] = v45;
              if ( !v45 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v75, a2, a3, a4);
          while ( *(_QWORD *)(v17 + 48) );
          v38 = CurrentPrcb->SchedulerAssist;
          if ( v38 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v38[6];
              v38[6] = v46 + 1;
              if ( v46 == -1 )
                goto LABEL_85;
            }
          }
        }
        if ( v17 != v16 )
        {
          v19 = KeGetCurrentPrcb();
          v76 = 0;
          v20 = v19->SchedulerAssist;
          if ( v20 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v47 = v20[6];
              v20[6] = v47 + 1;
              if ( v47 == -1 )
LABEL_94:
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
          {
            v35 = v19->SchedulerAssist;
            if ( v35 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v48 = v35[6] - 1;
                v35[6] = v48;
                if ( !v48 )
                  KiRemoveSystemWorkPriorityKick(v19);
              }
            }
            do
              KeYieldProcessorEx(&v76, a2, a3, a4);
            while ( *(_QWORD *)(v16 + 48) );
            v36 = v19->SchedulerAssist;
            if ( v36 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v49 = v36[6];
                v36[6] = v49 + 1;
                if ( v49 == -1 )
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
        v9 = KeGetCurrentPrcb();
        v71 = 0;
        v10 = v9->SchedulerAssist;
        if ( v10 )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v50 = v10[6];
            v10[6] = v50 + 1;
            if ( v50 == -1 )
LABEL_103:
              KiRemoveSystemWorkPriorityKick(v9);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v41 = v9->SchedulerAssist;
          if ( v41 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v51 = v41[6] - 1;
              v41[6] = v51;
              if ( !v51 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          do
            KeYieldProcessorEx(&v71, a2, a3, a4);
          while ( *(_QWORD *)(a1 + 48) );
          v42 = v9->SchedulerAssist;
          if ( v42 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v52 = v42[6];
              v42[6] = v52 + 1;
              if ( v52 == -1 )
                goto LABEL_103;
            }
          }
        }
        v11 = KeGetCurrentPrcb();
        v72 = 0;
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v53 = v12[6];
            v12[6] = v53 + 1;
            if ( v53 == -1 )
LABEL_112:
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          v13 = v11->SchedulerAssist;
          if ( v13 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v54 = v13[6] - 1;
              v13[6] = v54;
              if ( !v54 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v72, a2, a3, a4);
          while ( *(_QWORD *)a3 );
          v14 = v11->SchedulerAssist;
          if ( v14 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v55 = v14[6];
              v14[6] = v55 + 1;
              if ( v55 == -1 )
                goto LABEL_112;
            }
          }
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v22 = 0;
      if ( ReadyThread )
        break;
      if ( !a3 )
      {
        if ( (unsigned __int8)KiMayStealStandbyThread(v5, a1)
          && (unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v5 + 16)) )
        {
          ReadyThread = *(_QWORD *)(v5 + 16);
          if ( (unsigned int)KiPrcbInGroupAffinity(a1, ReadyThread + 576) )
          {
            KiSelectNextThread(v5, 0LL);
            *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
            if ( ReadyThread )
              goto LABEL_30;
          }
          else
          {
            ReadyThread = 0LL;
          }
        }
        if ( !*(_DWORD *)(v5 + 31768) || (ReadyThread = KiFindReadyThread(a1, v5, 0LL)) == 0 )
        {
          v73 = 0;
          if ( !KiPerfIsoEnabled
            || (v57 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL),
                (unsigned int)((0x101010101010101LL
                              * (((v57 & 0x3333333333333333LL)
                                + ((v57 >> 2) & 0x3333333333333333LL)
                                + (((v57 & 0x3333333333333333LL) + ((v57 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
            && ((v58 = *(_QWORD *)(a1 + 200), v59 = *(_QWORD *)(a1 + 33880), v58 == v59)
             || (v60 = v59 & ~v58, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL) & v60) != 0)
             || (_BitScanForward64(&v61, v60),
                 v73 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208) + (unsigned int)v61],
                 (*(_DWORD *)(KiProcessorBlock[v73] + 236) & 0x400) != 0)) )
          {
            ReadyThread = KiGroupSchedulingMoveThread(a1, v5, v5 + 31856);
          }
        }
LABEL_30:
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v62 = v24[6] - 1;
            v24[6] = v62;
            if ( !v62 )
              goto LABEL_129;
          }
        }
        goto LABEL_31;
      }
      if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) != 0 )
        ReadyThread = KiFindReadyThread(a1, 0LL, a3);
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v23 = KeGetCurrentPrcb();
      v28 = v23->SchedulerAssist;
      if ( v28 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v56 = v28[6] - 1;
          v28[6] = v56;
          if ( !v56 )
LABEL_129:
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
LABEL_31:
      if ( !ReadyThread )
      {
        v25 = *(_QWORD *)(a1 + 33976);
        if ( v25 )
          *(_BYTE *)(v25 + 16) = 1;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 && v26->NestingLevel <= 1u )
        {
          v69 = v27[6] - 1;
          v27[6] = v69;
          if ( !v69 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
        return ReadyThread;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v7 = 2;
        goto LABEL_42;
      }
      KiEnterDeferredReadyState(ReadyThread);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v63 = KeGetCurrentPrcb();
      v64 = v63->SchedulerAssist;
      if ( v64 )
      {
        if ( v63->NestingLevel <= 1u )
        {
          v65 = v64[6] - 1;
          v64[6] = v65;
          if ( !v65 )
            KiRemoveSystemWorkPriorityKick(v63);
        }
      }
      *(_QWORD *)(ReadyThread + 216) = 0LL;
      v74[0] = ReadyThread + 216;
      KiReadyDeferredReadyList(a1, v74);
    }
    if ( a3 )
    {
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v33 = KeGetCurrentPrcb();
      v40 = v33->SchedulerAssist;
      if ( v40 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v66 = v40[6] - 1;
          v40[6] = v66;
          if ( !v66 )
LABEL_140:
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v67 = v34[6] - 1;
          v34[6] = v67;
          if ( !v67 )
            goto LABEL_140;
        }
      }
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v43 = KeGetCurrentPrcb();
    a2 = (__int64)v43->SchedulerAssist;
    if ( a2 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v68 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v68;
        if ( !v68 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
  }
  v22 = 1;
LABEL_42:
  if ( v7 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(ReadyThread, a1), v29 = 1, !IsThreadRankNonZero) )
    {
      v29 = *(_BYTE *)(ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v29;
    if ( *(_QWORD *)(a1 + 33976) )
    {
      v70 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ReadyThread != *(_QWORD *)(a1 + 24) )
        v70 = (unsigned int)v29;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v70, 0LL);
    }
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  if ( *(_BYTE *)(ReadyThread + 388) == 1 )
    *(_DWORD *)(ReadyThread + 132) = *(_DWORD *)(ReadyThread + 132)
                                   - *(_DWORD *)(ReadyThread + 436)
                                   + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(ReadyThread + 388) = 2;
  if ( !v22 )
  {
    v30 = *(unsigned __int8 *)(a1 + 35);
    v31 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 12587) = 0;
    if ( (v30 & 1) != 0 )
      __fastfail(0x21u);
    v32 = v30 + 1;
    *(_BYTE *)(a1 + 35) = v32;
    if ( v32 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v31, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v31 + 24), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 8), ~*(_QWORD *)(a1 + 33880));
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 16), ~*(_QWORD *)(a1 + 33880));
    if ( (*(_QWORD *)(a1 + 33880) & ~*(_QWORD *)(v31 + 24)) == *(_QWORD *)(a1 + 200) )
      _interlockedbittestandset64((volatile signed __int32 *)(v31 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  return ReadyThread;
}
