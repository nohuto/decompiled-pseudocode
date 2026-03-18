/*
 * XREFs of KiDetachProcess @ 0x1402059D0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x14035AA90 (KeDetachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x1402052F0 (KiMoveApcState.c)
 *     KiSetAddressPolicy @ 0x140205DA0 (KiSetAddressPolicy.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F5930 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(__int64 *a1, __int64 a2)
{
  __int64 v2; // r11
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // r10
  char v5; // r12
  volatile signed __int32 *p_Lock; // r13
  int v8; // ebp
  __int64 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v11; // rcx
  $C774EFD68449142D8271B1EC1EB7FB26 *v12; // rdi
  $2D5B062263E2BEE97A34A67201DBDB9B *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v15; // rdx
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v21; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 result; // rax
  char v26; // si
  unsigned __int8 v27; // bp
  unsigned __int32 v28; // eax
  unsigned __int32 v29; // ett
  signed __int64 *v30; // r13
  signed __int64 v31; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v33; // rcx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
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
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  _DWORD *v60; // r9
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  int v65; // [rsp+68h] [rbp+10h] BYREF
  int v66; // [rsp+70h] [rbp+18h] BYREF
  __int64 v67; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 2LL;
  v5 = a2;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v2) = 15;
    v67 = v2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v67 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= a2;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v65 = 0;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v37 = v11[6];
        v11[6] = v37 + 1;
        if ( v37 == -1 )
LABEL_61:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v34 = CurrentPrcb->SchedulerAssist;
      if ( v34 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = v34[6] - 1;
          v34[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v65, a2);
      while ( CurrentThread->ThreadLock );
      v35 = CurrentPrcb->SchedulerAssist;
      if ( v35 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = v35[6];
          v35[6] = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_61;
        }
      }
    }
    LOBYTE(v2) = v67;
    v4 = 2LL;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)v2 )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        v41 = v67;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v42 = KeGetCurrentPrcb();
          v40 = -1LL << ((unsigned __int8)v67 + 1);
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)v40;
          v45 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      else
      {
        v41 = v67;
      }
      __writecr8(v41);
      v46 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 <= 0xFu )
      {
        v47 = KeGetCurrentPrcb()->SchedulerAssist;
        v40 = (-1LL << (v46 + 1)) & 4;
        v47[5] |= v40;
      }
      v67 = v46;
      v48 = KeGetCurrentPrcb();
      v66 = 0;
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
          KeYieldProcessorEx(&v66, v40);
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
      LOBYTE(v2) = v67;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v4 = 2LL;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v12 = &CurrentThread->152, ($C774EFD68449142D8271B1EC1EB7FB26 *)v12->ApcState.ApcListHead[0].Flink != v12)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v13 = &CurrentThread->600;
  if ( a1 == (__int64 *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v13->SavedApcState.ApcListHead[0].Flink;
    if ( ($2D5B062263E2BEE97A34A67201DBDB9B *)v13->SavedApcState.ApcListHead[0].Flink == v13 )
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
      v33 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v33;
      v15->Header.WaitListHead.Flink = v16;
      v33->Flink = v16;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, (__int64)&CurrentThread->152);
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
          LOBYTE(v2) = v67;
          v4 = 2LL;
        }
      }
    }
  }
  v19 = (unsigned __int64)KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  v21 = *(unsigned __int8 *)(v19 + 209);
  v22 = 8LL * *(unsigned __int8 *)(v19 + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), v21);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v24 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v24 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x9000u, v24);
    KiSetAddressPolicy(Process->AddressPolicy);
    LOBYTE(v2) = v67;
    v4 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
    LOBYTE(v2) = v67;
    v4 = 2LL;
  }
  else
  {
    __writecr3(DirectoryTableBase);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v19 = __readcr4();
    if ( (v19 & 0x20080) != 0 )
    {
      result = v19 ^ 0x80;
      __writecr4(v19 ^ 0x80);
      __writecr4(v19);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v22), v21);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v8 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v19 = (unsigned int)(unsigned __int8)v2 + 1;
          v58 = v57->SchedulerAssist;
          v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v45 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v45 )
          {
            KiRemoveSystemWorkPriorityKick(v57);
            LOBYTE(v2) = v67;
          }
          v4 = 2LL;
        }
      }
    }
    result = (unsigned __int8)v2;
    __writecr8((unsigned __int8)v2);
  }
  if ( (v5 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 210, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v26 = 0;
      v27 = KeGetCurrentIrql();
      __writecr8(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v60 = KeGetCurrentPrcb()->SchedulerAssist;
        v60[5] |= (-1 << (v27 + 1)) & 4;
      }
      KiAcquireKobjectLockSafe(p_Lock);
      v28 = *((_DWORD *)p_Lock + 210);
      if ( (v28 & 7) == 0 )
      {
        v19 = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)v19 != v19 && v28 < 8 )
        {
          while ( 1 )
          {
            v19 = v28 & 0xFFFFFFF8 | 3;
            v29 = v28;
            v28 = _InterlockedCompareExchange(p_Lock + 210, v19, v28);
            if ( v29 == v28 )
              break;
            if ( v28 >= 8 )
              goto LABEL_41;
          }
          v26 = 1;
        }
      }
LABEL_41:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v26 )
      {
        v30 = (signed __int64 *)(p_Lock + 90);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v31 = KiProcessOutSwapListHead;
        do
        {
          *v30 = v31;
          v19 = v31;
          v31 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v30, v31);
        }
        while ( v31 != v19 );
        if ( !v31 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v61 = KeGetCurrentIrql();
          if ( v61 <= 0xFu && v27 <= 0xFu && v61 >= 2u )
          {
            v62 = KeGetCurrentPrcb();
            v19 = (unsigned int)v27 + 1;
            v63 = v62->SchedulerAssist;
            v64 = ~(unsigned __int16)(-1LL << (v27 + 1));
            v45 = (v64 & v63[5]) == 0;
            v63[5] &= v64;
            if ( v45 )
              KiRemoveSystemWorkPriorityKick(v62);
          }
        }
      }
      result = v27;
      __writecr8(v27);
    }
  }
  if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v12->ApcState.ApcListHead[0].Flink != v12 )
  {
    LOBYTE(v19) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v19);
  }
  return result;
}
