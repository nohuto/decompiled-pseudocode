/*
 * XREFs of MiFinishPageFileExtension @ 0x1405435F0
 * Callers:
 *     MiAttemptPageFileExtension @ 0x1408D0304 (MiAttemptPageFileExtension.c)
 * Callees:
 *     RtlClearBits @ 0x140206E00 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140267EB0 (MiCoalescePageFileBitmapsCache.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x1403BFA7C (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiFinishPageFileExtension(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  ULONG v9; // edi
  unsigned __int64 v10; // r15
  char v11; // bl
  LONG result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v3 = (volatile LONG *)(a2 + 232);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 232));
  v8 = *(_QWORD *)(a2 + 112);
  v9 = *(_DWORD *)a2;
  v10 = v7;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v8 + 24), v9, a3);
  LOBYTE(v8) = *(_BYTE *)(a2 + 206);
  *(_QWORD *)a2 += a3;
  *(_QWORD *)(a2 + 24) += a3;
  *(_QWORD *)(a2 + 48) += a3;
  v11 = v8 & 1;
  ++*(_DWORD *)(a2 + 128);
  MiCoalescePageFileBitmapsCache(a2, 0, v9);
  MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 248), 0LL, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v11 == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
  return result;
}
