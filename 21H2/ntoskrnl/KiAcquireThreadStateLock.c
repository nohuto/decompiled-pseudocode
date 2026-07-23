/*
 * XREFs of KiAcquireThreadStateLock @ 0x1402D5790
 * Callers:
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14029C098 (KeSetIdealProcessorThreadEx.c)
 *     KiSetThreadSchedulingGroup @ 0x14029D3A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14029D508 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402D3740 (KeQueryTotalCycleTimeThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeUpdateThreadTag @ 0x14036C100 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1403C642C (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x1405135C8 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140520230 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  int v6; // esi
  __int64 v7; // rbx
  volatile signed __int32 *v8; // r14
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  bool v12; // zf
  __int64 result; // rax
  char v14; // al
  __int64 v15; // r12
  struct _KPRCB *v16; // r13
  _DWORD *v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // r12
  struct _KPRCB *v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  struct _KPRCB *v28; // r13
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // [rsp+20h] [rbp-48h] BYREF
  int v48[17]; // [rsp+24h] [rbp-44h] BYREF
  int v49; // [rsp+70h] [rbp+8h] BYREF
  int v50; // [rsp+88h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(unsigned __int8 *)(a1 + 388);
        v7 = 0LL;
        v8 = 0LL;
        if ( v6 != 2 )
          break;
LABEL_2:
        v9 = *(unsigned int *)(a1 + 536);
        if ( (int)v9 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = KiProcessorBlock[v9];
          v48[0] = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v44 = SchedulerAssist[6];
              SchedulerAssist[6] = v44 + 1;
              if ( v44 == -1 )
LABEL_83:
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            v24 = CurrentPrcb->SchedulerAssist;
            if ( v24 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v45 = v24[6] - 1;
                v24[6] = v45;
                if ( !v45 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(v48);
            while ( *(_QWORD *)(v7 + 48) );
            v25 = CurrentPrcb->SchedulerAssist;
            if ( v25 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v46 = v25[6];
                v25[6] = v46 + 1;
                if ( v46 == -1 )
                  goto LABEL_83;
              }
            }
          }
          v12 = a1 == *(_QWORD *)(v7 + 8);
          goto LABEL_6;
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) != 3 )
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_7;
        v14 = *(_BYTE *)(a1 + 112) & 7;
        if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
          goto LABEL_7;
        LOBYTE(v6) = 2;
        goto LABEL_2;
      }
      v15 = *(unsigned int *)(a1 + 536);
      if ( (int)v15 >= 0 )
      {
        v16 = KeGetCurrentPrcb();
        v7 = KiProcessorBlock[v15];
        v49 = 0;
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v34 = v17[6];
            v17[6] = v34 + 1;
            if ( v34 == -1 )
LABEL_53:
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
        {
          v26 = v16->SchedulerAssist;
          if ( v26 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v35 = v26[6] - 1;
              v26[6] = v35;
              if ( !v35 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          do
            KeYieldProcessorEx(&v49);
          while ( *(_QWORD *)(v7 + 48) );
          v27 = v16->SchedulerAssist;
          if ( v27 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v36 = v27[6];
              v27[6] = v36 + 1;
              if ( v36 == -1 )
                goto LABEL_53;
            }
          }
        }
        if ( a1 == *(_QWORD *)(v7 + 16) )
          goto LABEL_7;
        if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
          __fastfail(0x1Eu);
        goto LABEL_19;
      }
    }
    v20 = *(unsigned int *)(a1 + 536);
    if ( (int)v20 >= 0 )
    {
      v28 = KeGetCurrentPrcb();
      v7 = KiProcessorBlock[v20];
      v47 = 0;
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v40 = v29[6];
          v29[6] = v40 + 1;
          if ( v40 == -1 )
LABEL_71:
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        v30 = v28->SchedulerAssist;
        if ( v30 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v41 = v30[6] - 1;
            v30[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        do
          KeYieldProcessorEx(&v47);
        while ( *(_QWORD *)(v7 + 48) );
        v31 = v28->SchedulerAssist;
        if ( v31 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v42 = v31[6];
            v31[6] = v42 + 1;
            if ( v42 == -1 )
              goto LABEL_71;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
      {
LABEL_19:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
        goto LABEL_20;
      }
      v12 = *(_DWORD *)(a1 + 536) == (_DWORD)v20;
LABEL_6:
      if ( v12 )
        goto LABEL_7;
      goto LABEL_19;
    }
    v21 = KeGetCurrentPrcb();
    v22 = (unsigned int)v20;
    LODWORD(v22) = v20 & 0x7FFFFFFF;
    v50 = 0;
    v23 = v21->SchedulerAssist;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v22] + 33864);
    if ( v23 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v37 = v23[6];
        v23[6] = v37 + 1;
        if ( v37 == -1 )
LABEL_62:
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      v32 = v21->SchedulerAssist;
      if ( v32 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v38 = v32[6] - 1;
          v32[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      do
        KeYieldProcessorEx(&v50);
      while ( *(_QWORD *)v8 );
      v33 = v21->SchedulerAssist;
      if ( v33 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v39 = v33[6];
          v33[6] = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_62;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v20 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
LABEL_20:
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v43 = v19[6] - 1;
        v19[6] = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  v7 = 0LL;
LABEL_7:
  result = (unsigned __int8)v6;
  *a2 = v7;
  *a3 = v8;
  return result;
}
