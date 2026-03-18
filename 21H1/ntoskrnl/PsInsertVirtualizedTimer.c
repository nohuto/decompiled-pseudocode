/*
 * XREFs of PsInsertVirtualizedTimer @ 0x140304690
 * Callers:
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x1406C7A00 (NtCreateTimer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x140318758 (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

KSPIN_LOCK **__fastcall PsInsertVirtualizedTimer(
        KSPIN_LOCK *Object,
        _QWORD *a2,
        KSPIN_LOCK *a3,
        __int64 a4,
        KSPIN_LOCK **a5)
{
  KSPIN_LOCK **result; // rax
  char v6; // r15
  KIRQL CurrentIrql; // di
  KSPIN_LOCK *v11; // rbp
  PVOID *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  result = (KSPIN_LOCK **)*((unsigned int *)Object + 281);
  v6 = a4;
  if ( ((unsigned int)result & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = Object + 305;
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 305);
      KxAcquireSpinLock(a3);
    }
    v12 = (PVOID *)Object[307];
    if ( *v12 != Object + 306 )
      __fastfail(3u);
    *a2 = Object + 306;
    a2[1] = v12;
    *v12 = a2;
    Object[307] = (KSPIN_LOCK)a2;
    if ( v6 )
    {
      LOBYTE(a4) = 1;
      ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a4);
    }
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    result = a5;
    *a5 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock(a3);
      KxReleaseSpinLock(v11);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = (KSPIN_LOCK **)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
