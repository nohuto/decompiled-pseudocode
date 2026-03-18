/*
 * XREFs of EmonEnableMonitoring @ 0x140520330
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x14038A10C (HalpGetProfileDescriptor.c)
 *     EmonConfigureCounter @ 0x140399A14 (EmonConfigureCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EmonAllocateCounter @ 0x14051FE4C (EmonAllocateCounter.c)
 */

__int64 __fastcall EmonEnableMonitoring(int a1, int a2, _DWORD *a3, unsigned int *a4, int *a5)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int ProfileDescriptor; // edi
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // rbp
  unsigned int v16; // ecx
  int v17; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, v10, &v25);
  if ( ProfileDescriptor >= 0 )
  {
    v13 = v25;
    v14 = *(_DWORD *)(v25 + 312);
    if ( v14 != 37 && (int)HalpGetProfileDescriptor(v14, v11, &v26) >= 0 )
    {
      v13 = v26;
      v25 = v26;
    }
    v15 = v25;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v25 + 32), KeGetPcr()->Prcb.Number) )
    {
      ProfileDescriptor = EmonAllocateCounter(a1, v13, a2, (int *)&v24);
      if ( ProfileDescriptor >= 0 )
      {
        v16 = v24;
        v17 = v24;
        if ( v24 >= EmonNumberArchCounters )
          v17 = (v24 - EmonNumberArchCounters) | 0x40000000;
        *a5 = v17;
        *a4 = v16;
        *a3 = 1;
        EmonConfigureCounter(v16, 1, *(unsigned int *)(v15 + 24), *(_DWORD *)(v13 + 304), a1 == 0);
      }
    }
    else
    {
      ProfileDescriptor = -1073741637;
    }
  }
  KxReleaseSpinLock(&HalpProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return (unsigned int)ProfileDescriptor;
}
