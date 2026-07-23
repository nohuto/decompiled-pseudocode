/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1403520C0
 * Callers:
 *     KiSearchForNewThreadOnNode @ 0x14027847C (KiSearchForNewThreadOnNode.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x14027A8F4 (KiCheckThreadAffinity.c)
 *     KiFindReadyThread @ 0x14029B920 (KiFindReadyThread.c)
 *     KiGroupSchedulingMoveThread @ 0x14029C9C8 (KiGroupSchedulingMoveThread.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiEnterDeferredReadyState @ 0x1402ECFD0 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiMayStealStandbyThread @ 0x140352610 (KiMayStealStandbyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
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
  unsigned int v23; // r9d
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _DWORD *v29; // rdx
  char v30; // cl
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  bool IsThreadRankNonZero; // al
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
  _QWORD *v75; // [rsp+30h] [rbp-48h] BYREF
  int v76; // [rsp+88h] [rbp+10h] BYREF
  int v77; // [rsp+98h] [rbp+20h] BYREF

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
        v76 = 0;
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
            v45 = SchedulerAssist[6];
            SchedulerAssist[6] = v45 + 1;
            if ( v45 == -1 )
LABEL_85:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
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
            KeYieldProcessorEx(&v76, a2, a3, a4);
          while ( *(_QWORD *)(v17 + 48) );
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
        if ( v17 != v16 )
        {
          v19 = KeGetCurrentPrcb();
          v77 = 0;
          v20 = v19->SchedulerAssist;
          if ( v20 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v48 = v20[6];
              v20[6] = v48 + 1;
              if ( v48 == -1 )
LABEL_94:
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
          {
            v36 = v19->SchedulerAssist;
            if ( v36 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v49 = v36[6] - 1;
                v36[6] = v49;
                if ( !v49 )
                  KiRemoveSystemWorkPriorityKick(v19);
              }
            }
            do
              KeYieldProcessorEx(&v77, a2, a3, a4);
            while ( *(_QWORD *)(v16 + 48) );
            v37 = v19->SchedulerAssist;
            if ( v37 )
            {
              if ( v19->NestingLevel <= 1u )
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
        v9 = KeGetCurrentPrcb();
        v72 = 0;
        v10 = v9->SchedulerAssist;
        if ( v10 )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v51 = v10[6];
            v10[6] = v51 + 1;
            if ( v51 == -1 )
LABEL_103:
              KiRemoveSystemWorkPriorityKick(v9);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v42 = v9->SchedulerAssist;
          if ( v42 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v52 = v42[6] - 1;
              v42[6] = v52;
              if ( !v52 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          do
            KeYieldProcessorEx(&v72, a2, a3, a4);
          while ( *(_QWORD *)(a1 + 48) );
          v43 = v9->SchedulerAssist;
          if ( v43 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v53 = v43[6];
              v43[6] = v53 + 1;
              if ( v53 == -1 )
                goto LABEL_103;
            }
          }
        }
        v11 = KeGetCurrentPrcb();
        v73 = 0;
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v54 = v12[6];
            v12[6] = v54 + 1;
            if ( v54 == -1 )
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
              v55 = v13[6] - 1;
              v13[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v73, a2, a3, a4);
          while ( *(_QWORD *)a3 );
          v14 = v11->SchedulerAssist;
          if ( v14 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v56 = v14[6];
              v14[6] = v56 + 1;
              if ( v56 == -1 )
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
        if ( (unsigned __int8)KiMayStealStandbyThread(v5, a1) && KiCheckThreadAffinity(*(_QWORD *)(v5 + 16)) )
        {
          ReadyThread = *(_QWORD *)(v5 + 16);
          if ( KiPrcbInGroupAffinity(a1, ReadyThread + 576) )
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
        v23 = *(_DWORD *)(v5 + 31768);
        if ( !v23 || (ReadyThread = (__int64)KiFindReadyThread(a1, v5, 0LL, v23)) == 0 )
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
            ReadyThread = KiGroupSchedulingMoveThread(a1, v5, v5 + 31856);
          }
        }
LABEL_30:
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v63 = v25[6] - 1;
            v25[6] = v63;
            if ( !v63 )
              goto LABEL_129;
          }
        }
        goto LABEL_31;
      }
      if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) != 0 )
        ReadyThread = (__int64)KiFindReadyThread(a1, 0LL, a3, *(_DWORD *)(a3 + 8) & 0xFFFFFFFE);
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v24 = KeGetCurrentPrcb();
      v29 = v24->SchedulerAssist;
      if ( v29 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v57 = v29[6] - 1;
          v29[6] = v57;
          if ( !v57 )
LABEL_129:
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
LABEL_31:
      if ( !ReadyThread )
      {
        v26 = *(_QWORD *)(a1 + 33976);
        if ( v26 )
          *(_BYTE *)(v26 + 16) = 1;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        if ( v28 && v27->NestingLevel <= 1u )
        {
          v70 = v28[6] - 1;
          v28[6] = v70;
          if ( !v70 )
            KiRemoveSystemWorkPriorityKick(v27);
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
      v75 = (_QWORD *)(ReadyThread + 216);
      KiReadyDeferredReadyList(a1, &v75);
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
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
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
    a2 = (__int64)v44->SchedulerAssist;
    if ( a2 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v69 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v69;
        if ( !v69 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
  }
  v22 = 1;
LABEL_42:
  if ( v7 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(ReadyThread, (struct _KPRCB *)a1), v30 = 1, !IsThreadRankNonZero) )
    {
      v30 = *(_BYTE *)(ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v30;
    if ( *(_QWORD *)(a1 + 33976) )
    {
      v71 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ReadyThread != *(_QWORD *)(a1 + 24) )
        v71 = (unsigned int)v30;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v71, 0LL);
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
    v31 = *(unsigned __int8 *)(a1 + 35);
    v32 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 12587) = 0;
    if ( (v31 & 1) != 0 )
      __fastfail(0x21u);
    v33 = v31 + 1;
    *(_BYTE *)(a1 + 35) = v33;
    if ( v33 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v32, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v32 + 24), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 8), ~*(_QWORD *)(a1 + 33880));
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 16), ~*(_QWORD *)(a1 + 33880));
    if ( (*(_QWORD *)(a1 + 33880) & ~*(_QWORD *)(v32 + 24)) == *(_QWORD *)(a1 + 200) )
      _interlockedbittestandset64((volatile signed __int32 *)(v32 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  return ReadyThread;
}
