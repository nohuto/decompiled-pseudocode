/*
 * XREFs of MiTransientCombineAddress @ 0x140557D84
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403332BC (MiRaisedIrqlFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  if ( !dword_140C4E344 )
    return 0LL;
  v4 = ExAcquireSpinLockShared(&dword_140C4E340);
  v5 = (_QWORD *)qword_140C4E348;
  v6 = v4;
  while ( v5 )
  {
    if ( a1 > v5[3] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v5[3] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && v5[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E340);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5 != 0;
}
