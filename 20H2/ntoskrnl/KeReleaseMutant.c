/*
 * XREFs of KeReleaseMutant @ 0x140218050
 * Callers:
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AD640 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402FC820 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402FD320 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC1C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F530 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x140562EA0 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x1406B0A10 (NtReleaseMutant.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeAbPreWakeupThread @ 0x140242F10 (KeAbPreWakeupThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14030B5B4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  int v4; // edi
  _KTHREAD *CurrentThread; // rcx
  int v8; // r15d
  _KTHREAD *OwnerThread; // rbp
  char v10; // r13
  __int64 CurrentIrql; // r10
  __int64 v12; // r11
  struct _KPRCB *CurrentPrcb; // rsi
  int SignalState; // r14d
  LONG v15; // eax
  LONG LockNV; // eax
  struct _KPRCB *v17; // rsi
  _DWORD *v18; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _KMUTANT *v23; // r15
  ULONG_PTR v24; // r12
  struct _KMUTANT *v26; // rax
  struct _KMUTANT *v27; // rdx
  struct _LIST_ENTRY *v28; // rcx
  char v29; // al
  bool v30; // zf
  char v31; // di
  NTSTATUS v32; // ecx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // cl
  _DWORD *v41; // r9
  _KTHREAD *v42; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v44; // rdx
  __int64 v45; // r9
  struct _LIST_ENTRY **v46; // r10
  struct _LIST_ENTRY *v47; // rcx
  char v48; // al
  int Flink_high; // r9d
  struct _KMUTANT **v50; // r8
  struct _KMUTANT *v51; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-B8h]
  struct _LIST_ENTRY *v59; // [rsp+38h] [rbp-B0h]
  struct _KPRCB *v60; // [rsp+40h] [rbp-A8h]
  int v61; // [rsp+48h] [rbp-A0h] BYREF
  struct _KMUTANT *v62; // [rsp+50h] [rbp-98h]
  __int64 v63; // [rsp+58h] [rbp-90h]
  struct _LIST_ENTRY **p_Blink; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v65; // [rsp+68h] [rbp-80h]
  struct _SINGLE_LIST_ENTRY *v66; // [rsp+70h] [rbp-78h] BYREF
  _KTHREAD *v67; // [rsp+78h] [rbp-70h]
  __int128 v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  int v70; // [rsp+F0h] [rbp+8h] BYREF
  KPRIORITY v71; // [rsp+F8h] [rbp+10h]
  int ApcDisable; // [rsp+100h] [rbp+18h]
  BOOLEAN v73; // [rsp+108h] [rbp+20h]

  v73 = Wait;
  v71 = Increment;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  v8 = 0;
  OwnerThread = 0LL;
  v66 = 0LL;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v63 = CurrentIrql;
  __writecr8(2uLL);
  v12 = (unsigned __int8)v66 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v12 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v70 = 0;
  v60 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v70);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
    v12 = -1LL;
    LOBYTE(CurrentIrql) = v63;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->MutantFlags |= 1u;
    v15 = 1;
    Mutant->Header.SignalState = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      v31 = Mutant->MutantFlags & 1;
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v56 = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(v12 << ((unsigned __int8)CurrentIrql + 1));
            v30 = (v57 & v56[5]) == 0;
            v56[5] &= v57;
            if ( v30 )
            {
              KiRemoveSystemWorkPriorityKick(v55);
              LOBYTE(CurrentIrql) = v63;
            }
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v31 )
        v32 = 128;
      else
        v32 = -1073741754;
      RtlRaiseStatus(v32);
    }
    v15 = ++Mutant->Header.SignalState;
  }
  if ( v15 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    v24 = BugCheckParameter1;
    goto LABEL_21;
  }
  v69 = 0LL;
  LockNV = Mutant->Header.LockNV;
  v68 = 0LL;
  LODWORD(v68) = LockNV;
  BYTE2(v68) = 0;
  Mutant->Header.LockNV = v68;
  v17 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v18 = v17->SchedulerAssist;
  v61 = 0;
  if ( v18 )
  {
    if ( v17->NestingLevel <= 1u )
    {
      v36 = v18[6];
      v18[6] = v36 + 1;
      if ( v36 == -1 )
LABEL_56:
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v33 = v17->SchedulerAssist;
    if ( v33 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v37 = v33[6] - 1;
        v33[6] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    do
      KeYieldProcessorEx(&v61);
    while ( OwnerThread->ThreadLock );
    v34 = v17->SchedulerAssist;
    if ( v34 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v38 = v34[6];
        v34[6] = v38 + 1;
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
  v21 = KeGetCurrentPrcb();
  v22 = v21->SchedulerAssist;
  if ( v22 )
  {
    if ( v21->NestingLevel <= 1u )
    {
      v39 = v22[6] - 1;
      v22[6] = v39;
      if ( !v39 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  v23 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v23 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v26 = *(struct _KMUTANT **)&v23->Header.Lock;
      v27 = v23;
      v62 = v23;
      v23 = v26;
      v28 = v62->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v26->Header.WaitListHead.Flink != v62 || (struct _KMUTANT *)v28->Flink != v27 )
        goto LABEL_29;
      v28->Flink = (struct _LIST_ENTRY *)v26;
      v26->Header.WaitListHead.Flink = v28;
      v29 = (char)v27->Header.WaitListHead.Blink;
      if ( v29 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v60, v27, WORD1(v27->Header.WaitListHead.Blink), &v66) )
      {
        v30 = Mutant->Header.SignalState-- == 1;
        if ( v30 )
          goto LABEL_15;
      }
LABEL_48:
      if ( v23 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_15;
    }
    if ( v29 != 2 )
    {
      KiTryUnwaitThread(v60, v27, 256LL, 0LL);
      goto LABEL_48;
    }
    BYTE1(v27->Header.WaitListHead.Blink) = 5;
    v59 = v27->MutantListEntry.Flink;
    p_Blink = &v59->Blink;
    *(_QWORD *)&v27->Header.Lock = 0LL;
    v40 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
    {
      v41 = KeGetCurrentPrcb()->SchedulerAssist;
      v41[5] |= (-1LL << (v40 + 1)) & 4;
    }
    v65 = KeGetCurrentPrcb();
    v42 = v65->CurrentThread;
    v67 = v42;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v42);
      EtwTraceEnqueueWork(v45, v44, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v59);
    v46 = p_Blink;
    v47 = v59;
    if ( *v46 != (struct _LIST_ENTRY *)v46
      && LODWORD(v59[2].Blink) < HIDWORD(v59[2].Blink)
      && ((struct _LIST_ENTRY *)v67->Queue != v59 || v67->WaitReason != 15) )
    {
      v48 = KiWakeQueueWaiter(v65, v59, v62);
      v47 = v59;
      if ( v48 )
        goto LABEL_82;
      v46 = p_Blink;
    }
    Flink_high = HIDWORD(v47->Flink);
    HIDWORD(v47->Flink) = Flink_high + 1;
    v50 = (struct _KMUTANT **)v47[2].Flink;
    if ( *v50 != (struct _KMUTANT *)&v47[1].Blink )
      goto LABEL_29;
    v51 = v62;
    *(_QWORD *)&v62->Header.Lock = (char *)v47 + 24;
    v51->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v50;
    *v50 = v51;
    v47[2].Flink = (struct _LIST_ENTRY *)v51;
    if ( !Flink_high && *v46 != (struct _LIST_ENTRY *)v46 )
    {
      KiWakeOtherQueueWaiters(v65, v47);
      v47 = v59;
    }
LABEL_82:
    _InterlockedAnd((volatile signed __int32 *)v47, 0xFFFFFF7F);
    v30 = Mutant->Header.SignalState-- == 1;
    if ( v30 )
      goto LABEL_15;
    goto LABEL_48;
  }
LABEL_15:
  if ( (Mutant->MutantFlags & 2) != 0 )
    v10 = 1;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
  LODWORD(CurrentPrcb) = (_DWORD)v60;
  v24 = BugCheckParameter1;
  if ( v10 )
  {
    if ( v66 )
    {
      Next = v60->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( v66 == &Next[-27] )
          KeAbPreWakeupThread(v66, Mutant, (unsigned int)*(char *)(BugCheckParameter1 + 195));
      }
    }
  }
  v8 = ApcDisable;
LABEL_21:
  if ( v73 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, v71, v63);
  if ( v10 )
  {
    if ( OwnerThread != (_KTHREAD *)v24 )
    {
      SessionId = MmGetSessionIdEx(*(_QWORD *)(v24 + 184));
      KeBugCheckEx(0x162u, v24, (ULONG_PTR)Mutant, SessionId, 1uLL);
    }
    KeAbPostRelease((ULONG_PTR)Mutant);
  }
  if ( v8 )
    KeLeaveCriticalRegionThread(v24);
  return SignalState;
}
