/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x140562DD0
 * Callers:
 *     MiFreeLargePageCrossPartitionCharges @ 0x1403F7AD8 (MiFreeLargePageCrossPartitionCharges.c)
 *     MiGetSubsectionCharges @ 0x140555108 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14055B920 (MiReturnCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D38C (MiReturnCrossPartitionCombineCharges.c)
 *     MiCreateLargePfnList @ 0x14055E13C (MiCreateLargePfnList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r12
  __int64 v6; // rsi
  struct _KEVENT *v9; // rbp
  KIRQL v10; // al
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rdx
  __int64 i; // r8
  LONG result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  v4 = (volatile LONG *)(a1 + 1344);
  v6 = 32LL * a2;
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  *(_QWORD *)(v6 + a1 + 1896) -= a4;
  v11 = v10;
  v12 = *(_QWORD *)(v6 + a1 + 1896);
  if ( (a3 & 1) != 0 )
    *(_QWORD *)(v6 + a1 + 1928) -= a4;
  if ( !v12 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v13 = 0;
    v14 = (_QWORD *)(a1 + 1896);
    for ( i = 0LL; i < 7; ++i )
    {
      if ( *v14 )
        break;
      ++v13;
      v14 += 4;
    }
    if ( v13 == 7 )
      v9 = *(struct _KEVENT **)(a1 + 2120);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v19 = (result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v9 )
    return KeSetEvent(v9, 1, 0);
  return result;
}
