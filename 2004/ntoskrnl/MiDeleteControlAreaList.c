/*
 * XREFs of MiDeleteControlAreaList @ 0x140524214
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403BA4A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = (volatile LONG *)(a1 + 1344);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(_QWORD **)(a1 + 1776);
    v5 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 1776) = *v4;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( !v4 )
      break;
    MiDeleteControlArea(v4);
  }
}
