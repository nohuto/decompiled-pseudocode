/*
 * XREFs of MiCheckPageFileMapping @ 0x1403BF538
 * Callers:
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 result; // rax
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v13; // eax

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_140C4C800);
  v3 = *(_QWORD **)(a1 + 40);
  if ( v3 && (*v3 || v3[2]) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = 3221225549LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v5 >= 2u )
        {
          v6 = KeGetCurrentPrcb();
          v7 = v6->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
    }
    result = 0LL;
  }
  __writecr8(v2);
  return result;
}
