/*
 * XREFs of KiRemoveBoostThread @ 0x1402677B0
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140261630 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeWakeWaitChain @ 0x140308D4C (KeWakeWaitChain.c)
 *     KiCompleteDirectSwitchThread @ 0x140331058 (KiCompleteDirectSwitchThread.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140334740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x140334C40 (KiChooseLowestRankedThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rdx
  __int64 p_AbPropagateBoostsList; // r8
  char v10; // cl
  char v11; // di
  unsigned int v12; // eax
  char v13; // bp
  char v14; // r14
  struct _KPRCB *v15; // r15
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r10d
  __int64 ready; // rax
  __int64 v20; // r15
  struct _KPRCB *v21; // rcx
  __int64 v22; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // r8
  bool v28; // zf
  char v29; // al
  __int64 v30; // rdx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  char v35; // cl
  __int64 v36; // r9
  char IsThreadRankNonZero; // al
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  _QWORD *v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  int v48; // edx
  int v49; // [rsp+78h] [rbp+10h] BYREF
  int v50; // [rsp+80h] [rbp+18h]
  int v51; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v38 = SchedulerAssist[6];
      SchedulerAssist[6] = v38 + 1;
      if ( v38 == -1 )
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
        v39 = v31[6] - 1;
        v31[6] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v49, a2, a3, a4);
    while ( *(_QWORD *)(a2 + 64) );
    v32 = CurrentPrcb->SchedulerAssist;
    if ( v32 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v32[6];
        v32[6] = v40 + 1;
        if ( v40 == -1 )
          goto LABEL_59;
      }
    }
  }
  v8 = *(unsigned __int8 *)(a2 + 564);
  p_AbPropagateBoostsList = *(unsigned __int8 *)(a2 + 195);
  v10 = v8 & 0xF;
  v11 = p_AbPropagateBoostsList - (v8 & 0xF);
  if ( (v8 & 0xF) == 0 )
    v11 = *(_BYTE *)(a2 + 195);
  LOBYTE(v8) = (unsigned __int8)v8 >> 4;
  if ( (_BYTE)v8 )
  {
    v12 = *(_DWORD *)(a2 + 856);
    v13 = p_AbPropagateBoostsList - v8;
    *(_BYTE *)(a2 + 564) = v10;
    v50 = 0;
    if ( v12 )
    {
      _BitScanReverse((unsigned int *)&v8, v12);
      if ( v13 < (int)v8 )
        v13 = v8;
      v50 = v8;
    }
    if ( v13 != (_BYTE)p_AbPropagateBoostsList )
    {
      v14 = 0;
      v15 = KeGetCurrentPrcb();
      v51 = 0;
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v41 = v16[6];
          v16[6] = v41 + 1;
          if ( v41 == -1 )
LABEL_68:
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v33 = v15->SchedulerAssist;
        if ( v33 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v42 = v33[6] - 1;
            v33[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v51, v8, p_AbPropagateBoostsList, a4);
        while ( *(_QWORD *)(a1 + 48) );
        v34 = v15->SchedulerAssist;
        if ( v34 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v43 = v34[6];
            v34[6] = v43 + 1;
            if ( v43 == -1 )
              goto LABEL_68;
          }
        }
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        if ( *(_BYTE *)(a2 + 195) != 31
          && ((v17 = *(_QWORD *)(a2 + 104), v18 = *(char *)(a2 + 195), !v17)
           || (v30 = *(unsigned int *)(a1 + 216) + v17) == 0
           || ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || a2 != *(_QWORD *)(a1 + 8)
             ? (LOBYTE(a4) = 1)
             : (LOBYTE(a4) = 0),
               !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v30, p_AbPropagateBoostsList, a4, 0LL))
            ? (ready = KiSelectReadyThread(v18 + 1, a1))
            : (ready = KiChooseLowestRankedThread(a1, a2, (unsigned int)(v18 + 1))),
              (v20 = ready) != 0) )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) == 0
            || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v35 = 1, !IsThreadRankNonZero) )
          {
            v35 = *(_BYTE *)(v20 + 195);
          }
          **(_BYTE **)(a1 + 56) = v35;
          v36 = *(_QWORD *)(a1 + 33976);
          if ( v36 )
          {
            v44 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v20 != *(_QWORD *)(a1 + 24) )
              v44 = (unsigned int)v35;
            KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v44, 0LL);
            v36 = *(_QWORD *)(a1 + 33976);
          }
          *(_QWORD *)(a1 + 16) = v20;
          if ( v36 )
            *(_BYTE *)(v36 + 16) = v20 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v20 + 388) == 1 )
            *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v20 + 388) = 3;
        }
        else
        {
          v14 = 1;
        }
      }
      v21 = KeGetCurrentPrcb();
      if ( v13 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v45 = (_QWORD *)(a2 + 808);
          if ( *(_QWORD *)(a2 + 808) == 1LL )
          {
            p_AbPropagateBoostsList = (__int64)&v21->AbPropagateBoostsList;
            if ( v21 != (struct _KPRCB *)-34680LL )
            {
              *v45 = *(_QWORD *)p_AbPropagateBoostsList;
              *(_QWORD *)p_AbPropagateBoostsList = v45;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
              KiAbQueueAutoBoostDpc(v21);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v13;
      if ( v14 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          v28 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
          v29 = 1;
          if ( v28 )
            v29 = *(_BYTE *)(a2 + 195);
          v13 = v29;
        }
        **(_BYTE **)(a1 + 56) = v13;
        v22 = *(_QWORD *)(a1 + 33976);
        if ( v22 )
        {
          v46 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( a2 != *(_QWORD *)(a1 + 24) )
            v46 = (unsigned int)v13;
          KiSetSchedulerAssistPriority(v22, v46, 0LL);
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v47 = v24[6] - 1;
          v24[6] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
  }
  else
  {
    ++v11;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 && v25->NestingLevel <= 1u )
  {
    v48 = v26[6] - 1;
    v26[6] = v48;
    if ( !v48 )
      KiRemoveSystemWorkPriorityKick(v25);
  }
  return v11;
}
