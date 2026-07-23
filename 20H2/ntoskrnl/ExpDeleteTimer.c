/*
 * XREFs of ExpDeleteTimer @ 0x140247950
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     PsRemoveVirtualizedTimer @ 0x1403402DC (PsRemoveVirtualizedTimer.c)
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v3; // al
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v12; // dl
  __int64 v13; // rsi
  int SessionId; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v22; // rbx
  unsigned __int8 v23; // r14
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // ecx
  unsigned __int8 v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v36; // eax
  _DWORD *SchedulerAssist; // r8
  PVOID P; // [rsp+30h] [rbp-58h]
  int v39; // [rsp+98h] [rbp+10h] BYREF
  int v40; // [rsp+A0h] [rbp+18h]
  int v41; // [rsp+A8h] [rbp+20h] BYREF

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  P = *(PVOID *)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  v41 = 0;
  --v8->SpecialApcDisable;
  if ( ++v8->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v9) = v8->AbEntrySummary;
  v10 = -1;
  v40 = 0;
  if ( !(_BYTE)v9 )
  {
    if ( !v8->AbOrphanedEntrySummary )
    {
      v13 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v8, &ExpWakeTimerLock);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
    v8->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = AbOrphanedEntrySummary | v8->AbEntrySummary;
  }
  v12 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  v40 = v9;
  v8->AbEntrySummary = v12 & ~(1 << v9);
  v13 = (__int64)&v8->LockEntries[v9];
  if ( !v13 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F848[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v13 + 40) = SessionId;
  *(_QWORD *)(v13 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, (__int64)&ExpWakeTimerLock, &v41);
  v18 = v8->SpecialApcDisable++ == -1;
  if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(1LL, v15, v16, v17);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v13, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  v39 = 0;
  v22 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v10 = MmGetSessionIdEx((__int64)v22->ApcState.Process);
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
      && *(_DWORD *)(v26 + 40) == v10 )
    {
      *(_BYTE *)(v26 + 26) &= ~1u;
      if ( *(_QWORD *)(v26 + 32) )
      {
        if ( v26 )
        {
          *(_BYTE *)(v26 + 32) |= 2u;
          if ( *(__int64 *)(v26 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
          v27 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
          v28 = *(_DWORD *)(v26 + 88) & 0xFFFE0000;
          *(_BYTE *)(v26 + 25) &= ~1u;
          v39 = v27;
          *(_DWORD *)(v26 + 88) = v28;
          *(_QWORD *)(v26 + 32) = 0LL;
          v29 = 1 << ((char)(v26 - LOBYTE(v22->LockEntries)) / 96);
          if ( v23 == 1 )
            v22->AbEntrySummary |= v29;
          else
            _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, v29);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v22, (ULONG_PTR)&ExpWakeTimerLock, v10, 0LL);
LABEL_46:
  --v22->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v22, (__int64)&ExpWakeTimerLock, &v39);
  v18 = v22->SpecialApcDisable++ == -1;
  if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery(v31, v30, v32, v33);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( P )
    PoDestroyReasonContext(P);
LABEL_2:
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v5 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v4) = v3;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v4);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
