/*
 * XREFs of KiForceSymbolReferences @ 0x140B50C78
 * Callers:
 *     KiInitSystem @ 0x140B1B2C0 (KiInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiForceSymbolReferences()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v3; // rcx
  int SessionId; // eax
  signed __int8 v5; // cf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  signed __int32 v14; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v3, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v3);
      _enable();
      v1 = (unsigned __int64)(&CurrentThread[1].Process + 12 * v3);
      if ( (unsigned __int64)&BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v1 + 8) = SessionId;
      *(_QWORD *)v1 = &BugCheckParameter2;
    }
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
    if ( v1 )
    {
      if ( v5 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v1);
      else
        *(_BYTE *)(v1 + 18) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v14);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
