/*
 * XREFs of ExpRemoveTagForBigPages @ 0x14063BC14
 * Callers:
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     ExpCleanupBigTag @ 0x14063B348 (ExpCleanupBigTag.c)
 *     ExpSizeHeapPool @ 0x1406427C4 (ExpSizeHeapPool.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpBigPoolGetTrackerEntry @ 0x140365F80 (ExpBigPoolGetTrackerEntry.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        _DWORD *a4,
        int *a5,
        _QWORD *a6,
        ULONG_PTR *a7)
{
  ULONG_PTR *v7; // r15
  unsigned __int64 v12; // rsi
  __int64 TrackerEntry; // rax
  __int64 v14; // r9
  int v15; // r8d
  ULONG_PTR v16; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v20; // zf
  unsigned __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v7 = a7;
  v22[0] = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v12 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  TrackerEntry = ExpBigPoolGetTrackerEntry(BugCheckParameter2, a2, v22, &v21, (int **)&v23);
  v14 = TrackerEntry;
  v15 = *(_DWORD *)(TrackerEntry + 12) >> 8;
  *a4 = *(_DWORD *)(TrackerEntry + 8);
  *a5 = v15 & 0xFFF;
  *a6 = *(_QWORD *)(TrackerEntry + 16);
  if ( (v15 & 8) != 0 )
    v16 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(TrackerEntry + 24);
  else
    v16 = -1LL;
  *v7 = v16;
  if ( a3 )
  {
    _InterlockedAdd((volatile signed __int32 *)v23, 0xFFFFFFFF);
    *(_QWORD *)(v14 + 24) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v14);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return result;
}
