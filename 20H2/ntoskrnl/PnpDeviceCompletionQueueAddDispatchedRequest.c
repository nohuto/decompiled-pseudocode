/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14036D8BC
 * Callers:
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x14073AFA8 (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  BOOL v5; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C449C8);
  v4 = (_QWORD *)qword_140C44988;
  v5 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(__int64 **)qword_140C44988 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140C44990;
  qword_140C44988 = (__int64)a2;
  KxReleaseSpinLock(&qword_140C449C8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v5;
}
