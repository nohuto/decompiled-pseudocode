/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x14022C984
 * Callers:
 *     MmExtendSection @ 0x1406A377C (MmExtendSection.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     MiBuildWakeList @ 0x140287B04 (MiBuildWakeList.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  volatile LONG *v7; // rcx
  _QWORD *v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  bool v12; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(unsigned int *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = (_QWORD *)v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v10 = (_QWORD *)*v8;
      if ( v8 != (_QWORD *)a2 )
        result = KeSignalGate(v8 + 2);
      v8 = v10;
    }
    while ( v10 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 != 16 )
    return KeLeaveCriticalRegionThread(CurrentThread);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
