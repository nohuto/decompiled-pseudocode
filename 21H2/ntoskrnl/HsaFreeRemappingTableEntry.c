/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x140532200
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExtEnvCriticalFailure @ 0x14052266C (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x14052268C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1405226CC (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x140532404 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405336FC (HsaUpdateRemappingTableInDeviceTableEntry.c)
 */

__int64 __fastcall HsaFreeRemappingTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  char v6; // r14
  __int64 DeviceAperture; // rdi
  bool v8; // zf
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h]
  unsigned __int64 v20; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v6 = 0;
  if ( a2 >> 9 >= HsaAllocatedDeviceApertures || (a2 & 0x1FF) + a3 > 0x200 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    DeviceAperture = HsaGetDeviceAperture(a2);
    if ( *(_QWORD *)DeviceAperture == a1 )
    {
      byte_140C49C38 = HalpAcquireHighLevelLock(&qword_140C49C30);
      v8 = *(_DWORD *)(DeviceAperture + 48) == a3;
      *(_DWORD *)(DeviceAperture + 48) -= a3;
      if ( v8 )
      {
        HsaUpdateRemappingTableInDeviceTableEntry(a1, *(unsigned int *)(DeviceAperture + 52), &HsaSharedRemappingTable);
        v6 = 1;
        v19 = *(_OWORD *)(DeviceAperture + 24);
        v18 = *(_OWORD *)(DeviceAperture + 8);
        v9 = *(_QWORD *)(DeviceAperture + 40);
        *(_OWORD *)DeviceAperture = 0LL;
        *(_OWORD *)(DeviceAperture + 16) = 0LL;
        *(_OWORD *)(DeviceAperture + 32) = 0LL;
        *(_QWORD *)(DeviceAperture + 48) = 0LL;
        v20 = v9;
      }
      v10 = (unsigned __int8)byte_140C49C38;
      KxReleaseSpinLock(&qword_140C49C30);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = (unsigned int)(v10 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v8 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
      if ( v6 )
      {
        if ( *((_QWORD *)&v18 + 1) == *((_QWORD *)&HsaSharedRemappingTable + 1) )
          ExtEnvCriticalFailure(v11, 0LL, 0LL, 0LL, 0LL);
        ExtEnvFreePhysicalMemory(v11, *((void **)&v18 + 1), v19, 1u);
        ExtEnvFreeMemory(v16, v20);
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
  }
  return v3;
}
