/*
 * XREFs of HsaAllocateRemappingTableEntry @ 0x1404E2300
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5380 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D563C (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x1404E39C4 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E4CD4 (HsaUpdateRemappingTableInDeviceTableEntry.c)
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
  unsigned int v14; // r8d
  __int16 v15; // cx
  const signed __int32 *v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // rcx
  __int64 DeviceAperture; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int128 v31; // xmm1
  unsigned __int64 v32; // xmm0_8
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  char v39; // [rsp+30h] [rbp-50h]
  void *v40; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-40h] BYREF
  __int64 v42; // [rsp+48h] [rbp-38h] BYREF
  int v43; // [rsp+50h] [rbp-30h]
  void *v44[2]; // [rsp+58h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-8h]
  char v47; // [rsp+C0h] [rbp+40h]

  LODWORD(v42) = 0;
  if ( a3 && ((a3 - 1) & a3) == 0 )
  {
    v40 = 0LL;
    v12 = 0;
    v41 = 0LL;
    v47 = 0;
    PhysicalMemory = 0;
    v46 = 0LL;
    *(_OWORD *)v44 = 0LL;
    *(_OWORD *)Size = 0LL;
    if ( *(_DWORD *)(a1 + 160) != a4 )
      return (unsigned int)-1073741594;
    if ( a9 && *(_DWORD *)a9 == 1 && (*(_BYTE *)(a1 + 18) & 1) == 0 )
    {
      v14 = *(unsigned __int16 *)(a9 + 12);
      v15 = *(_WORD *)(a9 + 10) & 3;
      HIDWORD(v42) = 1 << (*(_WORD *)(a9 + 10) & 3);
      v43 = 1 << (3 - v15);
    }
    else
    {
      HIDWORD(v42) = 1;
      v14 = a7 & 7 | (8 * (a6 & 0x1F | (32 * (unsigned __int8)a5)));
      v43 = 0;
    }
    v16 = *(const signed __int32 **)(a1 + 192);
    LODWORD(v42) = v14;
    if ( _bittest(v16, v14) )
    {
      v17 = HIWORD(a2);
      v18 = a2 & 0x1FF;
      if ( HIWORD(a2) >= 0x20u || a2 >> 9 >= HsaTotalDeviceApertures || (unsigned int)(v18 + a3) > 0x200 )
      {
        PhysicalMemory = -1073741811;
        goto LABEL_44;
      }
      byte_140C48958 = HalpAcquireHighLevelLock(&qword_140C48950);
      DeviceAperture = HsaGetDeviceAperture(a2);
      v20 = DeviceAperture;
      if ( DeviceAperture && *(_QWORD *)(DeviceAperture + 16) )
      {
        *(_DWORD *)(DeviceAperture + 48) += a3;
        v39 = 0;
      }
      else
      {
        v39 = 1;
      }
      v21 = (unsigned __int8)byte_140C48958;
      KxReleaseSpinLock(&qword_140C48950);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = (unsigned int)(v21 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v21);
      if ( !v39 )
        return (unsigned int)PhysicalMemory;
      if ( v20 )
      {
LABEL_29:
        Size[0] = 0x20000002000LL;
        PhysicalMemory = ExtEnvAllocatePhysicalMemory(v22, 0x2000u, 0, MmCached, (LARGE_INTEGER *)v44, (__int64)&v44[1]);
        if ( PhysicalMemory < 0 )
          goto LABEL_49;
        memset(v44[1], 0, LODWORD(Size[0]));
        v12 = 1;
        PhysicalMemory = ExtEnvAllocateMemory(
                           v28,
                           4 * (unsigned int)(((unsigned __int64)HIDWORD(Size[0]) + 31) >> 5),
                           (__int64 *)&v41);
        if ( PhysicalMemory < 0 )
        {
LABEL_45:
          if ( v44[1] )
            ExtEnvFreePhysicalMemory(v18, v44[1], Size[0], 1u);
          if ( v41 )
            ExtEnvFreeMemory(v18, v41);
          goto LABEL_49;
        }
        LODWORD(Size[1]) = HIDWORD(Size[0]);
        v46 = v41;
        RtlClearBits((PRTL_BITMAP)&Size[1], 0, HIDWORD(Size[0]));
        byte_140C48958 = HalpAcquireHighLevelLock(&qword_140C48950);
        if ( !HsaDeviceApertureRanges[v17] )
        {
          HsaDeviceApertureRanges[v17] = (__int64)v40;
          v29 = HsaGetDeviceAperture(a2);
          HsaAllocatedDeviceApertures += 128;
          v20 = v29;
          v47 = 0;
        }
        if ( !*(_QWORD *)(v20 + 16) )
        {
          v30 = v43;
          v31 = *(_OWORD *)Size;
          *(_OWORD *)(v20 + 8) = *(_OWORD *)v44;
          v32 = v46;
          *(_OWORD *)(v20 + 24) = v31;
          *(_QWORD *)(v20 + 40) = v32;
          *(_QWORD *)(v20 + 52) = v42;
          *(_DWORD *)(v20 + 60) = v30;
          *(_QWORD *)v20 = a1;
          HsaUpdateRemappingTableInDeviceTableEntry(a1, &v42, v44);
          v12 = 0;
        }
        *(_DWORD *)(v20 + 48) += a3;
        v33 = (unsigned __int8)byte_140C48958;
        KxReleaseSpinLock(&qword_140C48950);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v18 = (unsigned int)(v33 + 1);
              v36 = v35->SchedulerAssist;
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
              v27 = (v37 & v36[5]) == 0;
              v36[5] &= v37;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick((__int64)v35);
            }
          }
        }
        __writecr8(v33);
LABEL_44:
        if ( v12 )
          goto LABEL_45;
LABEL_49:
        if ( v47 )
          ExtEnvFreeMemory(v18, (unsigned __int64)v40);
        return (unsigned int)PhysicalMemory;
      }
      PhysicalMemory = ExtEnvAllocateMemory(v22, 0x2400u, (__int64 *)&v40);
      if ( PhysicalMemory >= 0 )
      {
        memset(v40, 0, 0x2400uLL);
        v47 = 1;
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
