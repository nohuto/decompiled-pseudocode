/*
 * XREFs of EmonRemoveProfileSource @ 0x140521670
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpRemoveProfileSourceFromList @ 0x14050BA34 (HalpRemoveProfileSourceFromList.c)
 */

__int64 __fastcall EmonRemoveProfileSource(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // r14d
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v20 = 0LL;
  if ( v1 <= 0x24 )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = 0;
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(a1 + 8), v6) )
      {
        v7 = HalpCounterStatus;
        if ( HalpProfileInterface != &DefaultProfileInterface )
          v7 = HalpCounterStatus + 8LL * (unsigned int)(v6 * HalpNumberOfCounters);
        v8 = 0;
        if ( EmonNumberCounters )
          break;
      }
LABEL_11:
      if ( ++v6 >= ActiveProcessorCount )
        goto LABEL_12;
    }
    while ( *(_DWORD *)(*(_QWORD *)v7 + 24LL) == 3 || *(_DWORD *)(*(_QWORD *)v7 + 32LL) != v1 )
    {
      ++v8;
      v7 += 8LL;
      if ( v8 >= EmonNumberCounters )
        goto LABEL_11;
    }
    return 2147483665LL;
  }
  else
  {
LABEL_12:
    v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
    v11 = HalpRemoveProfileSourceFromList((int *)a1, v10, &v20);
    KxReleaseSpinLock(&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = (unsigned int)(v9 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v11 )
    {
      v18 = v20;
      HalpMmAllocCtxFree(v12, *(_QWORD *)(v20 + 296));
      HalpMmAllocCtxFree(v19, v18);
      --HalpProfileSourceDescriptorCount;
    }
    else if ( !v20 )
    {
      return (unsigned int)-1073741823;
    }
    return v2;
  }
}
