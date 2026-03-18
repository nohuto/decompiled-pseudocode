/*
 * XREFs of KiAcquireThreadStateLock @ 0x140214320
 * Callers:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140296BE0 (KeQueryTotalCycleTimeThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14034E548 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14034E618 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadTag @ 0x140369C50 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1403C312C (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x14050DF18 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051AB40 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x14051B9C8 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  __int64 *v4; // rbp
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
  __int64 v19; // r12
  struct _KPRCB *v20; // rbx
  __int64 v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  struct _KPRCB *v27; // r13
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  int v33; // eax
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
  int v46; // [rsp+20h] [rbp-48h] BYREF
  int v47[17]; // [rsp+24h] [rbp-44h] BYREF
  int v48; // [rsp+70h] [rbp+8h] BYREF
  int v49; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
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
LABEL_3:
        v9 = *(unsigned int *)(a1 + 536);
        if ( (int)v9 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = KiProcessorBlock[v9];
          v47[0] = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v43 = SchedulerAssist[6];
              SchedulerAssist[6] = v43 + 1;
              if ( v43 == -1 )
LABEL_84:
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            v23 = CurrentPrcb->SchedulerAssist;
            if ( v23 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v44 = v23[6] - 1;
                v23[6] = v44;
                if ( !v44 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(v47, a2);
            while ( *(_QWORD *)(v7 + 48) );
            v24 = CurrentPrcb->SchedulerAssist;
            if ( v24 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v45 = v24[6];
                v24[6] = v45 + 1;
                if ( v45 == -1 )
                  goto LABEL_84;
              }
            }
          }
          v12 = a1 == *(_QWORD *)(v7 + 8);
          goto LABEL_7;
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) != 3 )
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_8;
        v14 = *(_BYTE *)(a1 + 112) & 7;
        if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
          goto LABEL_8;
        LOBYTE(v6) = 2;
        goto LABEL_3;
      }
      v15 = *(unsigned int *)(a1 + 536);
      if ( (int)v15 >= 0 )
      {
        v16 = KeGetCurrentPrcb();
        v7 = KiProcessorBlock[v15];
        v48 = 0;
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v33 = v17[6];
            v17[6] = v33 + 1;
            if ( v33 == -1 )
LABEL_54:
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
        {
          v25 = v16->SchedulerAssist;
          if ( v25 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v34 = v25[6] - 1;
              v25[6] = v34;
              if ( !v34 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          do
            KeYieldProcessorEx(&v48, a2);
          while ( *(_QWORD *)(v7 + 48) );
          v26 = v16->SchedulerAssist;
          if ( v26 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v35 = v26[6];
              v26[6] = v35 + 1;
              if ( v35 == -1 )
                goto LABEL_54;
            }
          }
        }
        if ( a1 == *(_QWORD *)(v7 + 16) )
          goto LABEL_8;
        if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
          __fastfail(0x1Eu);
        goto LABEL_20;
      }
    }
    v19 = *(unsigned int *)(a1 + 536);
    if ( (int)v19 >= 0 )
    {
      v27 = KeGetCurrentPrcb();
      v7 = KiProcessorBlock[v19];
      v46 = 0;
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v39 = v28[6];
          v28[6] = v39 + 1;
          if ( v39 == -1 )
LABEL_72:
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        v29 = v27->SchedulerAssist;
        if ( v29 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v40 = v29[6] - 1;
            v29[6] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        do
          KeYieldProcessorEx(&v46, a2);
        while ( *(_QWORD *)(v7 + 48) );
        v30 = v27->SchedulerAssist;
        if ( v30 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v41 = v30[6];
            v30[6] = v41 + 1;
            if ( v41 == -1 )
              goto LABEL_72;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
      {
LABEL_20:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
        goto LABEL_21;
      }
      v12 = *(_DWORD *)(a1 + 536) == (_DWORD)v19;
LABEL_7:
      if ( v12 )
        goto LABEL_8;
      goto LABEL_20;
    }
    v20 = KeGetCurrentPrcb();
    v21 = (unsigned int)v19;
    LODWORD(v21) = v19 & 0x7FFFFFFF;
    v49 = 0;
    v22 = v20->SchedulerAssist;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v21] + 33864);
    if ( v22 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v36 = v22[6];
        v22[6] = v36 + 1;
        if ( v36 == -1 )
LABEL_63:
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      v31 = v20->SchedulerAssist;
      if ( v31 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v37 = v31[6] - 1;
          v31[6] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v49, a2);
      while ( *(_QWORD *)v8 );
      v32 = v20->SchedulerAssist;
      if ( v32 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v38 = v32[6];
          v32[6] = v38 + 1;
          if ( v38 == -1 )
            goto LABEL_63;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v19 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
LABEL_21:
    v18 = KeGetCurrentPrcb();
    a2 = (__int64 *)v18->SchedulerAssist;
    if ( a2 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v42 = *((_DWORD *)a2 + 6) - 1;
        *((_DWORD *)a2 + 6) = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  v7 = 0LL;
LABEL_8:
  result = (unsigned __int8)v6;
  *v4 = v7;
  *a3 = v8;
  return result;
}
