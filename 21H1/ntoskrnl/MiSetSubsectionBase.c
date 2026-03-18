/*
 * XREFs of MiSetSubsectionBase @ 0x140320A4C
 * Callers:
 *     MiExtendSection @ 0x140641F00 (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A24B0 (MiIncrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetSubsectionBase(__int64 *BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  ULONG_PTR v7; // r14
  volatile LONG *v8; // r15
  unsigned __int64 v9; // rbp
  int v10; // eax
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v3 = *BugCheckParameter2;
  v7 = 0LL;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v9 = ExAcquireSpinLockExclusive(v8);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
  {
    v7 = (ULONG_PTR)BugCheckParameter2;
    MiIncrementSubsectionViewCount(BugCheckParameter2, 0LL);
  }
  v10 = *((_DWORD *)BugCheckParameter2 + 12);
  *((_WORD *)BugCheckParameter2 + 16) |= 1u;
  v11 = v10 & 0x3FFFFFFF;
  BugCheckParameter2[1] = a2;
  *((_DWORD *)BugCheckParameter2 + 12) = v11;
  if ( v7 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v13 = v11 | 0x40000000;
    else
      v13 = v11 | 0x80000000;
    *((_DWORD *)BugCheckParameter2 + 12) = v13;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
