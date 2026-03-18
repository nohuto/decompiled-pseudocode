/*
 * XREFs of MiSubsectionProtosCreated @ 0x14053C964
 * Callers:
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C254 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 *v12; // rcx
  int v13; // edx
  unsigned int v14; // edx
  __int64 *v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v21; // zf

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v12 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(a1 + 52);
  if ( a4 )
  {
    v14 = v13 | 0x40000000;
LABEL_7:
    *(_DWORD *)(a1 + 52) = v14;
    goto LABEL_8;
  }
  if ( a3 == *(_DWORD *)(a1 + 44) - (v13 & 0x3FFFFFFF) )
  {
    v14 = v13 & 0xBFFFFFFF;
    goto LABEL_7;
  }
LABEL_8:
  v12 = *(__int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
LABEL_9:
  if ( v12 )
  {
    do
    {
      v15 = (__int64 *)*v12;
      if ( v12 != (__int64 *)a2 )
      {
        v16 = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 3) = 1;
        if ( (v16 & 0x40) == 0 )
        {
          v17 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v17 = 2;
          *((_DWORD *)v12 + 3) = v17;
          KeSignalGate((__int64)(v12 + 2), 1LL, v10, v11);
        }
      }
      v12 = v15;
    }
    while ( v15 );
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
        v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v21 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
