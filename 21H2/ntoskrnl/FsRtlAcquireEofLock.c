/*
 * XREFs of FsRtlAcquireEofLock @ 0x14035D230
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     FsRtlpWaitForIoAtEof @ 0x14035D3E0 (FsRtlpWaitForIoAtEof.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v7; // rcx
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdi
  signed __int32 v12; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v16; // eax
  _DWORD *SchedulerAssist; // r8
  bool v18; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v7);
    if ( (unsigned __int64)(v5 - qword_140C50630) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v4);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, a2, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v11 = *(unsigned __int8 *)(v10 + 48);
  *(_QWORD *)(v10 + 8) = 0LL;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v12);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return KeAbPostRelease(v10);
}
