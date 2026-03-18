/*
 * XREFs of PfSnActiveTraceGetNext @ 0x14023A7E0
 * Callers:
 *     PfSnNameRemoveAll @ 0x1405EF480 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbp
  __int64 **v3; // rbx
  __int64 *i; // rbx
  __int64 *v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C50390);
  v3 = (__int64 **)&a1[2];
  if ( !a1 )
    v3 = (__int64 **)&qword_140C50388;
  for ( i = *v3; i != &PfSnGlobals; i = (__int64 *)i[1] )
  {
    v5 = i - 1;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 44) )
      goto LABEL_6;
  }
  v5 = 0LL;
LABEL_6:
  KxReleaseSpinLock(&qword_140C50390);
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
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 45);
  return v5;
}
