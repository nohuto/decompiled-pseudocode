/*
 * XREFs of PopGetDozeTimerSource @ 0x14036C874
 * Callers:
 *     PopWnfAudioCallback @ 0x14076E220 (PopWnfAudioCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v6; // edx
  bool v7; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140C23284 )
    v0 = dword_140C23288;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  return v0;
}
