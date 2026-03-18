/*
 * XREFs of MiPerformMemoryChange @ 0x14052CF38
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1403B4A80 (MiInitializeNonPagedPoolThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, char a5)
{
  KIRQL v9; // al
  void *v10; // r9
  unsigned __int64 v11; // rsi
  bool v12; // zf
  void *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  ULONG_PTR v17; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  v9 = ExAcquireSpinLockExclusive(&dword_140C50CC8);
  v10 = *a3;
  v11 = v9;
  v12 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v13 = 0LL;
  v14 = qword_140C50C20;
  if ( v12 )
    v13 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v10;
  *a3 = v13;
  v12 = (*(_QWORD *)(v14 - 8))-- == 1LL;
  v15 = 0LL;
  v16 = *a4;
  if ( v12 )
    v15 = qword_140C50C20;
  v17 = a1 + a2 - 1;
  *a4 = v15;
  qword_140C50C20 = v16;
  if ( (a5 & 1) == 0 )
  {
    if ( v17 == BugCheckParameter3 )
      BugCheckParameter3 = a1 - 1;
    qword_140C52710 -= a2;
    goto LABEL_13;
  }
  if ( v17 > BugCheckParameter3 )
    BugCheckParameter3 = a1 + a2 - 1;
  if ( (a5 & 4) == 0 )
  {
    qword_140C52710 += a2;
LABEL_13:
    byte_140C50C0C = 1;
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50CC8);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
