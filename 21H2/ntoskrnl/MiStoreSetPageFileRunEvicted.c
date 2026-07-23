/*
 * XREFs of MiStoreSetPageFileRunEvicted @ 0x140242180
 * Callers:
 *     MiStoreEvictPageFile @ 0x140241F98 (MiStoreEvictPageFile.c)
 * Callees:
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreSetPageFileRunEvicted(__int64 a1, ULONG a2, unsigned int a3)
{
  volatile LONG *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v3 = (volatile LONG *)(a1 + 232);
  v4 = a3;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), a2, v4);
  v8 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 200) -= v4;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), a2, v4);
  *(_QWORD *)(a1 + 24) += v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
