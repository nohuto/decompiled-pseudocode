/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x140382480
 * Callers:
 *     PfPowerActionNotify @ 0x1409939B4 (PfPowerActionNotify.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C501C8);
  if ( !P || dword_140C501D0 == P[41] )
  {
    v2 = qword_140C501B8;
    if ( qword_140C501B8 )
    {
      qword_140C501B8 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, dword_140C501C0, v4, v5);
    }
  }
  KxReleaseSpinLock(&qword_140C501C8);
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
