/*
 * XREFs of KiDetachProcess @ 0x14025E8F0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x14031CEB0 (KeDetachProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiMoveApcState @ 0x14025E210 (KiMoveApcState.c)
 *     KiSetAddressPolicy @ 0x14025ECC0 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F52E0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(__int64 *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r11
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v6; // r10
  char v7; // r12
  volatile signed __int32 *p_Lock; // r13
  int v10; // ebp
  __int64 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v13; // rcx
  $C774EFD68449142D8271B1EC1EB7FB26 *v14; // rdi
  $2D5B062263E2BEE97A34A67201DBDB9B *v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v17; // rdx
  _LIST_ENTRY *v18; // rax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 Process; // rdx
  unsigned __int64 v23; // r15
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 result; // rax
  char v28; // si
  unsigned __int8 v29; // bp
  unsigned __int32 v30; // eax
  unsigned __int32 v31; // ett
  signed __int64 *v32; // r13
  signed __int64 v33; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  unsigned __int8 v42; // di
  struct _KPRCB *v43; // r10
  int v44; // eax
  bool v45; // zf
  unsigned __int8 v46; // r10
  struct _KPRCB *v47; // rdi
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  _DWORD *v52; // rcx
  int v53; // eax
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  int v62; // [rsp+68h] [rbp+10h] BYREF
  int v63; // [rsp+70h] [rbp+18h] BYREF
  __int64 v64; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = 2LL;
  v7 = a2;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v10 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v4) = 15;
    v64 = v4;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v64 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v62 = 0;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v38 = v13[6];
        v13[6] = v38 + 1;
        if ( v38 == -1 )
LABEL_61:
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
        KeYieldProcessorEx(&v62, a2, a3, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
      v37 = CurrentPrcb->SchedulerAssist;
      if ( v37 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v37[6];
          v37[6] = v40 + 1;
          if ( v40 == -1 )
            goto LABEL_61;
        }
      }
    }
    LOBYTE(v4) = v64;
    v6 = 2LL;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)v4 )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        v42 = v64;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v43 = KeGetCurrentPrcb();
          v41 = -1LL << ((unsigned __int8)v64 + 1);
          SchedulerAssist = v43->SchedulerAssist;
          v44 = ~(unsigned __int16)v41;
          v45 = (v44 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v44 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
      else
      {
        v42 = v64;
      }
      __writecr8(v42);
      v46 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v41 = (-1LL << (v46 + 1)) & 4;
        a3 = (unsigned int)v41 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v64 = v46;
      v47 = KeGetCurrentPrcb();
      v63 = 0;
      v48 = v47->SchedulerAssist;
      if ( v48 )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v49 = v48[6];
          v48[6] = v49 + 1;
          if ( v49 == -1 )
LABEL_84:
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v50 = v47->SchedulerAssist;
        if ( v50 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v51 = v50[6] - 1;
            v50[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
        do
          KeYieldProcessorEx(&v63, v41, a3, (__int64)SchedulerAssist);
        while ( CurrentThread->ThreadLock );
        v52 = v47->SchedulerAssist;
        if ( v52 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v53 = v52[6];
            v52[6] = v53 + 1;
            if ( v53 == -1 )
              goto LABEL_84;
          }
        }
      }
      LOBYTE(v4) = v64;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v6 = 2LL;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v14 = &CurrentThread->152, ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != v14)
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
    if ( ($2D5B062263E2BEE97A34A67201DBDB9B *)v15->SavedApcState.ApcListHead[0].Flink == v15 )
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
        v54 = v20[6] - 1;
        v20[6] = v54;
        if ( !v54 )
        {
          KiRemoveSystemWorkPriorityKick(v19);
          LOBYTE(v4) = v64;
          v6 = 2LL;
        }
      }
    }
  }
  v21 = (unsigned __int64)KeGetCurrentPrcb();
  Process = (__int64)CurrentThread->ApcState.Process;
  v23 = *(unsigned __int8 *)(v21 + 209);
  v24 = 8LL * *(unsigned __int8 *)(v21 + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v24 + Process), v23);
  v25 = *(_QWORD *)(Process + 40);
  if ( KiKvaShadow )
  {
    v26 = *(_QWORD *)(Process + 40);
    if ( (v25 & 2) != 0 )
      v26 = v25 | 0x8000000000000000uLL;
    __writegsqword(0x9000u, v26);
    KiSetAddressPolicy(*(unsigned __int8 *)(Process + 912));
    LOBYTE(v4) = v64;
    v6 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(v25);
    LOBYTE(v4) = v64;
    v6 = 2LL;
  }
  else
  {
    __writecr3(v25);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v21 = __readcr4();
    if ( (v21 & 0x20080) != 0 )
    {
      result = v21 ^ 0x80;
      __writecr4(v21 ^ 0x80);
      __writecr4(v21);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v24), v23);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v10 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v21 = (unsigned int)(unsigned __int8)v4 + 1;
          Process = -1LL << ((unsigned __int8)v4 + 1);
          SchedulerAssist = v56->SchedulerAssist;
          v57 = ~(unsigned __int16)Process;
          v45 = (v57 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v57 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v45 )
          {
            KiRemoveSystemWorkPriorityKick(v56);
            LOBYTE(v4) = v64;
          }
          v6 = 2LL;
        }
      }
    }
    result = (unsigned __int8)v4;
    __writecr8((unsigned __int8)v4);
  }
  if ( (v7 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 210, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v28 = 0;
      v29 = KeGetCurrentIrql();
      __writecr8(v6);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1LL << (v29 + 1)) & 4;
        a3 = (unsigned int)Process | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      KiAcquireKobjectLockSafe(p_Lock, Process, a3, (__int64)SchedulerAssist);
      v30 = *((_DWORD *)p_Lock + 210);
      if ( (v30 & 7) == 0 )
      {
        v21 = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)v21 != v21 && v30 < 8 )
        {
          while ( 1 )
          {
            v21 = v30 & 0xFFFFFFF8 | 3;
            v31 = v30;
            v30 = _InterlockedCompareExchange(p_Lock + 210, v21, v30);
            if ( v31 == v30 )
              break;
            if ( v30 >= 8 )
              goto LABEL_41;
          }
          v28 = 1;
        }
      }
LABEL_41:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v28 )
      {
        v32 = (signed __int64 *)(p_Lock + 90);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v33 = KiProcessOutSwapListHead;
        do
        {
          *v32 = v33;
          v21 = v33;
          v33 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v32, v33);
        }
        while ( v33 != v21 );
        if ( !v33 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v58 = KeGetCurrentIrql();
          if ( v58 <= 0xFu && v29 <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v21 = (unsigned int)v29 + 1;
            v60 = v59->SchedulerAssist;
            v61 = ~(unsigned __int16)(-1LL << (v29 + 1));
            v45 = (v61 & v60[5]) == 0;
            v60[5] &= v61;
            if ( v45 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
      }
      result = v29;
      __writecr8(v29);
    }
  }
  if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != v14 )
  {
    LOBYTE(v21) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v21);
  }
  return result;
}
