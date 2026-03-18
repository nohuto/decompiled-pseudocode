/*
 * XREFs of KiAcquireThreadStateLock @ 0x14026D370
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14025A360 (KeQueryTotalCycleTimeThread.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035B1E8 (KiSetThreadSchedulingGroup.c)
 *     KeUpdateThreadTag @ 0x140369290 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1403C226C (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x14050D8C8 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051A4F0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  _QWORD *v4; // rbp
  __int64 *v6; // r9
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // rbx
  volatile signed __int32 *v10; // r14
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  bool v14; // zf
  __int64 result; // rax
  char v16; // al
  __int64 v17; // r12
  struct _KPRCB *v18; // r13
  _DWORD *v19; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // r12
  struct _KPRCB *v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  struct _KPRCB *v29; // r13
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
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
  int v47; // eax
  int v48; // [rsp+20h] [rbp-48h] BYREF
  int v49[17]; // [rsp+24h] [rbp-44h] BYREF
  int v50; // [rsp+70h] [rbp+8h] BYREF
  int v51; // [rsp+88h] [rbp+20h] BYREF

  v4 = (_QWORD *)a2;
LABEL_2:
  v6 = KiProcessorBlock;
  v7 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(a1 + 388);
        v9 = 0LL;
        v10 = 0LL;
        if ( v8 != 2 )
          break;
LABEL_4:
        v11 = *(unsigned int *)(a1 + 536);
        if ( (int)v11 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v11];
          v49[0] = 0;
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
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v25 = CurrentPrcb->SchedulerAssist;
            if ( v25 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v46 = v25[6] - 1;
                v25[6] = v46;
                if ( !v46 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(v49, a2, v7, (__int64)v6);
            while ( *(_QWORD *)(v9 + 48) );
            v26 = CurrentPrcb->SchedulerAssist;
            if ( v26 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v47 = v26[6];
                v26[6] = v47 + 1;
                if ( v47 == -1 )
                  goto LABEL_85;
              }
            }
          }
          v14 = a1 == *(_QWORD *)(v9 + 8);
          goto LABEL_8;
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) != 3 )
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_9;
        v16 = *(_BYTE *)(a1 + 112) & 7;
        if ( v16 == 1 || (unsigned __int8)(v16 - 3) <= 3u )
          goto LABEL_9;
        LOBYTE(v8) = 2;
        goto LABEL_4;
      }
      v17 = *(unsigned int *)(a1 + 536);
      if ( (int)v17 >= 0 )
      {
        v18 = KeGetCurrentPrcb();
        v9 = KiProcessorBlock[v17];
        v50 = 0;
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v35 = v19[6];
            v19[6] = v35 + 1;
            if ( v35 == -1 )
LABEL_55:
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
        {
          v27 = v18->SchedulerAssist;
          if ( v27 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v36 = v27[6] - 1;
              v27[6] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          do
            KeYieldProcessorEx(&v50, a2, v7, (__int64)v6);
          while ( *(_QWORD *)(v9 + 48) );
          v28 = v18->SchedulerAssist;
          if ( v28 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v37 = v28[6];
              v28[6] = v37 + 1;
              if ( v37 == -1 )
                goto LABEL_55;
            }
          }
        }
        if ( a1 == *(_QWORD *)(v9 + 16) )
          goto LABEL_9;
        if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
          __fastfail(0x1Eu);
        goto LABEL_21;
      }
    }
    v21 = *(unsigned int *)(a1 + 536);
    if ( (int)v21 >= 0 )
    {
      v29 = KeGetCurrentPrcb();
      v9 = KiProcessorBlock[v21];
      v48 = 0;
      v30 = v29->SchedulerAssist;
      if ( v30 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v41 = v30[6];
          v30[6] = v41 + 1;
          if ( v41 == -1 )
LABEL_73:
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
      {
        v31 = v29->SchedulerAssist;
        if ( v31 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v42 = v31[6] - 1;
            v31[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        do
          KeYieldProcessorEx(&v48, a2, v7, (__int64)v6);
        while ( *(_QWORD *)(v9 + 48) );
        v32 = v29->SchedulerAssist;
        if ( v32 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v43 = v32[6];
            v32[6] = v43 + 1;
            if ( v43 == -1 )
              goto LABEL_73;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
      {
LABEL_21:
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
        goto LABEL_22;
      }
      v14 = *(_DWORD *)(a1 + 536) == (_DWORD)v21;
LABEL_8:
      if ( v14 )
        goto LABEL_9;
      goto LABEL_21;
    }
    v22 = KeGetCurrentPrcb();
    v23 = (unsigned int)v21;
    LODWORD(v23) = v21 & 0x7FFFFFFF;
    v51 = 0;
    v24 = v22->SchedulerAssist;
    v10 = *(volatile signed __int32 **)(KiProcessorBlock[v23] + 33864);
    if ( v24 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v38 = v24[6];
        v24[6] = v38 + 1;
        if ( v38 == -1 )
LABEL_64:
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v33 = v22->SchedulerAssist;
      if ( v33 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v39 = v33[6] - 1;
          v33[6] = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      do
        KeYieldProcessorEx(&v51, a2, v7, (__int64)v6);
      while ( *(_QWORD *)v10 );
      v34 = v22->SchedulerAssist;
      if ( v34 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v40 = v34[6];
          v34[6] = v40 + 1;
          if ( v40 == -1 )
            goto LABEL_64;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v21 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_22:
    v20 = KeGetCurrentPrcb();
    v6 = KiProcessorBlock;
    v7 = 0LL;
    a2 = (__int64)v20->SchedulerAssist;
    if ( a2 )
    {
      v6 = KiProcessorBlock;
      if ( v20->NestingLevel <= 1u )
      {
        v6 = KiProcessorBlock;
        v44 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v44;
        if ( !v44 )
        {
          KiRemoveSystemWorkPriorityKick(v20);
          goto LABEL_2;
        }
      }
    }
  }
  v9 = 0LL;
LABEL_9:
  result = (unsigned __int8)v8;
  *v4 = v9;
  *a3 = v10;
  return result;
}
