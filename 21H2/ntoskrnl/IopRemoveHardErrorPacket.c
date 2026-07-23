/*
 * XREFs of IopRemoveHardErrorPacket @ 0x140500FE0
 * Callers:
 *     IopHardErrorThread @ 0x1408917C0 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C45B70);
  v1 = qword_140C45B60;
  v2 = v0;
  v3 = *(_QWORD *)qword_140C45B60;
  if ( *(__int64 **)(qword_140C45B60 + 8) != &qword_140C45B60 || *(_QWORD *)(v3 + 8) != qword_140C45B60 )
    __fastfail(3u);
  qword_140C45B60 = *(_QWORD *)qword_140C45B60;
  *(_QWORD *)(v3 + 8) = &qword_140C45B60;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_140C45B70);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v1;
}
