/*
 * XREFs of KeReleaseMutant @ 0x140285BF0
 * Callers:
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F8700 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140361C64 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140362814 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037CEEC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037D800 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055F4D0 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x140673140 (NtReleaseMutant.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreWakeupThread @ 0x140274DB0 (KeAbPreWakeupThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140338E94 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
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
  struct _KMUTANT *v27; // rax
  struct _KMUTANT *v28; // rdx
  struct _LIST_ENTRY *v29; // rcx
  char v30; // al
  bool v31; // zf
  char v32; // di
  NTSTATUS v33; // ecx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // cl
  _DWORD *v41; // r9
  __int64 v42; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v44; // rdx
  __int64 v45; // r9
  _QWORD *v46; // r10
  __int64 v47; // rcx
  char v48; // al
  __int64 v49; // r9
  struct _KMUTANT *v50; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *SchedulerAssist; // r8
  int v56; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-B8h]
  __int64 v58; // [rsp+38h] [rbp-B0h]
  struct _KPRCB *v59; // [rsp+40h] [rbp-A8h]
  int v60; // [rsp+48h] [rbp-A0h] BYREF
  struct _KMUTANT *v61; // [rsp+50h] [rbp-98h]
  __int64 v62; // [rsp+58h] [rbp-90h]
  _QWORD *v63; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v64; // [rsp+68h] [rbp-80h]
  struct _SINGLE_LIST_ENTRY *v65; // [rsp+70h] [rbp-78h] BYREF
  __int64 v66; // [rsp+78h] [rbp-70h]
  __int128 v67; // [rsp+80h] [rbp-68h]
  __int64 v68; // [rsp+90h] [rbp-58h]
  int v69; // [rsp+F0h] [rbp+8h] BYREF
  KPRIORITY v70; // [rsp+F8h] [rbp+10h]
  int ApcDisable; // [rsp+100h] [rbp+18h]
  BOOLEAN v72; // [rsp+108h] [rbp+20h]

  v72 = Wait;
  v70 = Increment;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  v8 = 0;
  OwnerThread = 0LL;
  v65 = 0LL;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v62 = CurrentIrql;
  v12 = 2LL;
  __writecr8(2uLL);
  v13 = (unsigned __int8)v65 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (v13 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    v12 = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v69 = 0;
  v59 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v69, *(__int64 *)&Increment, v12, Wait);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
    v13 = -1LL;
    LOBYTE(CurrentIrql) = v62;
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
      v32 = Mutant->MutantFlags & 1;
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            SchedulerAssist = v54->SchedulerAssist;
            v56 = ~(unsigned __int16)(v13 << ((unsigned __int8)CurrentIrql + 1));
            v31 = (v56 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v56;
            if ( v31 )
            {
              KiRemoveSystemWorkPriorityKick(v54);
              LOBYTE(CurrentIrql) = v62;
            }
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v32 )
        v33 = 128;
      else
        v33 = -1073741754;
      RtlRaiseStatus(v33);
    }
    v16 = ++Mutant->Header.SignalState;
  }
  if ( v16 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    v25 = BugCheckParameter1;
    goto LABEL_21;
  }
  v68 = 0LL;
  LockNV = Mutant->Header.LockNV;
  v67 = 0LL;
  LODWORD(v67) = LockNV;
  BYTE2(v67) = 0;
  Mutant->Header.LockNV = v67;
  v18 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v19 = v18->SchedulerAssist;
  v60 = 0;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v36 = v19[6];
      v19[6] = v36 + 1;
      if ( v36 == -1 )
LABEL_56:
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v34 = v18->SchedulerAssist;
    if ( v34 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v37 = v34[6] - 1;
        v34[6] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    do
      KeYieldProcessorEx(&v60, *(__int64 *)&Increment, v12, Wait);
    while ( OwnerThread->ThreadLock );
    v35 = v18->SchedulerAssist;
    if ( v35 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v38 = v35[6];
        v35[6] = v38 + 1;
        if ( v38 == -1 )
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
      v39 = v23[6] - 1;
      v23[6] = v39;
      if ( !v39 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  v24 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v24 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v27 = *(struct _KMUTANT **)&v24->Header.Lock;
      v28 = v24;
      v61 = v24;
      v24 = v27;
      v29 = v61->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v27->Header.WaitListHead.Flink != v61 || (struct _KMUTANT *)v29->Flink != v28 )
        goto LABEL_29;
      v29->Flink = (struct _LIST_ENTRY *)v27;
      v27->Header.WaitListHead.Flink = v29;
      v30 = (char)v28->Header.WaitListHead.Blink;
      if ( v30 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v59, v28, WORD1(v28->Header.WaitListHead.Blink), &v65) )
      {
        v31 = Mutant->Header.SignalState-- == 1;
        if ( v31 )
          goto LABEL_15;
      }
LABEL_48:
      if ( v24 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_15;
    }
    if ( v30 != 2 )
    {
      KiTryUnwaitThread(v59, v28, 256LL, 0LL);
      goto LABEL_48;
    }
    BYTE1(v28->Header.WaitListHead.Blink) = 5;
    v58 = (__int64)v28->MutantListEntry.Flink;
    v63 = (_QWORD *)(v58 + 8);
    *(_QWORD *)&v28->Header.Lock = 0LL;
    v40 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
    {
      v41 = KeGetCurrentPrcb()->SchedulerAssist;
      v12 = (unsigned int)(-1LL << (v40 + 1)) & 4 | v41[5];
      v28 = v61;
      v41[5] = v12;
    }
    v64 = KeGetCurrentPrcb();
    v42 = (__int64)v64->CurrentThread;
    v66 = v42;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v42, v28);
      EtwTraceEnqueueWork(v45, v44, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v58, (__int64)v28, v12, v42);
    v46 = v63;
    v47 = v58;
    if ( (_QWORD *)*v46 != v46
      && *(_DWORD *)(v58 + 40) < *(_DWORD *)(v58 + 44)
      && (*(_QWORD *)(v66 + 232) != v58 || *(_BYTE *)(v66 + 643) != 15) )
    {
      v48 = KiWakeQueueWaiter((__int64)v64, v58, (__int64)v61);
      v47 = v58;
      if ( v48 )
        goto LABEL_82;
      v46 = v63;
    }
    v49 = *(unsigned int *)(v47 + 4);
    *(_DWORD *)(v47 + 4) = v49 + 1;
    v12 = *(_QWORD *)(v47 + 32);
    if ( *(_QWORD *)v12 != v47 + 24 )
      goto LABEL_29;
    v50 = v61;
    *(_QWORD *)&v61->Header.Lock = v47 + 24;
    v50->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
    *(_QWORD *)v12 = v50;
    *(_QWORD *)(v47 + 32) = v50;
    if ( !(_DWORD)v49 && (_QWORD *)*v46 != v46 )
    {
      KiWakeOtherQueueWaiters((__int64)v64, v47, v12, v49);
      v47 = v58;
    }
LABEL_82:
    _InterlockedAnd((volatile signed __int32 *)v47, 0xFFFFFF7F);
    v31 = Mutant->Header.SignalState-- == 1;
    if ( v31 )
      goto LABEL_15;
    goto LABEL_48;
  }
LABEL_15:
  if ( (Mutant->MutantFlags & 2) != 0 )
    v10 = 1;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
  LODWORD(CurrentPrcb) = (_DWORD)v59;
  v25 = BugCheckParameter1;
  if ( v10 )
  {
    if ( v65 )
    {
      Next = v59->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( v65 == &Next[-27] )
          KeAbPreWakeupThread((__int64)v65, (__int64)Mutant, *(char *)(BugCheckParameter1 + 195));
      }
    }
  }
  v8 = ApcDisable;
LABEL_21:
  if ( v72 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, v70, v62);
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
    KeLeaveCriticalRegionThread(v25);
  return SignalState;
}
