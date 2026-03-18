/*
 * XREFs of KiRemoveBoostThread @ 0x14020E760
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     KiCompleteDirectSwitchThread @ 0x1402EBF18 (KiCompleteDirectSwitchThread.c)
 *     KeWakeWaitChain @ 0x140346B4C (KeWakeWaitChain.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14020D530 (KiSelectReadyThread.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402EF600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x1402EFB00 (KiChooseLowestRankedThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v6; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char v8; // cl
  char v9; // di
  unsigned int v10; // eax
  char v11; // bp
  char v12; // r14
  struct _KPRCB *v13; // r15
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // r10d
  __int64 ready; // rax
  __int64 v18; // r15
  struct _KPRCB *v19; // rcx
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // r8
  bool v26; // zf
  char v27; // al
  __int64 v28; // rdx
  char v29; // r9
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  char v34; // cl
  __int64 v35; // r9
  char IsThreadRankNonZero; // al
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  struct _SINGLE_LIST_ENTRY *v44; // rdx
  __int64 v45; // rdx
  int v46; // eax
  int v47; // edx
  int v48; // [rsp+78h] [rbp+10h] BYREF
  int v49; // [rsp+80h] [rbp+18h]
  int v50; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v48 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v37 = SchedulerAssist[6];
      SchedulerAssist[6] = v37 + 1;
      if ( v37 == -1 )
LABEL_59:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v30 = CurrentPrcb->SchedulerAssist;
    if ( v30 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v38 = v30[6] - 1;
        v30[6] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v48, a2);
    while ( *(_QWORD *)(a2 + 64) );
    v31 = CurrentPrcb->SchedulerAssist;
    if ( v31 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v39 = v31[6];
        v31[6] = v39 + 1;
        if ( v39 == -1 )
          goto LABEL_59;
      }
    }
  }
  v6 = *(unsigned __int8 *)(a2 + 564);
  p_AbPropagateBoostsList = (_SINGLE_LIST_ENTRY *)*(unsigned __int8 *)(a2 + 195);
  v8 = v6 & 0xF;
  v9 = (_BYTE)p_AbPropagateBoostsList - (v6 & 0xF);
  if ( (v6 & 0xF) == 0 )
    v9 = *(_BYTE *)(a2 + 195);
  LOBYTE(v6) = (unsigned __int8)v6 >> 4;
  if ( (_BYTE)v6 )
  {
    v10 = *(_DWORD *)(a2 + 856);
    v11 = (_BYTE)p_AbPropagateBoostsList - v6;
    *(_BYTE *)(a2 + 564) = v8;
    v49 = 0;
    if ( v10 )
    {
      _BitScanReverse((unsigned int *)&v6, v10);
      if ( v11 < (int)v6 )
        v11 = v6;
      v49 = v6;
    }
    if ( v11 != (_BYTE)p_AbPropagateBoostsList )
    {
      v12 = 0;
      v13 = KeGetCurrentPrcb();
      v50 = 0;
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v40 = v14[6];
          v14[6] = v40 + 1;
          if ( v40 == -1 )
LABEL_68:
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v32 = v13->SchedulerAssist;
        if ( v32 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v41 = v32[6] - 1;
            v32[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        do
          KeYieldProcessorEx(&v50, v6);
        while ( *(_QWORD *)(a1 + 48) );
        v33 = v13->SchedulerAssist;
        if ( v33 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v42 = v33[6];
            v33[6] = v42 + 1;
            if ( v42 == -1 )
              goto LABEL_68;
          }
        }
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        if ( *(_BYTE *)(a2 + 195) != 31
          && ((v15 = *(_QWORD *)(a2 + 104), v16 = *(char *)(a2 + 195), !v15)
           || (v28 = *(unsigned int *)(a1 + 216) + v15) == 0
           || ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || a2 != *(_QWORD *)(a1 + 8) ? (v29 = 1) : (v29 = 0),
               !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v28, (_DWORD)p_AbPropagateBoostsList, v29, 0LL))
            ? (ready = KiSelectReadyThread(v16 + 1, a1))
            : (ready = KiChooseLowestRankedThread(a1, a2, (unsigned int)(v16 + 1))),
              (v18 = ready) != 0) )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) == 0
            || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v34 = 1, !IsThreadRankNonZero) )
          {
            v34 = *(_BYTE *)(v18 + 195);
          }
          **(_BYTE **)(a1 + 56) = v34;
          v35 = *(_QWORD *)(a1 + 33976);
          if ( v35 )
          {
            v43 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v18 != *(_QWORD *)(a1 + 24) )
              v43 = (unsigned int)v34;
            KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v43, 0LL);
            v35 = *(_QWORD *)(a1 + 33976);
          }
          *(_QWORD *)(a1 + 16) = v18;
          if ( v35 )
            *(_BYTE *)(v35 + 16) = v18 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v18 + 388) == 1 )
            *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v18 + 388) = 3;
        }
        else
        {
          v12 = 1;
        }
      }
      v19 = KeGetCurrentPrcb();
      if ( v11 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v44 = (struct _SINGLE_LIST_ENTRY *)(a2 + 808);
          if ( *(_QWORD *)(a2 + 808) == 1LL )
          {
            p_AbPropagateBoostsList = &v19->AbPropagateBoostsList;
            if ( v19 != (struct _KPRCB *)-34680LL )
            {
              v44->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v44;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
              KiAbQueueAutoBoostDpc(v19);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v11;
      if ( v12 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          v26 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
          v27 = 1;
          if ( v26 )
            v27 = *(_BYTE *)(a2 + 195);
          v11 = v27;
        }
        **(_BYTE **)(a1 + 56) = v11;
        v20 = *(_QWORD *)(a1 + 33976);
        if ( v20 )
        {
          v45 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( a2 != *(_QWORD *)(a1 + 24) )
            v45 = (unsigned int)v11;
          KiSetSchedulerAssistPriority(v20, v45, 0LL);
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v46 = v22[6] - 1;
          v22[6] = v46;
          if ( !v46 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
  }
  else
  {
    ++v9;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v23 = KeGetCurrentPrcb();
  v24 = v23->SchedulerAssist;
  if ( v24 && v23->NestingLevel <= 1u )
  {
    v47 = v24[6] - 1;
    v24[6] = v47;
    if ( !v47 )
      KiRemoveSystemWorkPriorityKick(v23);
  }
  return v9;
}
