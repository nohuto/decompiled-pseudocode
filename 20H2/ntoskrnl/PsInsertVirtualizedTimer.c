/*
 * XREFs of PsInsertVirtualizedTimer @ 0x14033F650
 * Callers:
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x1406F8AA0 (NtCreateTimer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x140326A58 (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

KSPIN_LOCK **__fastcall PsInsertVirtualizedTimer(
        KSPIN_LOCK *Object,
        _QWORD *a2,
        KSPIN_LOCK *a3,
        char a4,
        KSPIN_LOCK **a5)
{
  KSPIN_LOCK **result; // rax
  KIRQL CurrentIrql; // di
  KSPIN_LOCK *v11; // rbp
  PVOID *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  result = (KSPIN_LOCK **)*((unsigned int *)Object + 281);
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
    if ( a4 )
      ExpTimerPause((__int64)(a2 - 36), MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], 1);
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
