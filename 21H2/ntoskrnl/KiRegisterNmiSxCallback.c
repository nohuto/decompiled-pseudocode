/*
 * XREFs of KiRegisterNmiSxCallback @ 0x140514EE4
 * Callers:
 *     KeRegisterNmiCallback @ 0x140514B50 (KeRegisterNmiCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall KiRegisterNmiSxCallback(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
  v5 = result;
  if ( result )
  {
    result[1] = a1;
    result[2] = a2;
    result[3] = result;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v5 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v5;
    v7 = v6;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    return (_QWORD *)v5[3];
  }
  return result;
}
