/*
 * XREFs of KeQuerySchedulingGroupHistory @ 0x140274F94
 * Callers:
 *     PspQueryRateControlHistory @ 0x14067FA3C (PspQueryRateControlHistory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r8
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v8 = KeNumberProcessors_0;
  *a2 = 0LL;
  if ( v8 )
  {
    v9 = (__int64 *)(a1 + 176);
    v10 = v8;
    do
    {
      v11 = *v9;
      v9 += 53;
      *a2 |= v11;
      --v10;
    }
    while ( v10 );
  }
  *a3 = PsDfssGenerationLengthMS;
  v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v13 = (unsigned int)*a3;
  v14 = v12;
  v15 = 1000 * (v12.QuadPart - *(_QWORD *)(a1 + 24));
  *(LARGE_INTEGER *)(a1 + 24) = v14;
  *a4 = v15 / PerformanceFrequency.QuadPart / v13;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
