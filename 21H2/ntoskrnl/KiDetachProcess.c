/*
 * XREFs of KiDetachProcess @ 0x1403470F0
 * Callers:
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x140259B00 (KeDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiMoveApcState @ 0x1402D0C60 (KiMoveApcState.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x140347550 (KiSetAddressPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14054CAE0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(__int64 *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r10
  char v6; // r12
  _KPROCESS *Process; // r13
  __int64 v9; // r11
  int v10; // ebp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v13; // rcx
  $CEA84C04E3712D858E5667A507841A2A *v14; // rdi
  $A86797CF303B55BC33C4C82ECEB93C70 *v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v17; // rdx
  _LIST_ENTRY *v18; // rax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 GroupIndex; // r15
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v28; // si
  unsigned __int32 Value; // eax
  unsigned __int32 v30; // ett
  signed __int64 *p_SwapListEntry; // r13
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  struct _KPRCB *v42; // r10
  bool v43; // zf
  unsigned __int8 v44; // r10
  struct _KPRCB *v45; // rdi
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  int v52; // eax
  unsigned __int64 v53; // rcx
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  unsigned __int8 v61; // [rsp+20h] [rbp-48h]
  char v62; // [rsp+78h] [rbp+10h]
  int v63; // [rsp+80h] [rbp+18h] BYREF
  int v64; // [rsp+88h] [rbp+20h] BYREF

  v62 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 2LL;
  v6 = a2;
  Process = CurrentThread->ApcState.Process;
  v9 = -1LL;
  v10 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    CurrentIrql = 15;
    v61 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v61 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v63 = 0;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v38 = v13[6];
        v13[6] = v38 + 1;
        if ( v38 == -1 )
LABEL_62:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v36 = CurrentPrcb->SchedulerAssist;
      if ( v36 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = v36[6] - 1;
          v36[6] = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v63, a2, a3, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
      v37 = CurrentPrcb->SchedulerAssist;
      if ( v37 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v37[6];
          v37[6] = v40 + 1;
          if ( v40 == -1 )
            goto LABEL_62;
        }
      }
    }
    v9 = -1LL;
    v5 = 2LL;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || CurrentIrql )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v42 = KeGetCurrentPrcb();
          v41 = -2LL;
          SchedulerAssist = v42->SchedulerAssist;
          v43 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
          a3 = SchedulerAssist[5] & 0xFFFF0001;
          SchedulerAssist[5] = a3;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(0LL);
      v44 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v41 = (-1LL << (v44 + 1)) & 4;
        a3 = (unsigned int)v41 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v45 = KeGetCurrentPrcb();
      CurrentIrql = v44;
      v64 = 0;
      v46 = v45->SchedulerAssist;
      if ( v46 )
      {
        if ( v45->NestingLevel <= 1u )
        {
          v47 = v46[6];
          v46[6] = v47 + 1;
          if ( v47 == -1 )
LABEL_83:
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v48 = v45->SchedulerAssist;
        if ( v48 )
        {
          if ( v45->NestingLevel <= 1u )
          {
            v49 = v48[6] - 1;
            v48[6] = v49;
            if ( !v49 )
              KiRemoveSystemWorkPriorityKick(v45);
          }
        }
        do
          KeYieldProcessorEx(&v64, v41, a3, (__int64)SchedulerAssist);
        while ( CurrentThread->ThreadLock );
        v50 = v45->SchedulerAssist;
        if ( v50 )
        {
          if ( v45->NestingLevel <= 1u )
          {
            v51 = v50[6];
            v50[6] = v51 + 1;
            if ( v51 == -1 )
              goto LABEL_83;
          }
        }
      }
      v9 = -1LL;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v6 = v62;
    v5 = 2LL;
    v61 = CurrentIrql;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v14 = &CurrentThread->152, ($CEA84C04E3712D858E5667A507841A2A *)v14->ApcState.ApcListHead[0].Flink != v14)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v15 = &CurrentThread->600;
  if ( a1 == (__int64 *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v15->SavedApcState.ApcListHead[0].Flink;
    if ( ($A86797CF303B55BC33C4C82ECEB93C70 *)v15->SavedApcState.ApcListHead[0].Flink == v15 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v14->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v14;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v14->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v14;
      Blink->Flink = (struct _LIST_ENTRY *)v14;
    }
    v17 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v18 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v17 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v18->Flink = v18;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v35 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v18->Flink = (struct _LIST_ENTRY *)v17;
      CurrentThread->ApcState.ApcListHead[1].Blink = v35;
      v17->Header.WaitListHead.Flink = v18;
      v35->Flink = v18;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, (__int64)&CurrentThread->152);
  }
  if ( !v10 )
  {
    CurrentThread->ThreadLock = 0LL;
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v52 = v20[6] - 1;
        v20[6] = v52;
        if ( !v52 )
        {
          KiRemoveSystemWorkPriorityKick(v19);
          v9 = -1LL;
          v5 = 2LL;
        }
      }
    }
  }
  v21 = KeGetCurrentPrcb();
  v22 = (__int64)CurrentThread->ApcState.Process;
  GroupIndex = v21->GroupIndex;
  v24 = 8LL * v21->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v24 + v22), GroupIndex);
  v25 = *(_QWORD *)(v22 + 40);
  if ( KiKvaShadow )
  {
    v26 = *(_QWORD *)(v22 + 40);
    if ( (v25 & 2) != 0 )
      v26 = v25 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v26);
    KiSetAddressPolicy(*(unsigned __int8 *)(v22 + 912));
    v9 = -1LL;
    v5 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(v25);
    v9 = -1LL;
    v5 = 2LL;
  }
  else
  {
    __writecr3(v25);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v53 = __readcr4();
    if ( (v53 & 0x20080) != 0 )
    {
      result = v53 ^ 0x80;
      __writecr4(v53 ^ 0x80);
      __writecr4(v53);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v24), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v10 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v54 = KeGetCurrentIrql();
        if ( v54 <= 0xFu && v61 <= 0xFu && v54 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v22 = v9 << (v61 + 1);
          SchedulerAssist = v55->SchedulerAssist;
          v56 = ~(unsigned __int16)v22;
          v43 = (v56 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v56 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v43 )
          {
            KiRemoveSystemWorkPriorityKick(v55);
            v9 = -1LL;
          }
          v5 = 2LL;
        }
      }
    }
    result = v61;
    __writecr8(v61);
  }
  if ( (v6 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v28 = KeGetCurrentIrql();
      __writecr8(v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v22 = (v9 << (v28 + 1)) & 4;
        a3 = (unsigned int)v22 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      KiAcquireKobjectLockSafe(&Process->Header.Lock, v22, a3, (__int64)SchedulerAssist);
      Value = Process->StackCount.Value;
      if ( (Value & 7) != 0 || Process->ThreadListHead.Flink == &Process->ThreadListHead || Value >= 8 )
      {
LABEL_58:
        _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
      }
      else
      {
        while ( 1 )
        {
          v30 = Value;
          Value = _InterlockedCompareExchange(&Process->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
          if ( v30 == Value )
            break;
          if ( Value >= 8 )
            goto LABEL_58;
        }
        _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
        p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
        _m_prefetchw(&KiProcessOutSwapListHead);
        v32 = KiProcessOutSwapListHead;
        do
        {
          *p_SwapListEntry = v32;
          v33 = v32;
          v32 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v32);
        }
        while ( v32 != v33 );
        if ( !v32 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && v28 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << (v28 + 1));
            v43 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v43 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      result = v28;
      __writecr8(v28);
    }
  }
  if ( ($CEA84C04E3712D858E5667A507841A2A *)v14->ApcState.ApcListHead[0].Flink != v14 )
  {
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(1);
  }
  return result;
}
