/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402DE734
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1402DE5C0 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PiProcessNewDeviceNodeWorker @ 0x1409478F0 (PiProcessNewDeviceNodeWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C46008);
  v4 = *a2;
  v5 = v3;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (_QWORD *)*v6 != a2
    || (*v6 = v4,
        *(_QWORD *)(v4 + 8) = v6,
        v7 = (_QWORD *)qword_140C45FE0,
        --dword_140C45FD0,
        *(__int64 **)qword_140C45FE0 != &qword_140C45FD8) )
  {
    __fastfail(3u);
  }
  *a2 = &qword_140C45FD8;
  a2[1] = v7;
  *v7 = a2;
  qword_140C45FE0 = (__int64)a2;
  KeReleaseSemaphoreEx(&byte_140C45FE8, 0);
  KxReleaseSpinLock(&qword_140C46008);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
