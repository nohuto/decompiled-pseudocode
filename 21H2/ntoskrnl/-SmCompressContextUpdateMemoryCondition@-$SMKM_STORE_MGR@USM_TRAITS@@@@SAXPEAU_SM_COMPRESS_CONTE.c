/*
 * XREFs of ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14024E85C
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14028A80C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition(
        PEX_SPIN_LOCK SpinLock,
        int a2,
        int a3)
{
  int v5; // edi
  ULONG ActiveProcessorCount; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  __int64 **i; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  if ( a2 == 4 )
    v5 = 7;
  else
    v5 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + a2);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount;
  if ( !a3 )
    goto LABEL_4;
  if ( v5 <= 7 )
  {
    v7 = 3 * ActiveProcessorCount;
LABEL_10:
    v8 = v7 >> 2;
    goto LABEL_11;
  }
  if ( v5 > 8 )
  {
    if ( v5 <= 10 )
      goto LABEL_10;
    v8 = ActiveProcessorCount >> 3;
  }
  else
  {
    v8 = ActiveProcessorCount >> 1;
  }
LABEL_11:
  if ( !v8 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  if ( v8 >= 0x10 )
    v8 = 16;
LABEL_5:
  v9 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 32) != v5 )
  {
    *((_DWORD *)SpinLock + 32) = v5;
    for ( i = (__int64 **)*((_QWORD *)SpinLock + 9); i != (__int64 **)(SpinLock + 18); i = (__int64 **)*i )
      KeSetActualBasePriorityThread(i[2], (unsigned int)v5);
  }
  *((_DWORD *)SpinLock + 22) = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
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
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
