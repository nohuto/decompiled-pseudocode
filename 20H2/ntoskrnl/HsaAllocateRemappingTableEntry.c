/*
 * XREFs of HsaAllocateRemappingTableEntry @ 0x1404E0660
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     HalpAcquireHighLevelLock @ 0x140378A90 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D3720 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D3770 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreeMemory @ 0x1404D39EC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D3A2C (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x1404E1C98 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E2F64 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 */

__int64 __fastcall HsaAllocateRemappingTableEntry(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        int a8,
        __int64 a9)
{
  char v12; // r12
  int PhysicalMemory; // ebx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 DeviceAperture; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // xmm1
  unsigned __int64 v28; // xmm0_8
  unsigned __int64 v29; // rdi
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  char v35; // [rsp+30h] [rbp-40h]
  unsigned int v36; // [rsp+34h] [rbp-3Ch]
  void *v37; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-30h] BYREF
  void *v39[2]; // [rsp+48h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-8h]
  char v42; // [rsp+B0h] [rbp+40h]

  if ( a3 && ((a3 - 1) & a3) == 0 )
  {
    v37 = 0LL;
    v12 = 0;
    v38 = 0LL;
    v42 = 0;
    PhysicalMemory = 0;
    v41 = 0LL;
    *(_OWORD *)v39 = 0LL;
    *(_OWORD *)Size = 0LL;
    if ( *(_DWORD *)(a1 + 160) != a4 )
      return (unsigned int)-1073741594;
    v14 = a7 & 7 | (8 * (a6 & 0x1F | (32 * (unsigned __int8)a5)));
    if ( a9 && *(_DWORD *)a9 == 1 && (*(_BYTE *)(a1 + 18) & 1) == 0 && (*(_BYTE *)(a9 + 10) & 4) == 0 )
      v14 = *(unsigned __int16 *)(a9 + 12);
    if ( _bittest(*(const signed __int32 **)(a1 + 192), v14) )
    {
      v15 = a2 & 0x1FF;
      v36 = HIWORD(a2);
      if ( HIWORD(a2) >= 0x20u || a2 >> 9 >= HsaTotalDeviceApertures || (unsigned int)(v15 + a3) > 0x200 )
      {
        PhysicalMemory = -1073741811;
        goto LABEL_44;
      }
      byte_140C487B8 = HalpAcquireHighLevelLock(&qword_140C487B0);
      DeviceAperture = HsaGetDeviceAperture(a2);
      v17 = DeviceAperture;
      if ( DeviceAperture && *(_QWORD *)(DeviceAperture + 16) )
      {
        *(_DWORD *)(DeviceAperture + 48) += a3;
        v35 = 0;
      }
      else
      {
        v35 = 1;
      }
      v18 = (unsigned __int8)byte_140C487B8;
      KxReleaseSpinLock(&qword_140C487B0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = (unsigned int)(v18 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
      if ( !v35 )
        return (unsigned int)PhysicalMemory;
      if ( v17 )
      {
LABEL_29:
        Size[0] = 0x20000002000LL;
        PhysicalMemory = ExtEnvAllocatePhysicalMemory(v19, 0x2000u, 0, MmCached, (LARGE_INTEGER *)v39, (__int64)&v39[1]);
        if ( PhysicalMemory < 0 )
          goto LABEL_49;
        memset(v39[1], 0, LODWORD(Size[0]));
        v12 = 1;
        PhysicalMemory = ExtEnvAllocateMemory(
                           v25,
                           4 * (unsigned int)(((unsigned __int64)HIDWORD(Size[0]) + 31) >> 5),
                           (__int64 *)&v38);
        if ( PhysicalMemory < 0 )
        {
LABEL_45:
          if ( v39[1] )
            ExtEnvFreePhysicalMemory(v15, v39[1], Size[0], 1u);
          if ( v38 )
            ExtEnvFreeMemory(v15, v38);
          goto LABEL_49;
        }
        LODWORD(Size[1]) = HIDWORD(Size[0]);
        v41 = v38;
        RtlClearBits((PRTL_BITMAP)&Size[1], 0, HIDWORD(Size[0]));
        byte_140C487B8 = HalpAcquireHighLevelLock(&qword_140C487B0);
        if ( !HsaDeviceApertureRanges[v36] )
        {
          HsaDeviceApertureRanges[v36] = (__int64)v37;
          v26 = HsaGetDeviceAperture(a2);
          HsaAllocatedDeviceApertures += 128;
          v17 = v26;
          v42 = 0;
        }
        if ( !*(_QWORD *)(v17 + 16) )
        {
          v27 = *(_OWORD *)Size;
          *(_OWORD *)(v17 + 8) = *(_OWORD *)v39;
          v28 = v41;
          *(_OWORD *)(v17 + 24) = v27;
          *(_QWORD *)(v17 + 40) = v28;
          *(_QWORD *)v17 = a1;
          *(_DWORD *)(v17 + 52) = v14;
          HsaUpdateRemappingTableInDeviceTableEntry(a1, v14, v39);
          v12 = 0;
        }
        *(_DWORD *)(v17 + 48) += a3;
        v29 = (unsigned __int8)byte_140C487B8;
        KxReleaseSpinLock(&qword_140C487B0);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v15 = (unsigned int)(v29 + 1);
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
              v24 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
        }
        __writecr8(v29);
LABEL_44:
        if ( v12 )
          goto LABEL_45;
LABEL_49:
        if ( v42 )
          ExtEnvFreeMemory(v15, (unsigned __int64)v37);
        return (unsigned int)PhysicalMemory;
      }
      PhysicalMemory = ExtEnvAllocateMemory(v19, 0x1C00u, (__int64 *)&v37);
      if ( PhysicalMemory >= 0 )
      {
        memset(v37, 0, 0x1C00uLL);
        v42 = 1;
        goto LABEL_29;
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
