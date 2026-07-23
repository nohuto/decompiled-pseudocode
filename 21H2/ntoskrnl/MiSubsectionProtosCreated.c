/*
 * XREFs of MiSubsectionProtosCreated @ 0x1405426C4
 * Callers:
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541FB4 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v9; // rsi
  __int64 *v10; // rcx
  int v11; // edx
  unsigned int v12; // edx
  __int64 *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v10 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
    goto LABEL_9;
  }
  v11 = *(_DWORD *)(a1 + 52);
  if ( a4 )
  {
    v12 = v11 | 0x40000000;
LABEL_7:
    *(_DWORD *)(a1 + 52) = v12;
    goto LABEL_8;
  }
  if ( a3 == *(_DWORD *)(a1 + 44) - (v11 & 0x3FFFFFFF) )
  {
    v12 = v11 & 0xBFFFFFFF;
    goto LABEL_7;
  }
LABEL_8:
  v10 = *(__int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
LABEL_9:
  if ( v10 )
  {
    do
    {
      v13 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v14 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v14 & 0x40) == 0 )
        {
          v15 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v15 = 2;
          *((_DWORD *)v10 + 3) = v15;
          KeSignalGate((__int64)(v10 + 2), 1);
        }
      }
      v10 = v13;
    }
    while ( v13 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
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
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
