/*
 * XREFs of MiKernelStackVaToStackNode @ 0x1403897A4
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402E4BE0 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&dword_140C4E9E0);
  v4 = (_QWORD *)qword_140C4E9D8;
  while ( v4 )
  {
    if ( a1 > v4[3] )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v4[4] )
      {
        v2 = v4;
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E9E0);
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
  return v2;
}
