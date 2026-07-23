/*
 * XREFs of EmonEnableMonitoring @ 0x1404D3730
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpGetProfileDescriptor @ 0x140377EC8 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     EmonConfigureCounter @ 0x14038B37C (EmonConfigureCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EmonAllocateCounter @ 0x1404D32A0 (EmonAllocateCounter.c)
 */

__int64 __fastcall EmonEnableMonitoring(int a1, int a2, unsigned int *a3)
{
  unsigned __int64 v6; // rsi
  _QWORD **v7; // rdx
  int ProfileDescriptor; // edi
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // r13
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  char v14; // dl
  unsigned int v15; // r9d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+20h] BYREF

  v22 = 0LL;
  v24 = 0;
  v23 = 0LL;
  v6 = HalpAcquireHighLevelLock(&EmonProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, (_QWORD **)&EmonProfileSourceDescriptorListHead, &v22);
  if ( ProfileDescriptor >= 0 )
  {
    v9 = v22;
    v10 = *(_DWORD *)(v22 + 216);
    if ( v10 != 37 && (int)HalpGetProfileDescriptor(v10, v7, &v23) >= 0 )
    {
      v9 = v23;
      v22 = v23;
    }
    v11 = v22;
    v12 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    if ( ((*(_QWORD *)(v22 + 8LL * (v12 >> 6) + 40) >> (v12 & 0x3F)) & 1) != 0 )
    {
      ProfileDescriptor = EmonAllocateCounter(a1, v9, a2, (int *)&v24);
      if ( ProfileDescriptor >= 0 )
      {
        v13 = v24;
        if ( a1 )
        {
          v15 = EmonNumberArchCounters;
          v14 = 0;
          *a3 = v24;
          if ( v13 >= v15 )
            *a3 = (v13 - v15) | 0x40000000;
        }
        else
        {
          v14 = 1;
        }
        EmonConfigureCounter(v13, 1, *(_DWORD *)(v11 + 24), *(_DWORD *)(v9 + 208), v14);
      }
    }
    else
    {
      ProfileDescriptor = -1073741637;
    }
  }
  KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return (unsigned int)ProfileDescriptor;
}
