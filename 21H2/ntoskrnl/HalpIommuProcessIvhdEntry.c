/*
 * XREFs of HalpIommuProcessIvhdEntry @ 0x1404E1D20
 * Callers:
 *     HalpIommuHsaDiscover @ 0x140A3AD14 (HalpIommuHsaDiscover.c)
 * Callees:
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403ACDC0 (HalRegisterPermanentAddressUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     HalpHsaAllocateReservedDomainList @ 0x1404E1750 (HalpHsaAllocateReservedDomainList.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E1A14 (HalpIommuProcessDeviceEntries.c)
 *     HsaProcessIvmd @ 0x1404E4308 (HsaProcessIvmd.c)
 *     ExtEnvRegisterIommu @ 0x140A8D9F0 (ExtEnvRegisterIommu.c)
 */

int __fastcall HalpIommuProcessIvhdEntry(__int64 a1, __int64 a2, char *a3)
{
  char v6; // di
  bool v7; // cf
  __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // cx
  __int16 v11; // cx
  __int16 v12; // r15
  int result; // eax
  __int64 v14; // rcx
  char *v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // edx
  unsigned int *v19; // rbx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v26; // [rsp+28h] [rbp-D8h] BYREF
  _OWORD *v27; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v28[14]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[18]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[28]; // [rsp+140h] [rbp+40h] BYREF
  char v31; // [rsp+238h] [rbp+138h] BYREF
  char v32; // [rsp+240h] [rbp+140h] BYREF
  void *v33; // [rsp+248h] [rbp+148h] BYREF

  v6 = 0;
  v25 = 0LL;
  memset(v29, 0, 0x88uLL);
  memset(v30, 0, 0xA8uLL);
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v27 = 0LL;
  v33 = 0LL;
  v26 = 0LL;
  *a3 = 0;
  v32 = 0;
  v31 = 0;
  if ( v7 || *(_BYTE *)a2 != 17 && *(_BYTE *)a2 != 64 )
    return -1073741811;
  v8 = (__int64 *)HsaIvhdList;
  if ( (__int64 *)HsaIvhdList != &HsaIvhdList )
  {
    while ( v8[2] != *(_QWORD *)(a2 + 8) )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == &HsaIvhdList )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v9 = *(_QWORD *)(a2 + 24);
  v10 = (4 * *(_WORD *)(a2 + 24)) & 8 | (16 * ((v9 >> 45) & 1)) | 1;
  if ( (*(_BYTE *)(a2 + 1) & 0x10) == 0 || (v9 & 0x600000000008LL) != 0x600000000008LL )
    v10 = (4 * *(_WORD *)(a2 + 24)) & 8 | (16 * ((v9 >> 45) & 1));
  v11 = v10 | 4;
  if ( (v11 & 1) == 0
    || (v9 & 0x12) != 0x12
    || (v9 & 0xC000) == 0
    || (v9 & 0x20000000000LL) == 0
    || (BYTE4(v9) & 0x1Fu) < 8 )
  {
    v11 &= ~4u;
  }
  v12 = v11 | 2;
  if ( (v9 & 0x84) != 0x84 )
    v12 = v11;
  if ( (v12 & 3) == 0 )
    return 0;
  result = HsaProcessIvmd(a2, a1 + *(unsigned int *)(a1 + 4), &v31, &v26);
  if ( result >= 0 )
  {
    result = ExtEnvAllocateMemory(v14, 0xF0u, (__int64 *)&v33);
    if ( result >= 0 )
    {
      v15 = (char *)v33;
      memset(v33, 0, 0xF0uLL);
      memset(&v29[2], 0, 0x78uLL);
      *((_QWORD *)v15 + 29) = v15 + 224;
      *((_QWORD *)v15 + 28) = v15 + 224;
      v15[16] = *(_BYTE *)(a2 + 1);
      *((_WORD *)v15 + 9) = v12;
      *((_QWORD *)v15 + 1) = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v15 + 40) = *(unsigned __int16 *)(a2 + 16);
      *((_DWORD *)v15 + 41) = *(unsigned __int8 *)(a2 + 5);
      *((_DWORD *)v15 + 42) ^= (*((_DWORD *)v15 + 42) ^ (*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1F;
      v16 = *((_DWORD *)v15 + 42) ^ ((unsigned __int8)*((_DWORD *)v15 + 42) ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0u;
      *((_DWORD *)v15 + 42) = v16;
      result = ExtEnvAllocateMemory(v16, 0x2000u, &v25);
      if ( result >= 0 )
      {
        *((_QWORD *)v15 + 24) = v25;
        *((_DWORD *)v15 + 46) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v15 + 184), 0, 0x10000u);
        *((_QWORD *)v15 + 19) = 0LL;
        result = HalpIommuProcessDeviceEntries((__int64)v15, a2, &v32);
        if ( result >= 0 )
        {
          result = HalRegisterPermanentAddressUsage(*(LARGE_INTEGER *)(v15 + 8), 0x2040u);
          if ( result >= 0 )
          {
            memset(v28, 0, 0x68uLL);
            HIDWORD(v28[9]) = *((_DWORD *)v15 + 40);
            v17 = 2076;
            v28[10] = *(_QWORD *)(v15 + 164);
            v28[7] = v29;
            v28[8] = v30;
            v29[0] = HsaConfigureSettings;
            v29[1] = HsaInitializeIommu;
            v28[0] = 0x6800000001LL;
            v28[1] = v15;
            v28[2] = 0x81C00000000LL;
            LODWORD(v28[9]) = 1;
            LODWORD(v28[12]) = 16;
            if ( (v12 & 1) != 0 )
            {
              v29[4] = HsaCreateDevice;
              v29[5] = IvtDeleteDevice;
              v30[0] = HsaFindDevice;
              v30[5] = HsaFlushTb;
              v30[6] = HsaFlushDeviceTbOnly;
              v30[19] = HsaQueryAcpiDeviceMapping;
              v30[20] = HsaGetRidAcpiMapCount;
              if ( !v31 )
              {
                v17 = 2332;
                v30[17] = HsaEnumerateIvmdDevices;
                v30[18] = HsaProcessReservedDomains;
                v29[7] = HsaAttachDeviceDomain;
                v29[8] = HsaDetachDeviceDomain;
              }
              v17 |= 0x3000u;
              v29[9] = HsaFlushDomainTb;
              v29[10] = xHalTimerWatchdogStop;
              v29[11] = xHalTimerWatchdogStop;
              HIDWORD(v28[2]) = v17;
            }
            v18 = 0x40000;
            if ( (unsigned int)((1 << ((BYTE4(v9) & 0x1F) + 1)) - 1) < 0x40000 )
              v18 = (1 << ((BYTE4(v9) & 0x1F) + 1)) - 1;
            LODWORD(v28[11]) = v18;
            if ( (v12 & 4) != 0 )
            {
              v17 |= 0x20u;
              v30[1] = HsaSetDeviceSvmCapabilities;
              v30[2] = HsaSetDevicePasidTable;
              v30[3] = HsaGrowPasidTable;
              v30[4] = HsaSetPasidAddressSpace;
              v30[7] = HsaDismissPageFault;
              v30[8] = &HsaGetPageFault;
              v30[14] = HsaMarkHiberRegions;
              HIDWORD(v28[2]) = v17;
            }
            if ( (v12 & 2) != 0 )
            {
              v29[14] = HsaUpdateRemappingTableEntry;
              v17 = v17 & 0xFFFFFFAF | 0x40;
              HIDWORD(v28[2]) = v17;
              v29[15] = HsaInvalidateRemappingTableEntry;
              v29[16] = HsaUpdateRemappingDestination;
              v29[12] = HsaAllocateRemappingTableEntry;
              v29[13] = HsaFreeRemappingTableEntry;
            }
            if ( (v12 & 4) != 0 )
            {
              v30[9] = HsaSetMessageInterruptRouting;
              v30[10] = HsaEnableInterrupt;
              v30[11] = HsaDisableInterrupt;
              v30[12] = HsaHandleInterrupt;
              HIDWORD(v28[2]) = v17 | 2;
            }
            v19 = v26;
            v20 = *v26;
            HIDWORD(v28[11]) = 65534 - *v26;
            result = HalpHsaAllocateReservedDomainList((__int64)v15, 65534 - v20, v20);
            if ( result >= 0 )
            {
              *((_DWORD *)v15 + 50) = 65534;
              *((_QWORD *)v15 + 26) = v19;
              result = ExtEnvRegisterIommu(v28, v21, 0LL);
              if ( result >= 0 )
              {
                result = ExtEnvAllocateMemory(v22, 0x18u, (__int64 *)&v27);
                if ( result >= 0 )
                {
                  v23 = v27;
                  *v27 = 0LL;
                  v23[2] = 0LL;
                  v23[2] = *(_QWORD *)(a2 + 8);
                  v24 = (_QWORD *)qword_140C489B8;
                  if ( *(__int64 **)qword_140C489B8 != &HsaIvhdList )
                    __fastfail(3u);
                  *v23 = &HsaIvhdList;
                  v23[1] = v24;
                  *v24 = v23;
                  qword_140C489B8 = (__int64)v23;
                  if ( v31 || v32 )
                    v6 = 1;
                  *a3 = v6;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
