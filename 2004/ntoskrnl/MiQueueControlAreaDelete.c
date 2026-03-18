/*
 * XREFs of MiQueueControlAreaDelete @ 0x14052516C
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14025DF5C (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v2 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  *(_QWORD *)a1 = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1344));
  *(_QWORD *)a1 = *(_QWORD *)(v2 + 1776);
  *(_QWORD *)(v2 + 1776) = a1;
  v4 = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return KeSetEvent((PRKEVENT)(v2 + 1752), 0, 0);
}
