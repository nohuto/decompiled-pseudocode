/*
 * XREFs of ExpDeleteTimer @ 0x140281910
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     PsRemoveVirtualizedTimer @ 0x140212064 (PsRemoveVirtualizedTimer.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v3; // al
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // r13
  struct _KTHREAD *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v11; // dl
  __int64 v12; // rsi
  int SessionId; // eax
  bool v14; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // ecx
  unsigned __int8 v24; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v27; // eax
  _DWORD *SchedulerAssist; // r8
  _QWORD *P; // [rsp+30h] [rbp-58h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  P = *(_QWORD **)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v7 = KeGetCurrentThread();
  --v7->SpecialApcDisable;
  if ( ++v7->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v7, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v8) = v7->AbEntrySummary;
  v9 = -1;
  if ( !(_BYTE)v8 )
  {
    if ( !v7->AbOrphanedEntrySummary )
    {
      v12 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v7, &ExpWakeTimerLock);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v7->AbOrphanedEntrySummary;
    v7->AbOrphanedEntrySummary = 0;
    LOBYTE(v8) = AbOrphanedEntrySummary | v7->AbEntrySummary;
  }
  v11 = v8;
  _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8);
  v7->AbEntrySummary = v11 & ~(1 << v8);
  v12 = (__int64)&v7->LockEntries[v8];
  if ( !v12 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v7->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4FA08[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v12 + 40) = SessionId;
  *(_QWORD *)(v12 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7);
  v14 = v7->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v12, &ExpWakeTimerLock);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
    v9 = MmGetSessionIdEx(v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v21, v20);
    if ( v14 )
      break;
    v22 = (__int64)&v18->LockEntries[v21];
    v20 &= ~(1 << v21);
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v22 + 40) == v9 )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
      {
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
          v23 = *(_DWORD *)(v22 + 88) & 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_DWORD *)(v22 + 88) = v23;
          *(_QWORD *)(v22 + 32) = 0LL;
          v24 = 1 << ((char)(v22 - LOBYTE(v18->LockEntries)) / 96);
          if ( v19 == 1 )
            v18->AbEntrySummary |= v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, v24);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&ExpWakeTimerLock, v9, 0LL);
LABEL_46:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18);
  v14 = v18->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( P )
    PoDestroyReasonContext(P);
LABEL_2:
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
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return KeCancelTimer(a1);
}
