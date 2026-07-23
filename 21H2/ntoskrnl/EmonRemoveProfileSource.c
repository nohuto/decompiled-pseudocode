/*
 * XREFs of EmonRemoveProfileSource @ 0x1404D4670
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpRemoveProfileSourceFromList @ 0x1404BF36C (HalpRemoveProfileSourceFromList.c)
 */

__int64 __fastcall EmonRemoveProfileSource(int *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // ebp
  ULONG v6; // r8d
  int *v7; // r10
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  char v10; // si
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = 0;
  v19 = 0LL;
  if ( v1 <= 0x24 )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = 0;
  if ( ActiveProcessorCount )
  {
    v7 = KiProcessorIndexToNumberMappingTable;
    while ( ((*(_QWORD *)&a1[2 * ((unsigned int)*v7 >> 6) + 4] >> (*(_BYTE *)v7 & 0x3F)) & 1) == 0
         || !EmonNumberCounters )
    {
LABEL_11:
      ++v6;
      ++v7;
      if ( v6 >= ActiveProcessorCount )
        goto LABEL_12;
    }
    v8 = v6 * EmonNumberCounters;
    while ( *(_DWORD *)(EmonCounterStatus + 16LL * v8) == 3 || *(_DWORD *)(EmonCounterStatus + 16LL * v8 + 4) != v1 )
    {
      if ( ++v8 - v6 * EmonNumberCounters >= EmonNumberCounters )
        goto LABEL_11;
    }
    return 2147483665LL;
  }
  else
  {
LABEL_12:
    v9 = HalpAcquireHighLevelLock(&EmonProfileSourceDescriptorListLock);
    v10 = HalpRemoveProfileSourceFromList(a1, (_QWORD **)&EmonProfileSourceDescriptorListHead, &v19);
    KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = (unsigned int)(v9 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v10 )
    {
      v17 = v19;
      HalpMmAllocCtxFree(v11, *(_QWORD *)(v19 + 200));
      HalpMmAllocCtxFree(v18, v17);
      --EmonProfileSourceDescriptorCount;
    }
    else if ( !v19 )
    {
      return (unsigned int)-1073741823;
    }
    return v2;
  }
}
