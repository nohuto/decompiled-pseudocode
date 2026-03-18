/*
 * XREFs of KeReleaseMutant @ 0x1402F91E0
 * Callers:
 *     NtSignalAndWaitForSingleObject @ 0x14024F140 (NtSignalAndWaitForSingleObject.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14025C690 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402D72FC (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402D7A40 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     EtwpEnableMetaProviderGuid @ 0x1402E1010 (EtwpEnableMetaProviderGuid.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F4850 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403D525C (LdrpSetAlternateResourceModuleHandle.c)
 *     DifKeReleaseMutantWrapper @ 0x1406148B0 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x1406149F0 (DifKeReleaseMutexWrapper.c)
 *     NtReleaseMutant @ 0x1407B3A50 (NtReleaseMutant.c)
 * Callees:
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140234D1C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeAbPreWakeupThread @ 0x140359790 (KeAbPreWakeupThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // r11
  char v5; // di
  int v6; // r15d
  _KTHREAD *OwnerThread; // rbp
  bool v8; // si
  BOOLEAN v9; // r12
  __int64 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // r13
  int SignalState; // r14d
  LONG v14; // ecx
  LONG LockNV; // eax
  struct _KPRCB *v16; // rsi
  _DWORD *v17; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  struct _KMUTANT *v22; // r15
  ULONG_PTR v23; // r12
  struct _KMUTANT *v25; // rax
  struct _KMUTANT *v26; // r10
  void **p_Flink; // rcx
  char v28; // al
  bool v29; // zf
  char v30; // di
  int v31; // ecx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // cl
  _DWORD *v39; // r9
  __int64 v40; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // r9
  _QWORD *v45; // r10
  __int64 v46; // rcx
  char v47; // al
  int v48; // r9d
  _QWORD *v49; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *SchedulerAssist; // r8
  int v55; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-A8h]
  __int64 v57; // [rsp+38h] [rbp-A0h]
  int v58; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *p_Lock; // [rsp+48h] [rbp-90h]
  __int64 v60; // [rsp+50h] [rbp-88h]
  _QWORD *v61; // [rsp+58h] [rbp-80h]
  struct _KPRCB *v62; // [rsp+60h] [rbp-78h]
  struct _SINGLE_LIST_ENTRY *v63; // [rsp+68h] [rbp-70h] BYREF
  __int64 v64; // [rsp+70h] [rbp-68h]
  __int128 v65; // [rsp+78h] [rbp-60h]
  __int64 v66; // [rsp+88h] [rbp-50h]
  int v67; // [rsp+E0h] [rbp+8h] BYREF
  KPRIORITY v68; // [rsp+E8h] [rbp+10h]
  int ApcDisable; // [rsp+F0h] [rbp+18h]
  BOOLEAN v70; // [rsp+F8h] [rbp+20h]

  v70 = Wait;
  v68 = Increment;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0;
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  OwnerThread = 0LL;
  v63 = 0LL;
  v8 = 0;
  v9 = Abandoned;
  CurrentIrql = KeGetCurrentIrql();
  v60 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    *(_QWORD *)&Abandoned = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = Abandoned;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v67 = 0;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v67, *(__int64 *)&Increment, Abandoned, Wait);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    LOBYTE(CurrentIrql) = v60;
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
  }
  SignalState = Mutant->Header.SignalState;
  if ( v9 )
  {
    Mutant->MutantFlags |= 1u;
    Mutant->Header.SignalState = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      v30 = Mutant->MutantFlags & 1;
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v52 = KeGetCurrentIrql();
          if ( v52 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v52 >= 2u )
          {
            v53 = KeGetCurrentPrcb();
            SchedulerAssist = v53->SchedulerAssist;
            v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
            v29 = (v55 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v55;
            if ( v29 )
            {
              KiRemoveSystemWorkPriorityKick(v53);
              LOBYTE(CurrentIrql) = v60;
            }
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      v31 = -1073741754;
      if ( v30 )
        v31 = 128;
      RtlRaiseStatus(v31);
    }
    v14 = Mutant->Header.SignalState;
    Mutant->Header.SignalState = v14 + 1;
    if ( v14 )
    {
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      goto LABEL_18;
    }
  }
  if ( SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    v23 = BugCheckParameter1;
    goto LABEL_19;
  }
  v66 = 0LL;
  LockNV = Mutant->Header.LockNV;
  v65 = 0LL;
  LODWORD(v65) = LockNV;
  BYTE2(v65) = 0;
  Mutant->Header.LockNV = v65;
  v16 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v17 = v16->SchedulerAssist;
  v58 = 0;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v34 = v17[6];
      v17[6] = v34 + 1;
      if ( v34 == -1 )
LABEL_50:
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v32 = v16->SchedulerAssist;
    if ( v32 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v35 = v32[6] - 1;
        v32[6] = v35;
        if ( !v35 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    do
      KeYieldProcessorEx(&v58, *(__int64 *)&Increment, Abandoned, Wait);
    while ( OwnerThread->ThreadLock );
    v33 = v16->SchedulerAssist;
    if ( v33 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v36 = v33[6];
        v33[6] = v36 + 1;
        if ( v36 == -1 )
          goto LABEL_50;
      }
    }
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
LABEL_30:
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  OwnerThread->ThreadLock = 0LL;
  v20 = KeGetCurrentPrcb();
  v21 = (__int64)v20->SchedulerAssist;
  if ( v21 )
  {
    if ( v20->NestingLevel <= 1u )
    {
      v37 = *(_DWORD *)(v21 + 24) - 1;
      *(_DWORD *)(v21 + 24) = v37;
      if ( !v37 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  v22 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  while ( v22 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    v25 = *(struct _KMUTANT **)&v22->Header.Lock;
    v26 = v22;
    p_Lock = &v22->Header.Lock;
    v22 = v25;
    p_Flink = (void **)&v26->Header.WaitListHead.Flink->Flink;
    if ( (struct _KMUTANT *)v25->Header.WaitListHead.Flink != v26 || *p_Flink != v26 )
      goto LABEL_30;
    *p_Flink = v25;
    v25->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)p_Flink;
    v28 = (char)v26->Header.WaitListHead.Blink;
    switch ( v28 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(
                                (__int64)CurrentPrcb,
                                (__int64)v26,
                                WORD1(v26->Header.WaitListHead.Blink),
                                (__int64 *)&v63) )
        {
          v29 = Mutant->Header.SignalState-- == 1;
          if ( v29 )
            goto LABEL_14;
        }
        break;
      case 2:
        BYTE1(v26->Header.WaitListHead.Blink) = 5;
        v57 = (__int64)v26->MutantListEntry.Flink;
        v61 = (_QWORD *)(v57 + 8);
        *(_QWORD *)&v26->Header.Lock = 0LL;
        v38 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
        {
          v39 = KeGetCurrentPrcb()->SchedulerAssist;
          v21 = (-1LL << (v38 + 1)) & 4;
          *(_QWORD *)&Abandoned = (unsigned int)v21 | v39[5];
          v39[5] = Abandoned;
        }
        v62 = KeGetCurrentPrcb();
        v40 = (__int64)v62->CurrentThread;
        v64 = v40;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(v40);
          EtwTraceEnqueueWork(v42, v43, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v57, v21, Abandoned, v40);
        v45 = v61;
        v46 = v57;
        if ( (_QWORD *)*v45 != v45
          && *(_DWORD *)(v57 + 40) < *(_DWORD *)(v57 + 44)
          && (*(_QWORD *)(v64 + 232) != v57 || *(_BYTE *)(v64 + 643) != 15) )
        {
          v47 = KiWakeQueueWaiter((__int64)v62, v57, (__int64)p_Lock, v44);
          v46 = v57;
          if ( v47 )
          {
            *p_Lock = 0LL;
            goto LABEL_78;
          }
          v45 = v61;
        }
        v48 = *(_DWORD *)(v46 + 4);
        v21 = v46 + 24;
        *(_DWORD *)(v46 + 4) = v48 + 1;
        *(_QWORD *)&Abandoned = *(_QWORD *)(v46 + 32);
        if ( *(_QWORD *)Abandoned != v46 + 24 )
          goto LABEL_30;
        v49 = p_Lock;
        *p_Lock = v21;
        v49[1] = Abandoned;
        *(_QWORD *)Abandoned = v49;
        *(_QWORD *)(v46 + 32) = v49;
        if ( !v48 && (_QWORD *)*v45 != v45 )
        {
          KiWakeOtherQueueWaiters(v62, v46);
          v46 = v57;
        }
LABEL_78:
        _InterlockedAnd((volatile signed __int32 *)v46, 0xFFFFFF7F);
        v29 = Mutant->Header.SignalState-- == 1;
        if ( v29 )
          goto LABEL_14;
        break;
      case 4:
        BYTE1(v26->Header.WaitListHead.Blink) = 5;
        Mutant->Header.SignalState = 0;
        KeInsertQueueDpc((PRKDPC)v26->MutantListEntry.Flink, Mutant, v26);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v26, 256LL, 0LL);
        break;
    }
  }
LABEL_14:
  v8 = (Mutant->MutantFlags & 2) != 0;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( v9 )
    KiAcquireReleaseObjectRundownLockExclusive((unsigned __int64)Mutant);
  if ( !v8 )
  {
    v6 = ApcDisable;
LABEL_18:
    v23 = BugCheckParameter1;
    goto LABEL_19;
  }
  v23 = BugCheckParameter1;
  if ( v63 )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
    {
      if ( v63 == &Next[-27] )
        KeAbPreWakeupThread(v63, Mutant, (unsigned int)*(char *)(BugCheckParameter1 + 195));
    }
  }
  v6 = ApcDisable;
LABEL_19:
  if ( v70 )
    v5 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v5, 1, v68, v60);
  if ( v8 )
  {
    if ( OwnerThread != (_KTHREAD *)v23 )
    {
      SessionId = MmGetSessionIdEx(*(_QWORD *)(v23 + 184));
      KeBugCheckEx(0x162u, v23, (ULONG_PTR)Mutant, SessionId, 1uLL);
    }
    KeAbPostRelease((ULONG_PTR)Mutant);
  }
  if ( v6 )
    KiLeaveCriticalRegionUnsafe(v23);
  return SignalState;
}
