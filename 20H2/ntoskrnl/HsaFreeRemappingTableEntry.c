/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x1404E1AA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140378A90 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExtEnvCriticalFailure @ 0x1404D39CC (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x1404D39EC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D3A2C (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x1404E1C98 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E2F64 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 */

__int64 __fastcall HsaFreeRemappingTableEntry(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bp
  __int64 v5; // rsi
  __int64 DeviceAperture; // rbx
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  unsigned __int64 v19; // [rsp+50h] [rbp-18h]

  v17 = 0LL;
  v3 = 0;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v5 = a1;
  if ( a2 >> 9 >= HsaAllocatedDeviceApertures || (a2 & 0x1FF) + a3 > 0x200 )
  {
    v7 = -1073741811;
  }
  else
  {
    DeviceAperture = HsaGetDeviceAperture(a2);
    if ( *(_QWORD *)DeviceAperture != v5 )
      return (unsigned int)-1073741594;
    byte_140C487B8 = HalpAcquireHighLevelLock(&qword_140C487B0);
    v8 = *(_DWORD *)(DeviceAperture + 48) == a3;
    *(_DWORD *)(DeviceAperture + 48) -= a3;
    if ( v8 )
    {
      HsaUpdateRemappingTableInDeviceTableEntry(v5, *(unsigned int *)(DeviceAperture + 52), &HsaSharedRemappingTable);
      v3 = 1;
      v18 = *(_OWORD *)(DeviceAperture + 24);
      v17 = *(_OWORD *)(DeviceAperture + 8);
      v9 = *(_QWORD *)(DeviceAperture + 40);
      *(_OWORD *)DeviceAperture = 0LL;
      *(_OWORD *)(DeviceAperture + 16) = 0LL;
      *(_OWORD *)(DeviceAperture + 32) = 0LL;
      *(_QWORD *)(DeviceAperture + 48) = 0LL;
      v19 = v9;
    }
    v10 = (unsigned __int8)byte_140C487B8;
    KxReleaseSpinLock(&qword_140C487B0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a1 = (unsigned int)(v10 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v8 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    v7 = 0;
  }
  if ( v3 )
  {
    if ( *((_QWORD *)&v17 + 1) == *((_QWORD *)&HsaSharedRemappingTable + 1) )
      ExtEnvCriticalFailure(a1, 0LL, 0LL, 0LL, 0LL);
    ExtEnvFreePhysicalMemory(a1, *((void **)&v17 + 1), v18, 1u);
    ExtEnvFreeMemory(v15, v19);
  }
  return v7;
}
