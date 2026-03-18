/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14036D368
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036D250 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C449C8);
  v5 = *a2;
  v6 = v3;
  v7 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (_QWORD *)*v7 != a2
    || (*v7 = v5,
        *(_QWORD *)(v5 + 8) = v7,
        v8 = (_QWORD *)qword_140C449A0,
        --dword_140C44990,
        *(__int64 **)qword_140C449A0 != &qword_140C44998) )
  {
    __fastfail(3u);
  }
  *a2 = &qword_140C44998;
  a2[1] = v8;
  *v8 = a2;
  qword_140C449A0 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_140C449A8, 0, 1, v4, 0);
  KxReleaseSpinLock(&qword_140C449C8);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
