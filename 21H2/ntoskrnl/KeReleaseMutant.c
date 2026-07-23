/*
 * XREFs of KeReleaseMutant @ 0x14034D200
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140226CD4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140227884 (LdrpGetFromMUIMemCache.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140334F80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EFAC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F8C0 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564BB0 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x1405DE750 (NtReleaseMutant.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140228354 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KeAbPreWakeupThread @ 0x1402FC690 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  int v4; // edi
  _KTHREAD *CurrentThread; // rcx
  int v8; // r15d
  _KTHREAD *OwnerThread; // rbp
  char v10; // r13
  __int64 CurrentIrql; // r10
  __int64 v12; // r8
  __int64 v13; // r11
  struct _KPRCB *CurrentPrcb; // rsi
  int SignalState; // r14d
  LONG v16; // eax
  LONG LockNV; // eax
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KMUTANT *v24; // r15
  ULONG_PTR v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KMUTANT *v30; // rax
  struct _KMUTANT *v31; // rdx
  struct _LIST_ENTRY *v32; // rcx
  char v33; // al
  bool v34; // zf
  char v35; // di
  NTSTATUS v36; // ecx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned __int8 v43; // cl
  _DWORD *v44; // r9
  __int64 v45; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r9
  _QWORD *v50; // r10
  __int64 v51; // rcx
  char v52; // al
  int v53; // r9d
  struct _KMUTANT *v54; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *SchedulerAssist; // r8
  int v60; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-B8h]
  __int64 v62; // [rsp+38h] [rbp-B0h]
  struct _KPRCB *v63; // [rsp+40h] [rbp-A8h]
  int v64; // [rsp+48h] [rbp-A0h] BYREF
  struct _KMUTANT *v65; // [rsp+50h] [rbp-98h]
  __int64 v66; // [rsp+58h] [rbp-90h]
  _QWORD *v67; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v68; // [rsp+68h] [rbp-80h]
  struct _SINGLE_LIST_ENTRY *v69; // [rsp+70h] [rbp-78h] BYREF
  __int64 v70; // [rsp+78h] [rbp-70h]
  __int128 v71; // [rsp+80h] [rbp-68h]
  __int64 v72; // [rsp+90h] [rbp-58h]
  int v73; // [rsp+F0h] [rbp+8h] BYREF
  KPRIORITY v74; // [rsp+F8h] [rbp+10h]
  int ApcDisable; // [rsp+100h] [rbp+18h]
  BOOLEAN v76; // [rsp+108h] [rbp+20h]

  v76 = Wait;
  v74 = Increment;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  v8 = 0;
  OwnerThread = 0LL;
  v69 = 0LL;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v66 = CurrentIrql;
  v12 = 2LL;
  __writecr8(2uLL);
  v13 = (unsigned __int8)v69 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (v13 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    v12 = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v73 = 0;
  v63 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v73, *(__int64 *)&Increment, v12, Wait);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
    v13 = -1LL;
    LOBYTE(CurrentIrql) = v66;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->MutantFlags |= 1u;
    v16 = 1;
    Mutant->Header.SignalState = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      v35 = Mutant->MutantFlags & 1;
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            SchedulerAssist = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(v13 << ((unsigned __int8)CurrentIrql + 1));
            v34 = (v60 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v60;
            if ( v34 )
            {
              KiRemoveSystemWorkPriorityKick(v58);
              LOBYTE(CurrentIrql) = v66;
            }
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v35 )
        v36 = 128;
      else
        v36 = -1073741754;
      RtlRaiseStatus(v36);
    }
    v16 = ++Mutant->Header.SignalState;
  }
  if ( v16 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    v25 = BugCheckParameter1;
    goto LABEL_21;
  }
  v72 = 0LL;
  LockNV = Mutant->Header.LockNV;
  v71 = 0LL;
  LODWORD(v71) = LockNV;
  BYTE2(v71) = 0;
  Mutant->Header.LockNV = v71;
  v18 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v19 = v18->SchedulerAssist;
  v64 = 0;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v39 = v19[6];
      v19[6] = v39 + 1;
      if ( v39 == -1 )
LABEL_56:
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v37 = v18->SchedulerAssist;
    if ( v37 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v40 = v37[6] - 1;
        v37[6] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    do
      KeYieldProcessorEx(&v64, *(__int64 *)&Increment, v12, Wait);
    while ( OwnerThread->ThreadLock );
    v38 = v18->SchedulerAssist;
    if ( v38 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v41 = v38[6];
        v38[6] = v41 + 1;
        if ( v41 == -1 )
          goto LABEL_56;
      }
    }
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
LABEL_29:
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  OwnerThread->ThreadLock = 0LL;
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v42 = v23[6] - 1;
      v23[6] = v42;
      if ( !v42 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  v24 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v24 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v30 = *(struct _KMUTANT **)&v24->Header.Lock;
      v31 = v24;
      v65 = v24;
      v24 = v30;
      v32 = v65->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v30->Header.WaitListHead.Flink != v65 || (struct _KMUTANT *)v32->Flink != v31 )
        goto LABEL_29;
      v32->Flink = (struct _LIST_ENTRY *)v30;
      v30->Header.WaitListHead.Flink = v32;
      v33 = (char)v31->Header.WaitListHead.Blink;
      if ( v33 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v63, v31, WORD1(v31->Header.WaitListHead.Blink), &v69) )
      {
        v34 = Mutant->Header.SignalState-- == 1;
        if ( v34 )
          goto LABEL_15;
      }
LABEL_48:
      if ( v24 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_15;
    }
    if ( v33 != 2 )
    {
      KiTryUnwaitThread(v63, v31, 256LL, 0LL);
      goto LABEL_48;
    }
    BYTE1(v31->Header.WaitListHead.Blink) = 5;
    v62 = (__int64)v31->MutantListEntry.Flink;
    v67 = (_QWORD *)(v62 + 8);
    *(_QWORD *)&v31->Header.Lock = 0LL;
    v43 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 <= 0xFu )
    {
      v44 = KeGetCurrentPrcb()->SchedulerAssist;
      v12 = (unsigned int)(-1LL << (v43 + 1)) & 4 | v44[5];
      v31 = v65;
      v44[5] = v12;
    }
    v68 = KeGetCurrentPrcb();
    v45 = (__int64)v68->CurrentThread;
    v70 = v45;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v45);
      EtwTraceEnqueueWork(v48, v47, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v62, (__int64)v31, v12, v45);
    v50 = v67;
    v51 = v62;
    if ( (_QWORD *)*v50 != v50
      && *(_DWORD *)(v62 + 40) < *(_DWORD *)(v62 + 44)
      && (*(_QWORD *)(v70 + 232) != v62 || *(_BYTE *)(v70 + 643) != 15) )
    {
      v52 = KiWakeQueueWaiter((__int64)v68, v62, (__int64)v65, v49);
      v51 = v62;
      if ( v52 )
        goto LABEL_82;
      v50 = v67;
    }
    v53 = *(_DWORD *)(v51 + 4);
    *(_DWORD *)(v51 + 4) = v53 + 1;
    v12 = *(_QWORD *)(v51 + 32);
    if ( *(_QWORD *)v12 != v51 + 24 )
      goto LABEL_29;
    v54 = v65;
    *(_QWORD *)&v65->Header.Lock = v51 + 24;
    v54->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
    *(_QWORD *)v12 = v54;
    *(_QWORD *)(v51 + 32) = v54;
    if ( !v53 && (_QWORD *)*v50 != v50 )
    {
      KiWakeOtherQueueWaiters((__int64)v68, v51);
      v51 = v62;
    }
LABEL_82:
    _InterlockedAnd((volatile signed __int32 *)v51, 0xFFFFFF7F);
    v34 = Mutant->Header.SignalState-- == 1;
    if ( v34 )
      goto LABEL_15;
    goto LABEL_48;
  }
LABEL_15:
  if ( (Mutant->MutantFlags & 2) != 0 )
    v10 = 1;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive((unsigned __int64)Mutant);
  LODWORD(CurrentPrcb) = (_DWORD)v63;
  v25 = BugCheckParameter1;
  if ( v10 )
  {
    if ( v69 )
    {
      Next = v63->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( v69 == &Next[-27] )
          KeAbPreWakeupThread((__int64)v69, (__int64)Mutant, *(char *)(BugCheckParameter1 + 195));
      }
    }
  }
  v8 = ApcDisable;
LABEL_21:
  if ( v76 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, v74, v66);
  if ( v10 )
  {
    if ( OwnerThread != (_KTHREAD *)v25 )
    {
      SessionId = MmGetSessionIdEx(*(_QWORD *)(v25 + 184));
      KeBugCheckEx(0x162u, v25, (ULONG_PTR)Mutant, SessionId, 1uLL);
    }
    KeAbPostRelease((ULONG_PTR)Mutant);
  }
  if ( v8 )
    KeLeaveCriticalRegionThread(v25, v26, v27, v28);
  return SignalState;
}
