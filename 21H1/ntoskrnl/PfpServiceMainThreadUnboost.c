/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x14037FE80
 * Callers:
 *     PfPowerActionNotify @ 0x14098D1AC (PfPowerActionNotify.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C50288);
  if ( !P || dword_140C50290 == P[41] )
  {
    v2 = qword_140C50278;
    if ( qword_140C50278 )
    {
      qword_140C50278 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, (unsigned int)dword_140C50280, v4, v5);
    }
  }
  KxReleaseSpinLock(&qword_140C50288);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
