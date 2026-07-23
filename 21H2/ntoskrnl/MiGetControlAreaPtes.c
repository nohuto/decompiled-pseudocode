/*
 * XREFs of MiGetControlAreaPtes @ 0x140320C4C
 * Callers:
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiFindLastSubsection @ 0x14021E97C (MiFindLastSubsection.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  LastSubsection = MiFindLastSubsection(a1, 1);
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
