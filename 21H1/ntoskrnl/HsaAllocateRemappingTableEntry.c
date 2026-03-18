/*
 * XREFs of HsaAllocateRemappingTableEntry @ 0x1404DCB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140375CF0 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404CFCD0 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404CFD20 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreeMemory @ 0x1404CFF9C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404CFFDC (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x1404DE148 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404DF414 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 */

__int64 __fastcall HsaAllocateRemappingTableEntry(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int16 a5,
        char a6,
        char a7)
{
  char v9; // r12
  int PhysicalMemory; // ebx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 DeviceAperture; // rax
  __int64 v14; // rdi
  char v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  ULONG v23; // r13d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int128 v26; // xmm1
  unsigned __int64 v27; // xmm0_8
  unsigned __int64 v28; // rdi
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned int v34; // [rsp+30h] [rbp-40h]
  void *v35; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-30h] BYREF
  void *v37[2]; // [rsp+48h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-8h]
  char v41; // [rsp+C0h] [rbp+50h]

  if ( a3 && ((a3 - 1) & a3) == 0 )
  {
    v35 = 0LL;
    v9 = 0;
    v36 = 0LL;
    v41 = 0;
    PhysicalMemory = 0;
    v39 = 0LL;
    *(_OWORD *)v37 = 0LL;
    *(_OWORD *)Size = 0LL;
    if ( *(_DWORD *)(a1 + 160) == a4
      && (v11 = a7 & 7 | (8 * (a6 & 0x1F | (32 * (unsigned __int8)a5))),
          _bittest(*(const signed __int32 **)(a1 + 192), v11)) )
    {
      v12 = a2 & 0x1FF;
      v34 = HIWORD(a2);
      if ( HIWORD(a2) >= 0x20u || a2 >> 9 >= HsaTotalDeviceApertures || (unsigned int)(v12 + a3) > 0x200 )
      {
        PhysicalMemory = -1073741811;
        goto LABEL_39;
      }
      byte_140C488D8 = HalpAcquireHighLevelLock(&qword_140C488D0);
      DeviceAperture = HsaGetDeviceAperture(a2);
      v14 = DeviceAperture;
      if ( DeviceAperture && *(_QWORD *)(DeviceAperture + 16) )
      {
        *(_DWORD *)(DeviceAperture + 48) += a3;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      v16 = (unsigned __int8)byte_140C488D8;
      KxReleaseSpinLock(&qword_140C488D0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = (unsigned int)(v16 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
      if ( !v15 )
        return (unsigned int)PhysicalMemory;
      if ( v14 )
      {
LABEL_24:
        Size[0] = 0x20000002000LL;
        PhysicalMemory = ExtEnvAllocatePhysicalMemory(v17, 0x2000u, 0, MmCached, (LARGE_INTEGER *)v37, (__int64)&v37[1]);
        if ( PhysicalMemory < 0 )
          goto LABEL_44;
        memset(v37[1], 0, LODWORD(Size[0]));
        v23 = HIDWORD(Size[0]);
        v9 = 1;
        PhysicalMemory = ExtEnvAllocateMemory(
                           v24,
                           4 * (unsigned int)(((unsigned __int64)HIDWORD(Size[0]) + 31) >> 5),
                           (__int64 *)&v36);
        if ( PhysicalMemory < 0 )
        {
LABEL_40:
          if ( v37[1] )
            ExtEnvFreePhysicalMemory(v12, v37[1], Size[0], 1u);
          if ( v36 )
            ExtEnvFreeMemory(v12, v36);
          goto LABEL_44;
        }
        v39 = v36;
        LODWORD(Size[1]) = v23;
        RtlClearBits((PRTL_BITMAP)&Size[1], 0, v23);
        byte_140C488D8 = HalpAcquireHighLevelLock(&qword_140C488D0);
        if ( !HsaDeviceApertureRanges[v34] )
        {
          HsaDeviceApertureRanges[v34] = (__int64)v35;
          v25 = HsaGetDeviceAperture(a2);
          HsaAllocatedDeviceApertures += 128;
          v14 = v25;
          v41 = 0;
        }
        if ( !*(_QWORD *)(v14 + 16) )
        {
          v26 = *(_OWORD *)Size;
          *(_OWORD *)(v14 + 8) = *(_OWORD *)v37;
          v27 = v39;
          *(_OWORD *)(v14 + 24) = v26;
          *(_QWORD *)(v14 + 40) = v27;
          *(_QWORD *)v14 = a1;
          *(_DWORD *)(v14 + 52) = v11;
          HsaUpdateRemappingTableInDeviceTableEntry(a1, v11, v37);
          v9 = 0;
        }
        *(_DWORD *)(v14 + 48) += a3;
        v28 = (unsigned __int8)byte_140C488D8;
        KxReleaseSpinLock(&qword_140C488D0);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v12 = (unsigned int)(v28 + 1);
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
              v22 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick((__int64)v30);
            }
          }
        }
        __writecr8(v28);
LABEL_39:
        if ( v9 )
          goto LABEL_40;
LABEL_44:
        if ( v41 )
          ExtEnvFreeMemory(v12, (unsigned __int64)v35);
        return (unsigned int)PhysicalMemory;
      }
      PhysicalMemory = ExtEnvAllocateMemory(v17, 0x1C00u, (__int64 *)&v35);
      if ( PhysicalMemory >= 0 )
      {
        memset(v35, 0, 0x1C00uLL);
        v41 = 1;
        goto LABEL_24;
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
    return (unsigned int)PhysicalMemory;
  }
  return 3221225485LL;
}
