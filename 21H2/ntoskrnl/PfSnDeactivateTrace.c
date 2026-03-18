/*
 * XREFs of PfSnDeactivateTrace @ 0x14035F854
 * Callers:
 *     PfSnEndTrace @ 0x1407D9428 (PfSnEndTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     PfSnCancelTraceTimer @ 0x14035F934 (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x14035F9D4 (PfSnRemoveProcessTrace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  KxReleaseSpinLock(&qword_140C54690);
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
  ExReleaseRundownProtection(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  Count = a1[1].Count;
  v5 = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &a1[1] || *v5 != &a1[1] )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  KxReleaseSpinLock(&qword_140C54690);
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
