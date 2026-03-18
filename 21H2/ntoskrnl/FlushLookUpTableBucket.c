/*
 * XREFs of FlushLookUpTableBucket @ 0x140386944
 * Callers:
 *     LookUpTableFlushPartial @ 0x1407FAA3C (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14085D380 (LookUpTableFlushComplete.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     FlattenEventEntryTree @ 0x140386C14 (FlattenEventEntryTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FlushEventEntryList @ 0x1407FAAB8 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v5; // rdi
  KIRQL v6; // r15
  __int64 v7; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // r12d
  __int64 v10; // rdx
  int SessionId; // eax
  const EVENT_DESCRIPTOR *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebp
  char v15; // si
  struct _KTHREAD *v16; // rsi
  __int64 p_Process; // rbx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 272;
  v6 = 0;
  v7 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v9 = -1;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 272, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    _enable();
    v7 = (__int64)(&CurrentThread[1].Process + 12 * v10);
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v7, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v12 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v13 = FlattenEventEntryTree(v12);
  *(_DWORD *)(a1 + 256) -= v13;
  v14 = v13;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  v16 = KeGetCurrentThread();
  if ( v5 - qword_140C50630 < 0x8000000000LL )
    v9 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  _disable();
  p_Process = (__int64)&v16[1].Process;
  v18 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v5 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v9 )
  {
    ++v18;
    p_Process += 96LL;
    if ( v18 >= 6 )
      goto LABEL_30;
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
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, v5, v19);
    goto LABEL_28;
  }
LABEL_30:
  if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v5, v9, 0LL);
  _enable();
LABEL_28:
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v12);
  return v14;
}
