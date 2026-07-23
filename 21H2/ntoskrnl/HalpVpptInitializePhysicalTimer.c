/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x1404C0CE4
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x140386B4C (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExtEnvCriticalFailure @ 0x1404D55DC (ExtEnvCriticalFailure.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  int v0; // ecx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  byte_140C4A738 = HalpAcquireHighLevelLock(&qword_140C4A730);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 277, HalpVpptPhysicalTimer, (int)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v3 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
  v4 = (unsigned __int8)byte_140C4A738;
  v5 = v3;
  KxReleaseSpinLock(&qword_140C4A730);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
