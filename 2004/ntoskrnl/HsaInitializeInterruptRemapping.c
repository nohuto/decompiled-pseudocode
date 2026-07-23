/*
 * XREFs of HsaInitializeInterruptRemapping @ 0x1409A75E8
 * Callers:
 *     HsaInitializeIommu @ 0x1409A7790 (HsaInitializeIommu.c)
 * Callees:
 *     RtlInitializeBitMap @ 0x140340CE0 (RtlInitializeBitMap.c)
 *     ExtEnvZeroMemory @ 0x14036B0E0 (ExtEnvZeroMemory.c)
 *     HalMapIoSpace @ 0x1403AFD30 (HalMapIoSpace.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HalpGetIrtEntryCount @ 0x1404CC638 (HalpGetIrtEntryCount.c)
 *     ExtEnvAllocateMemory @ 0x1404D0180 (ExtEnvAllocateMemory.c)
 *     ExtEnvClearBits @ 0x1404D0414 (ExtEnvClearBits.c)
 *     ExtEnvInitializeSpinLock @ 0x1404D05C4 (ExtEnvInitializeSpinLock.c)
 */

__int64 __fastcall HsaInitializeInterruptRemapping(__int64 a1)
{
  int Memory; // edi
  int v3; // eax
  LARGE_INTEGER v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  _RTL_BITMAP *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rbx
  PULONG BitMapBuffer; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  Memory = 0;
  BitMapBuffer = 0LL;
  v3 = *(_DWORD *)(a1 + 176);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !*((_QWORD *)&HsaSharedRemappingTable + 1) )
      {
        HIDWORD(NumberOfBytes) = *(_DWORD *)(a1 + 180);
        LODWORD(NumberOfBytes) = (16 * HIDWORD(NumberOfBytes) + 4095) & 0xFFFFF000;
        v4.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD))HsaPhysicalMemoryApi)(
                        -1LL,
                        (unsigned int)NumberOfBytes >> 12);
        *(LARGE_INTEGER *)&HsaSharedRemappingTable = v4;
        if ( v4.QuadPart
          && (v5 = HalMapIoSpace(v4, (unsigned int)NumberOfBytes, MmCached),
              (*((_QWORD *)&HsaSharedRemappingTable + 1) = v5) != 0LL) )
        {
          memset(v5, 0, (unsigned int)NumberOfBytes);
          Memory = ExtEnvAllocateMemory(
                     v6,
                     4 * ((unsigned int)(*(_DWORD *)(a1 + 180) + 31) >> 5),
                     (__int64 *)&BitMapBuffer);
          if ( Memory >= 0 )
          {
            RtlInitializeBitMap((PRTL_BITMAP)(&NumberOfBytes + 1), BitMapBuffer, *(_DWORD *)(a1 + 180));
            ExtEnvClearBits(v7, 0, *(_DWORD *)(a1 + 180));
            HsaTotalDeviceApertures = (unsigned int)HalpGetIrtEntryCount() >> 9;
            Memory = ExtEnvAllocateMemory(v8, 0x1C00u, (__int64 *)&v12);
            if ( Memory >= 0 )
            {
              v9 = (char *)v12;
              ExtEnvZeroMemory(v12, 0x1C00uLL);
              ExtEnvInitializeSpinLock(HsaDeviceApertureLock);
              HsaAllocatedDeviceApertures = 128;
              HsaDeviceApertureRanges[0] = (__int64)v9;
              *(_OWORD *)(v9 + 8) = HsaSharedRemappingTable;
              *(_OWORD *)(v9 + 24) = *(_OWORD *)&NumberOfBytes;
              *((_QWORD *)v9 + 5) = qword_140C48780;
              *((_DWORD *)v9 + 12) = 1;
              *((_DWORD *)v9 + 13) = -1;
            }
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)Memory;
}
