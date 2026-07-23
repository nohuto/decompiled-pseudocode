/*
 * XREFs of KiRemoveBoostThread @ 0x1402EF720
 * Callers:
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KiCompleteDirectSwitchThread @ 0x140284918 (KiCompleteDirectSwitchThread.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiChooseLowestRankedThread @ 0x14029C310 (KiChooseLowestRankedThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v6; // dl
  PVOID *p_DpcData; // r8
  char v8; // cl
  char v9; // di
  char v10; // dl
  unsigned int v11; // eax
  char v12; // bp
  char v13; // r14
  struct _KPRCB *v14; // r15
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  int v17; // r10d
  __int64 ready; // rax
  __int64 v19; // r15
  struct _KDPC *v20; // rcx
  __int64 v21; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // r8
  bool v27; // zf
  char v28; // al
  __int64 v29; // rdx
  char v30; // r9
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  int v33; // edx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  char v36; // cl
  __int64 v37; // r9
  char IsThreadRankNonZero; // al
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  PVOID *v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  int v49; // edx
  int v50; // [rsp+78h] [rbp+10h] BYREF
  int v51; // [rsp+80h] [rbp+18h]
  int v52; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v39 = SchedulerAssist[6];
      SchedulerAssist[6] = v39 + 1;
      if ( v39 == -1 )
LABEL_59:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v31 = CurrentPrcb->SchedulerAssist;
    if ( v31 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v31[6] - 1;
        v31[6] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v50);
    while ( *(_QWORD *)(a2 + 64) );
    v32 = CurrentPrcb->SchedulerAssist;
    if ( v32 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v41 = v32[6];
        v32[6] = v41 + 1;
        if ( v41 == -1 )
          goto LABEL_59;
      }
    }
  }
  v6 = *(_BYTE *)(a2 + 564);
  p_DpcData = (PVOID *)*(unsigned __int8 *)(a2 + 195);
  v8 = v6 & 0xF;
  v9 = (_BYTE)p_DpcData - (v6 & 0xF);
  if ( (v6 & 0xF) == 0 )
    v9 = *(_BYTE *)(a2 + 195);
  v10 = v6 >> 4;
  if ( v10 )
  {
    v11 = *(_DWORD *)(a2 + 856);
    v12 = (_BYTE)p_DpcData - v10;
    *(_BYTE *)(a2 + 564) = v8;
    v51 = 0;
    if ( v11 )
    {
      _BitScanReverse((unsigned int *)&v33, v11);
      if ( v12 < v33 )
        v12 = v33;
      v51 = v33;
    }
    if ( v12 != (_BYTE)p_DpcData )
    {
      v13 = 0;
      v14 = KeGetCurrentPrcb();
      v52 = 0;
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v42 = v15[6];
          v15[6] = v42 + 1;
          if ( v42 == -1 )
LABEL_68:
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v34 = v14->SchedulerAssist;
        if ( v34 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v43 = v34[6] - 1;
            v34[6] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v52);
        while ( *(_QWORD *)(a1 + 48) );
        v35 = v14->SchedulerAssist;
        if ( v35 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v44 = v35[6];
            v35[6] = v44 + 1;
            if ( v44 == -1 )
              goto LABEL_68;
          }
        }
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        if ( *(_BYTE *)(a2 + 195) != 31
          && ((v16 = *(_QWORD *)(a2 + 104), v17 = *(char *)(a2 + 195), !v16)
           || (v29 = *(unsigned int *)(a1 + 216) + v16) == 0
           || ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || a2 != *(_QWORD *)(a1 + 8) ? (v30 = 1) : (v30 = 0),
               !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v29, (_DWORD)p_DpcData, v30, 0LL))
            ? (ready = KiSelectReadyThread((unsigned int)(v17 + 1), a1))
            : (ready = KiChooseLowestRankedThread((struct _KPRCB *)a1, (_KTHREAD *)a2, v17 + 1)),
              (v19 = ready) != 0) )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) == 0
            || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v36 = 1, !IsThreadRankNonZero) )
          {
            v36 = *(_BYTE *)(v19 + 195);
          }
          **(_BYTE **)(a1 + 56) = v36;
          v37 = *(_QWORD *)(a1 + 33976);
          if ( v37 )
          {
            v45 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v19 != *(_QWORD *)(a1 + 24) )
              v45 = (unsigned int)v36;
            KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v45, 0LL);
            v37 = *(_QWORD *)(a1 + 33976);
          }
          *(_QWORD *)(a1 + 16) = v19;
          if ( v37 )
            *(_BYTE *)(v37 + 16) = v19 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v19 + 388) == 1 )
            *(_DWORD *)(v19 + 132) = *(_DWORD *)(v19 + 132) - *(_DWORD *)(v19 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v19 + 388) = 3;
        }
        else
        {
          v13 = 1;
        }
      }
      v20 = (struct _KDPC *)KeGetCurrentPrcb();
      if ( v12 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v46 = (PVOID *)(a2 + 808);
          if ( *(_QWORD *)(a2 + 808) == 1LL )
          {
            p_DpcData = &v20[541].DpcData;
            if ( v20 != (struct _KDPC *)-34680LL )
            {
              *v46 = *p_DpcData;
              *p_DpcData = v46;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
              KiAbQueueAutoBoostDpc(v20);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v12;
      if ( v13 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          v27 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
          v28 = 1;
          if ( v27 )
            v28 = *(_BYTE *)(a2 + 195);
          v12 = v28;
        }
        **(_BYTE **)(a1 + 56) = v12;
        v21 = *(_QWORD *)(a1 + 33976);
        if ( v21 )
        {
          v47 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( a2 != *(_QWORD *)(a1 + 24) )
            v47 = (unsigned int)v12;
          KiSetSchedulerAssistPriority(v21, v47, 0LL);
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(p_DpcData) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), p_DpcData);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v48 = v23[6] - 1;
          v23[6] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
  }
  else
  {
    ++v9;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 && v24->NestingLevel <= 1u )
  {
    v49 = v25[6] - 1;
    v25[6] = v49;
    if ( !v49 )
      KiRemoveSystemWorkPriorityKick(v24);
  }
  return v9;
}
