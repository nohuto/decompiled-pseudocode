/*
 * XREFs of MiGetControlAreaPtes @ 0x14024959C
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiFindLastSubsection @ 0x140265FD4 (MiFindLastSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  volatile LONG *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 LastSubsection; // rax
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
    return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  v4 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  LastSubsection = MiFindLastSubsection(a1, 1LL);
  v7 = (*(unsigned int *)(LastSubsection + 36) | ((unsigned __int64)(*(_WORD *)(LastSubsection + 32) & 0xFFC0) << 26))
     + *(unsigned int *)(LastSubsection + 44)
     - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF);
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v7;
}
