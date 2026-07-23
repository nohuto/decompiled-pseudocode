/*
 * XREFs of KeReleaseMutant @ 0x140249450
 * Callers:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     LdrpGetFromMUIMemCache @ 0x14033A4C0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14033B550 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403546E0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037C27C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037CD40 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055EE80 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x1405FB060 (NtReleaseMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1402FBE64 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeAbPreWakeupThread @ 0x14035AA50 (KeAbPreWakeupThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
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
  _QWORD *v49; // r10
  __int64 v50; // rcx
  char v51; // al
  __int64 v52; // r9
  struct _KMUTANT *v53; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *SchedulerAssist; // r8
  int v59; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-B8h]
  __int64 v61; // [rsp+38h] [rbp-B0h]
  struct _KPRCB *v62; // [rsp+40h] [rbp-A8h]
  int v63; // [rsp+48h] [rbp-A0h] BYREF
  struct _KMUTANT *v64; // [rsp+50h] [rbp-98h]
  __int64 v65; // [rsp+58h] [rbp-90h]
  _QWORD *v66; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v67; // [rsp+68h] [rbp-80h]
  struct _SINGLE_LIST_ENTRY *v68; // [rsp+70h] [rbp-78h] BYREF
  __int64 v69; // [rsp+78h] [rbp-70h]
  __int128 v70; // [rsp+80h] [rbp-68h]
  __int64 v71; // [rsp+90h] [rbp-58h]
  int v72; // [rsp+F0h] [rbp+8h] BYREF
  KPRIORITY v73; // [rsp+F8h] [rbp+10h]
  int ApcDisable; // [rsp+100h] [rbp+18h]
  BOOLEAN v75; // [rsp+108h] [rbp+20h]

  v75 = Wait;
  v73 = Increment;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  v8 = 0;
  OwnerThread = 0LL;
  v68 = 0LL;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v65 = CurrentIrql;
  v12 = 2LL;
  __writecr8(2uLL);
  v13 = (unsigned __int8)v68 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (v13 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    v12 = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v72 = 0;
  v62 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v72, *(__int64 *)&Increment, v12, Wait);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
    v13 = -1LL;
    LOBYTE(CurrentIrql) = v65;
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
          v56 = KeGetCurrentIrql();
          if ( v56 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v56 >= 2u )
          {
            v57 = KeGetCurrentPrcb();
            SchedulerAssist = v57->SchedulerAssist;
            v59 = ~(unsigned __int16)(v13 << ((unsigned __int8)CurrentIrql + 1));
            v34 = (v59 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v59;
            if ( v34 )
            {
              KiRemoveSystemWorkPriorityKick(v57);
              LOBYTE(CurrentIrql) = v65;
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
  v71 = 0LL;
  LockNV = Mutant->Header.LockNV;
  v70 = 0LL;
  LODWORD(v70) = LockNV;
  BYTE2(v70) = 0;
  Mutant->Header.LockNV = v70;
  v18 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v19 = v18->SchedulerAssist;
  v63 = 0;
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
      KeYieldProcessorEx(&v63, *(__int64 *)&Increment, v12, Wait);
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
      v64 = v24;
      v24 = v30;
      v32 = v64->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v30->Header.WaitListHead.Flink != v64 || (struct _KMUTANT *)v32->Flink != v31 )
        goto LABEL_29;
      v32->Flink = (struct _LIST_ENTRY *)v30;
      v30->Header.WaitListHead.Flink = v32;
      v33 = (char)v31->Header.WaitListHead.Blink;
      if ( v33 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v62, v31, WORD1(v31->Header.WaitListHead.Blink), &v68) )
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
      KiTryUnwaitThread(v62, v31, 256LL, 0LL);
      goto LABEL_48;
    }
    BYTE1(v31->Header.WaitListHead.Blink) = 5;
    v61 = (__int64)v31->MutantListEntry.Flink;
    v66 = (_QWORD *)(v61 + 8);
    *(_QWORD *)&v31->Header.Lock = 0LL;
    v43 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 <= 0xFu )
    {
      v44 = KeGetCurrentPrcb()->SchedulerAssist;
      v12 = (unsigned int)(-1LL << (v43 + 1)) & 4 | v44[5];
      v31 = v64;
      v44[5] = v12;
    }
    v67 = KeGetCurrentPrcb();
    v45 = (__int64)v67->CurrentThread;
    v69 = v45;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v45, v31);
      EtwTraceEnqueueWork(v48, v47, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v61, (__int64)v31, v12, v45);
    v49 = v66;
    v50 = v61;
    if ( (_QWORD *)*v49 != v49
      && *(_DWORD *)(v61 + 40) < *(_DWORD *)(v61 + 44)
      && (*(_QWORD *)(v69 + 232) != v61 || *(_BYTE *)(v69 + 643) != 15) )
    {
      v51 = KiWakeQueueWaiter((__int64)v67, v61, (__int64)v64);
      v50 = v61;
      if ( v51 )
        goto LABEL_82;
      v49 = v66;
    }
    v52 = *(unsigned int *)(v50 + 4);
    *(_DWORD *)(v50 + 4) = v52 + 1;
    v12 = *(_QWORD *)(v50 + 32);
    if ( *(_QWORD *)v12 != v50 + 24 )
      goto LABEL_29;
    v53 = v64;
    *(_QWORD *)&v64->Header.Lock = v50 + 24;
    v53->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
    *(_QWORD *)v12 = v53;
    *(_QWORD *)(v50 + 32) = v53;
    if ( !(_DWORD)v52 && (_QWORD *)*v49 != v49 )
    {
      KiWakeOtherQueueWaiters((__int64)v67, v50, v12, v52);
      v50 = v61;
    }
LABEL_82:
    _InterlockedAnd((volatile signed __int32 *)v50, 0xFFFFFF7F);
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
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
  LODWORD(CurrentPrcb) = (_DWORD)v62;
  v25 = BugCheckParameter1;
  if ( v10 )
  {
    if ( v68 )
    {
      Next = v62->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( v68 == &Next[-27] )
          KeAbPreWakeupThread(v68, Mutant, (unsigned int)*(char *)(BugCheckParameter1 + 195));
      }
    }
  }
  v8 = ApcDisable;
LABEL_21:
  if ( v75 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, v73, v65);
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
