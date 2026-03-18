/*
 * XREFs of PfSnDeactivateTrace @ 0x14025C31C
 * Callers:
 *     PfSnEndTrace @ 0x14065AA98 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     PfSnCancelTraceTimer @ 0x14025C3FC (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x14025C49C (PfSnRemoveProcessTrace.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  int v14; // eax
  _DWORD *v15; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  KxReleaseSpinLock(&SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection_0(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Count = a1[1].Count;
  v5 = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &a1[1] || *v5 != &a1[1] )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  KxReleaseSpinLock(&SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v15 = v13->SchedulerAssist;
        v11 = (v14 & v15[5]) == 0;
        v15[5] &= v14;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(v3);
  return 0LL;
}
