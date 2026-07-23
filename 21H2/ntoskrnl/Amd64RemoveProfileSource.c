/*
 * XREFs of Amd64RemoveProfileSource @ 0x1404DE260
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

__int64 __fastcall Amd64RemoveProfileSource(int *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // r11d
  ULONG v6; // r8d
  __int64 v7; // r9
  int *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  unsigned __int64 v11; // rbx
  char v12; // si
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = 0;
  v21 = 0LL;
  if ( v1 <= 0xBF )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = 0;
  if ( ActiveProcessorCount )
  {
    v7 = Amd64CounterStatus;
    v8 = KiProcessorIndexToNumberMappingTable;
    while ( ((*(_QWORD *)&a1[2 * ((unsigned int)*v8 >> 6) + 4] >> (*(_BYTE *)v8 & 0x3F)) & 1) == 0 )
    {
LABEL_10:
      ++v6;
      ++v8;
      v7 += 64LL;
      if ( v6 >= ActiveProcessorCount )
        goto LABEL_11;
    }
    v9 = 0;
    v10 = (_DWORD *)v7;
    while ( *v10 == 3 || v10[1] != v1 )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= 4 )
        goto LABEL_10;
    }
    return 2147483665LL;
  }
  else
  {
LABEL_11:
    v11 = HalpAcquireHighLevelLock(&Amd64ProfileSourceDescriptorListLock);
    v12 = HalpRemoveProfileSourceFromList(a1, (_QWORD **)&Amd64ProfileSourceDescriptorListHead, &v21);
    KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = (unsigned int)(v11 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    if ( v12 )
    {
      v19 = v21;
      HalpMmAllocCtxFree(v13, *(_QWORD *)(v21 + 200));
      HalpMmAllocCtxFree(v20, v19);
      --Amd64ProfileSourceDescriptorCount;
    }
    else if ( !v21 )
    {
      return (unsigned int)-1073741823;
    }
    return v2;
  }
}
