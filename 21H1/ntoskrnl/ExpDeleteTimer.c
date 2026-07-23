/*
 * XREFs of ExpDeleteTimer @ 0x140236430
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsRemoveVirtualizedTimer @ 0x1402EE3D0 (PsRemoveVirtualizedTimer.c)
 *     PoDestroyReasonContext @ 0x14033D208 (PoDestroyReasonContext.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1, __int64 a2, __int64 a3, __int64 a4)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v6; // al
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // r13
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v15; // dl
  __int64 v16; // rsi
  int SessionId; // eax
  bool v18; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v22; // rbx
  unsigned __int8 v23; // r14
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned int v27; // ecx
  unsigned __int8 v28; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v31; // eax
  _DWORD *SchedulerAssist; // r8
  PVOID P; // [rsp+30h] [rbp-58h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  P = *(PVOID *)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v11 = KeGetCurrentThread();
  --v11->SpecialApcDisable;
  if ( ++v11->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v12) = v11->AbEntrySummary;
  v13 = -1;
  if ( !(_BYTE)v12 )
  {
    if ( !v11->AbOrphanedEntrySummary )
    {
      v16 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v11, &ExpWakeTimerLock, a3, a4);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
    v11->AbOrphanedEntrySummary = 0;
    LOBYTE(v12) = AbOrphanedEntrySummary | v11->AbEntrySummary;
  }
  v15 = v12;
  _BitScanForward((unsigned int *)&v12, (unsigned __int8)v12);
  v11->AbEntrySummary = v15 & ~(1 << v12);
  v16 = (__int64)&v11->LockEntries[v12];
  if ( !v16 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(v11->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v16 + 40) = SessionId;
  *(_QWORD *)(v16 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11);
  v18 = v11->SpecialApcDisable++ == -1;
  if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v16, &ExpWakeTimerLock);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v22 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
    v13 = MmGetSessionIdEx(v22->ApcState.Process);
  --v22->SpecialApcDisable;
  v23 = ++v22->AbAllocationRegionCount;
  v24 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v25, v24);
    if ( v18 )
      break;
    v26 = (__int64)&v22->LockEntries[v25];
    v24 &= ~(1 << v25);
    if ( (*(_BYTE *)(v26 + 26) & 1) != 0
      && (*(_DWORD *)(v26 + 32) & 1) == 0
      && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v26 + 40) == v13 )
    {
      *(_BYTE *)(v26 + 26) &= ~1u;
      if ( *(_QWORD *)(v26 + 32) )
      {
        if ( v26 )
        {
          *(_BYTE *)(v26 + 32) |= 2u;
          if ( *(__int64 *)(v26 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
          v27 = *(_DWORD *)(v26 + 88) & 0xFFFE0000;
          *(_BYTE *)(v26 + 25) &= ~1u;
          *(_DWORD *)(v26 + 88) = v27;
          *(_QWORD *)(v26 + 32) = 0LL;
          v28 = 1 << ((char)(v26 - LOBYTE(v22->LockEntries)) / 96);
          if ( v23 == 1 )
            v22->AbEntrySummary |= v28;
          else
            _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, v28);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v22, (ULONG_PTR)&ExpWakeTimerLock, v13, 0LL);
LABEL_46:
  --v22->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v22);
  v18 = v22->SpecialApcDisable++ == -1;
  if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( P )
    PoDestroyReasonContext(P);
LABEL_2:
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v8 = v6;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v7) = v6;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v7);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  return KeCancelTimer(a1);
}
