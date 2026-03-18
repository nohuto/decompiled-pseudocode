/*
 * XREFs of KiAcquireThreadStateLock @ 0x140344DD0
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x140201DF4 (KeTryToFreezeThreadStack.c)
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiSetIdealProcessorThread @ 0x14035D00C (KiSetIdealProcessorThread.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     KiSetThreadSchedulingGroup @ 0x14035EE9C (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035EF6C (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateThreadCpuSets @ 0x1403D3170 (KiUpdateThreadCpuSets.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140574B54 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x1405757C0 (KeAbCrossThreadDelete.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 a2, volatile signed __int32 **a3, __int64 a4)
{
  _QWORD *v5; // rbp
  __int64 *v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  volatile signed __int32 *v10; // r14
  __int64 v11; // rax
  struct _KPRCB *v12; // r13
  _DWORD *v13; // rcx
  __int64 result; // rax
  char v15; // al
  __int64 v16; // r12
  struct _KPRCB *v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rcx
  __int64 v20; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // r13
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
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
  int v47; // eax
  int v48; // [rsp+20h] [rbp-48h] BYREF
  int v49[17]; // [rsp+24h] [rbp-44h] BYREF
  int v50; // [rsp+70h] [rbp+8h] BYREF
  int v51; // [rsp+88h] [rbp+20h] BYREF

  v5 = (_QWORD *)a2;
LABEL_2:
  v7 = KiProcessorBlock;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 2 )
        goto LABEL_4;
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 3 )
      {
        v20 = *(unsigned int *)(a1 + 536);
        if ( (int)v20 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v20];
          v50 = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v34 = SchedulerAssist[6];
              SchedulerAssist[6] = v34 + 1;
              if ( v34 == -1 )
LABEL_57:
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v28 = CurrentPrcb->SchedulerAssist;
            if ( v28 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v35 = v28[6] - 1;
                v28[6] = v35;
                if ( !v35 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v50, a2, (__int64)v7, a4);
            while ( *(_QWORD *)(v9 + 48) );
            v29 = CurrentPrcb->SchedulerAssist;
            if ( v29 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v36 = v29[6];
                v29[6] = v36 + 1;
                if ( v36 == -1 )
                  goto LABEL_57;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 16) )
            goto LABEL_8;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v20 )
            __fastfail(0x1Eu);
LABEL_26:
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_8;
        v15 = *(_BYTE *)(a1 + 112) & 7;
        if ( v15 == 1 || (unsigned __int8)(v15 - 3) <= 3u )
          goto LABEL_8;
        LOBYTE(v8) = 2;
LABEL_4:
        v11 = *(unsigned int *)(a1 + 536);
        if ( (int)v11 >= 0 )
        {
          v12 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v11];
          v49[0] = 0;
          v13 = v12->SchedulerAssist;
          if ( v13 )
          {
            if ( v12->NestingLevel <= 1u )
            {
              v44 = v13[6];
              v13[6] = v44 + 1;
              if ( v44 == -1 )
LABEL_87:
                KiRemoveSystemWorkPriorityKick(v12);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v24 = v12->SchedulerAssist;
            if ( v24 )
            {
              if ( v12->NestingLevel <= 1u )
              {
                v45 = v24[6] - 1;
                v24[6] = v45;
                if ( !v45 )
                  KiRemoveSystemWorkPriorityKick(v12);
              }
            }
            do
              KeYieldProcessorEx(v49, a2, (__int64)v7, a4);
            while ( *(_QWORD *)(v9 + 48) );
            v25 = v12->SchedulerAssist;
            if ( v25 )
            {
              if ( v12->NestingLevel <= 1u )
              {
                v46 = v25[6];
                v25[6] = v46 + 1;
                if ( v46 == -1 )
                  goto LABEL_87;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 8) )
            goto LABEL_8;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          v23 = KeGetCurrentPrcb();
          v7 = KiProcessorBlock;
          a2 = (__int64)v23->SchedulerAssist;
          if ( a2 )
          {
            v7 = KiProcessorBlock;
            if ( v23->NestingLevel <= 1u )
            {
              v7 = KiProcessorBlock;
              v47 = *(_DWORD *)(a2 + 24) - 1;
              *(_DWORD *)(a2 + 24) = v47;
              if ( !v47 )
              {
LABEL_84:
                KiRemoveSystemWorkPriorityKick(v23);
                goto LABEL_2;
              }
            }
          }
        }
      }
    }
    v16 = *(unsigned int *)(a1 + 536);
    if ( (int)v16 >= 0 )
    {
      v26 = KeGetCurrentPrcb();
      v9 = KiProcessorBlock[v16];
      v48 = 0;
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v40 = v27[6];
          v27[6] = v40 + 1;
          if ( v40 == -1 )
LABEL_75:
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
      {
        v30 = v26->SchedulerAssist;
        if ( v30 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v41 = v30[6] - 1;
            v30[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        do
          KeYieldProcessorEx(&v48, a2, (__int64)v7, a4);
        while ( *(_QWORD *)(v9 + 48) );
        v31 = v26->SchedulerAssist;
        if ( v31 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v42 = v31[6];
            v31[6] = v42 + 1;
            if ( v42 == -1 )
              goto LABEL_75;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
        goto LABEL_8;
      goto LABEL_26;
    }
    v17 = KeGetCurrentPrcb();
    v18 = (unsigned int)v16;
    LODWORD(v18) = v16 & 0x7FFFFFFF;
    v51 = 0;
    v19 = v17->SchedulerAssist;
    v10 = *(volatile signed __int32 **)(KiProcessorBlock[v18] + 34888);
    if ( v19 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v37 = v19[6];
        v19[6] = v37 + 1;
        if ( v37 == -1 )
LABEL_66:
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v32 = v17->SchedulerAssist;
      if ( v32 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v38 = v32[6] - 1;
          v32[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      do
        KeYieldProcessorEx(&v51, a2, (__int64)v7, a4);
      while ( *(_QWORD *)v10 );
      v33 = v17->SchedulerAssist;
      if ( v33 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v39 = v33[6];
          v33[6] = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_66;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_27:
    v23 = KeGetCurrentPrcb();
    v7 = KiProcessorBlock;
    a2 = (__int64)v23->SchedulerAssist;
    if ( a2 )
    {
      v7 = KiProcessorBlock;
      if ( v23->NestingLevel <= 1u )
      {
        v7 = KiProcessorBlock;
        v43 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v43;
        if ( !v43 )
          goto LABEL_84;
      }
    }
  }
  v9 = 0LL;
LABEL_8:
  result = (unsigned __int8)v8;
  *v5 = v9;
  *a3 = v10;
  return result;
}
