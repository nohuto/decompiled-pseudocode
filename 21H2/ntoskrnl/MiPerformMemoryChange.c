/*
 * XREFs of MiPerformMemoryChange @ 0x1405835E0
 * Callers:
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1403C315C (MiInitializeNonPagedPoolThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, int a5, __int64 ***a6)
{
  KIRQL v10; // al
  void *v11; // r9
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // rax
  bool v14; // zf
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int64 **i; // rdx
  __int64 v23; // r8

  v10 = ExAcquireSpinLockExclusive(&dword_140C55048);
  v11 = *a3;
  v12 = v10;
  v13 = a2 - 1 + a1;
  v14 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v15 = 0LL;
  v16 = qword_140C54FA0;
  if ( v14 )
    v15 = MmPhysicalMemoryBlock;
  *a3 = v15;
  v17 = *a4;
  MmPhysicalMemoryBlock = v11;
  v14 = (*(_QWORD *)(v16 - 8))-- == 1LL;
  v18 = 0LL;
  if ( v14 )
    v18 = qword_140C54FA0;
  *a4 = v18;
  qword_140C54FA0 = v17;
  if ( (a5 & 1) != 0 )
  {
    if ( v13 > qword_140C590C8 )
      qword_140C590C8 = a2 - 1 + a1;
    if ( (a5 & 0x100008) == 0 )
    {
      qword_140C590D0 += a2;
LABEL_14:
      byte_140C54F8C = 1;
    }
  }
  else
  {
    if ( v13 == qword_140C590C8 )
      qword_140C590C8 = a1 - 1;
    if ( (a5 & 0x100000) == 0 )
    {
      qword_140C590D0 -= a2;
      goto LABEL_14;
    }
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( (a5 & 0x100000) != 0 )
  {
    for ( i = *a6; i != (__int64 **)a6; i = (__int64 **)*i )
    {
      v23 = *((unsigned int *)i + 9) + 4LL * *((unsigned int *)i + 8);
      result = (__int64)i[3];
      if ( (a5 & 1) != 0 )
        qword_140C52150[v23] += result;
      else
        qword_140C52150[v23] -= result;
    }
  }
  return result;
}
