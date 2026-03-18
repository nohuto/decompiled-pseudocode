/*
 * XREFs of MiReleaseImageSection @ 0x1402C083C
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  KIRQL v4; // al
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v2 = *(_QWORD *)(a1 + 40);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v5 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_DWORD *)(a2 + 56) &= ~2u;
  v6 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  KeAbPostRelease(v2 + 16);
  return v5;
}
