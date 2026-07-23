/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x1404E37D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvCriticalFailure @ 0x1404D55DC (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D563C (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x1404E39C4 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E4CD4 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 */

__int64 __fastcall HsaFreeRemappingTableEntry(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bp
  __int64 v5; // rsi
  char *DeviceAperture; // rbx
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]
  unsigned __int64 v18; // [rsp+50h] [rbp-18h]

  v16 = 0LL;
  v3 = 0;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v5 = a1;
  if ( a2 >> 9 >= HsaAllocatedDeviceApertures || (a2 & 0x1FF) + a3 > 0x200 )
  {
    v7 = -1073741811;
  }
  else
  {
    DeviceAperture = (char *)HsaGetDeviceAperture(a2);
    if ( *(_QWORD *)DeviceAperture != v5 )
      return (unsigned int)-1073741594;
    byte_140C48958 = HalpAcquireHighLevelLock(&qword_140C48950);
    v8 = *((_DWORD *)DeviceAperture + 12) == a3;
    *((_DWORD *)DeviceAperture + 12) -= a3;
    if ( v8 )
    {
      HsaUpdateRemappingTableInDeviceTableEntry(v5, DeviceAperture + 52, &HsaSharedRemappingTable);
      v16 = *(_OWORD *)(DeviceAperture + 8);
      v18 = *((_QWORD *)DeviceAperture + 5);
      v17 = *(_OWORD *)(DeviceAperture + 24);
      memset(DeviceAperture, 0, 0x48uLL);
      v3 = 1;
    }
    v9 = (unsigned __int8)byte_140C48958;
    KxReleaseSpinLock(&qword_140C48950);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a1 = (unsigned int)(v9 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    v7 = 0;
  }
  if ( v3 )
  {
    if ( *((_QWORD *)&v16 + 1) == *((_QWORD *)&HsaSharedRemappingTable + 1) )
      ExtEnvCriticalFailure(a1, 0LL, 0LL, 0LL, 0LL);
    ExtEnvFreePhysicalMemory(a1, *((void **)&v16 + 1), v17, 1u);
    ExtEnvFreeMemory(v14, v18);
  }
  return v7;
}
