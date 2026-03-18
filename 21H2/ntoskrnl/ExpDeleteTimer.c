/*
 * XREFs of ExpDeleteTimer @ 0x140356E00
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     PsRemoveVirtualizedTimer @ 0x14024CBF8 (PsRemoveVirtualizedTimer.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rbx
  KIRQL v3; // al
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // r12
  void *v7; // r13
  __int64 v8; // rdi
  struct _KTHREAD *v9; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  int SessionId; // eax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v16; // rdi
  __int64 p_Process; // rbx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  _DWORD *SchedulerAssist; // r8
  bool v24; // zf

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = *(void **)&a1[4].Header.Lock;
    --CurrentThread->KernelApcDisable;
    v8 = 0LL;
    v9 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v9->AbEntrySummary;
    v11 = -1;
    if ( v9->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpWakeTimerLock, (__int64)v9)) != 0 )
    {
      _BitScanForward((unsigned int *)&v12, AbEntrySummary);
      v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
      _enable();
      v8 = (__int64)(&v9[1].Process + 12 * v12);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
      *(_DWORD *)(v8 + 8) = SessionId;
      *(_QWORD *)v8 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v8, (__int64)&ExpWakeTimerLock);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    Flink = p_WaitListHead->Flink;
    Blink = p_WaitListHead->Blink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_WaitListHead->Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    v16 = KeGetCurrentThread();
    if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 < 0x8000000000LL )
      v11 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    _disable();
    p_Process = (__int64)&v16[1].Process;
    v18 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != v11 )
    {
      ++v18;
      p_Process += 96LL;
      if ( v18 >= 6 )
        goto LABEL_34;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v19 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v16->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v19 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, (__int64)&ExpWakeTimerLock, v19);
      goto LABEL_37;
    }
LABEL_34:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&ExpWakeTimerLock, v11, 0LL);
    _enable();
LABEL_37:
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v7 )
      PoDestroyReasonContext(v7);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v4 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    PsRemoveVirtualizedTimer((PVOID *)&a1[4].DueTime, &a1[4].TimerListEntry.Flink, (KSPIN_LOCK *)&a1[1], v3);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return KeCancelTimer(a1);
}
