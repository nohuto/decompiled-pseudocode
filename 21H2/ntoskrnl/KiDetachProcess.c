/*
 * XREFs of KiDetachProcess @ 0x1402ABF00
 * Callers:
 *     KeDetachProcess @ 0x14024B110 (KeDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSetAddressPolicy @ 0x1402AC2D0 (KiSetAddressPolicy.c)
 *     KiMoveApcState @ 0x1402AC300 (KiMoveApcState.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(struct _KTHREAD *a1, char a2)
{
  __int64 v2; // r11
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // r10
  _KPROCESS *Process; // r13
  int v8; // ebp
  __int64 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v11; // rcx
  $C459BD0D405E8E46662177FB3D0A143F *v12; // rdi
  $B1BEF1DC70D0553D212470EE5F0BB1FC *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v15; // rdx
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _KPROCESS *v20; // rdx
  unsigned __int64 GroupIndex; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 result; // rax
  char v26; // si
  unsigned __int8 v27; // bp
  unsigned __int32 Value; // eax
  unsigned __int32 v29; // ett
  signed __int64 *p_SwapListEntry; // r13
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v34; // rcx
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // di
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  bool v45; // zf
  unsigned __int8 v46; // r10
  _DWORD *v47; // r9
  struct _KPRCB *v48; // rdi
  _DWORD *v49; // rcx
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  int v54; // eax
  int v55; // eax
  unsigned __int64 v56; // rcx
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  _DWORD *v61; // r9
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  _DWORD *v64; // r8
  int v65; // eax
  int v66; // [rsp+68h] [rbp+10h] BYREF
  int v67; // [rsp+70h] [rbp+18h] BYREF
  __int64 v68; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 2LL;
  Process = CurrentThread->ApcState.Process;
  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v2) = 15;
    v68 = v2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v68 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v66 = 0;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v38 = v11[6];
        v11[6] = v38 + 1;
        if ( v38 == -1 )
LABEL_61:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v35 = CurrentPrcb->SchedulerAssist;
      if ( v35 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = v35[6] - 1;
          v35[6] = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v66);
      while ( CurrentThread->ThreadLock );
      v36 = CurrentPrcb->SchedulerAssist;
      if ( v36 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v36[6];
          v36[6] = v40 + 1;
          if ( v40 == -1 )
            goto LABEL_61;
        }
      }
    }
    LOBYTE(v2) = v68;
    v4 = 2LL;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)v2 )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        v41 = v68;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v68 + 1));
          v45 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      else
      {
        v41 = v68;
      }
      __writecr8(v41);
      v46 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 <= 0xFu )
      {
        v47 = KeGetCurrentPrcb()->SchedulerAssist;
        v47[5] |= (-1 << (v46 + 1)) & 4;
      }
      v68 = v46;
      v48 = KeGetCurrentPrcb();
      v67 = 0;
      v49 = v48->SchedulerAssist;
      if ( v49 )
      {
        if ( v48->NestingLevel <= 1u )
        {
          v50 = v49[6];
          v49[6] = v50 + 1;
          if ( v50 == -1 )
LABEL_84:
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v51 = v48->SchedulerAssist;
        if ( v51 )
        {
          if ( v48->NestingLevel <= 1u )
          {
            v52 = v51[6] - 1;
            v51[6] = v52;
            if ( !v52 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
        do
          KeYieldProcessorEx(&v67);
        while ( CurrentThread->ThreadLock );
        v53 = v48->SchedulerAssist;
        if ( v53 )
        {
          if ( v48->NestingLevel <= 1u )
          {
            v54 = v53[6];
            v53[6] = v54 + 1;
            if ( v54 == -1 )
              goto LABEL_84;
          }
        }
      }
      LOBYTE(v2) = v68;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v4 = 2LL;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v12 = &CurrentThread->152, ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v13 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v13->SavedApcState.ApcListHead[0].Flink;
    if ( ($B1BEF1DC70D0553D212470EE5F0BB1FC *)v13->SavedApcState.ApcListHead[0].Flink == v13 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v12->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v12;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
    }
    v15 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v16 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v15 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v16->Flink = v16;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v34 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v34;
      v15->Header.WaitListHead.Flink = v16;
      v34->Flink = v16;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, &CurrentThread->152);
  }
  if ( !v8 )
  {
    CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v55 = v18[6] - 1;
        v18[6] = v55;
        if ( !v55 )
        {
          KiRemoveSystemWorkPriorityKick(v17);
          LOBYTE(v2) = v68;
          v4 = 2LL;
        }
      }
    }
  }
  v19 = KeGetCurrentPrcb();
  v20 = CurrentThread->ApcState.Process;
  GroupIndex = v19->GroupIndex;
  v22 = 8LL * v19->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&v20->Header.Lock + v22), GroupIndex);
  DirectoryTableBase = v20->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v24 = v20->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v24 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x9000u, v24);
    KiSetAddressPolicy(v20->AddressPolicy);
    LOBYTE(v2) = v68;
    v4 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
    LOBYTE(v2) = v68;
    v4 = 2LL;
  }
  else
  {
    __writecr3(DirectoryTableBase);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v56 = __readcr4();
    if ( (v56 & 0x20080) != 0 )
    {
      result = v56 ^ 0x80;
      __writecr4(v56 ^ 0x80);
      __writecr4(v56);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v8 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v45 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v45 )
          {
            KiRemoveSystemWorkPriorityKick(v58);
            LOBYTE(v2) = v68;
          }
          v4 = 2LL;
        }
      }
    }
    result = (unsigned __int8)v2;
    __writecr8((unsigned __int8)v2);
  }
  if ( (a2 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v26 = 0;
      v27 = KeGetCurrentIrql();
      __writecr8(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v61 = KeGetCurrentPrcb()->SchedulerAssist;
        v61[5] |= (-1 << (v27 + 1)) & 4;
      }
      KiAcquireKobjectLockSafe(Process);
      Value = Process->StackCount.Value;
      if ( (Value & 7) == 0 && Process->ThreadListHead.Flink != &Process->ThreadListHead && Value < 8 )
      {
        while ( 1 )
        {
          v29 = Value;
          Value = _InterlockedCompareExchange(&Process->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
          if ( v29 == Value )
            break;
          if ( Value >= 8 )
            goto LABEL_41;
        }
        v26 = 1;
      }
LABEL_41:
      _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
      if ( v26 )
      {
        p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
        _m_prefetchw(&KiProcessOutSwapListHead);
        v31 = KiProcessOutSwapListHead;
        do
        {
          *p_SwapListEntry = v31;
          v32 = v31;
          v31 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v31);
        }
        while ( v31 != v32 );
        if ( !v31 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v62 = KeGetCurrentIrql();
          if ( v62 <= 0xFu && v27 <= 0xFu && v62 >= 2u )
          {
            v63 = KeGetCurrentPrcb();
            v64 = v63->SchedulerAssist;
            v65 = ~(unsigned __int16)(-1LL << (v27 + 1));
            v45 = (v65 & v64[5]) == 0;
            v64[5] &= v65;
            if ( v45 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
      }
      result = v27;
      __writecr8(v27);
    }
  }
  if ( ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12 )
  {
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(1);
  }
  return result;
}
