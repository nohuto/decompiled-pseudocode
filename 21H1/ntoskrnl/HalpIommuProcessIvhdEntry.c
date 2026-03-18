/*
 * XREFs of HalpIommuProcessIvhdEntry @ 0x1404DC5D8
 * Callers:
 *     HalpIommuHsaDiscover @ 0x140A36C94 (HalpIommuHsaDiscover.c)
 * Callees:
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403A89D0 (HalRegisterPermanentAddressUsage.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404CFCD0 (ExtEnvAllocateMemory.c)
 *     HalpHsaAllocateReservedDomainList @ 0x1404DC020 (HalpHsaAllocateReservedDomainList.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DC2CC (HalpIommuProcessDeviceEntries.c)
 *     HsaProcessIvmd @ 0x1404DEAA0 (HsaProcessIvmd.c)
 *     ExtEnvRegisterIommu @ 0x140A8A8F0 (ExtEnvRegisterIommu.c)
 */

int __fastcall HalpIommuProcessIvhdEntry(__int64 a1, __int64 a2, char *a3)
{
  char v6; // di
  bool v7; // cf
  __int64 *v8; // rax
  __int64 v9; // rbx
  int result; // eax
  __int64 v11; // rcx
  char *v12; // rsi
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  unsigned int *v16; // rbx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v23; // [rsp+28h] [rbp-D8h] BYREF
  _OWORD *v24; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[14]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[22]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v27[24]; // [rsp+160h] [rbp+60h] BYREF
  char v28; // [rsp+238h] [rbp+138h] BYREF
  char v29; // [rsp+240h] [rbp+140h] BYREF
  void *v30; // [rsp+248h] [rbp+148h] BYREF

  v6 = 0;
  v22 = 0LL;
  memset(v27, 0, 0x88uLL);
  memset(v26, 0, 0xA8uLL);
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v24 = 0LL;
  v30 = 0LL;
  v23 = 0LL;
  *a3 = 0;
  v29 = 0;
  v28 = 0;
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
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & (*(_BYTE *)(a2 + 1) >> 4) & ((v9 & 0x2000000001ALL) == 0x2000000001ALL)) == 0
    || (BYTE4(v9) & 0x1Fu) < 8uLL
    || (v9 & 0x600000000000LL) != 0x600000000000LL )
  {
    return 0;
  }
  result = HsaProcessIvmd(a2, a1 + *(unsigned int *)(a1 + 4), &v28, &v23);
  if ( result >= 0 )
  {
    result = ExtEnvAllocateMemory(v11, 0xF0u, (__int64 *)&v30);
    if ( result >= 0 )
    {
      v12 = (char *)v30;
      memset(v30, 0, 0xF0uLL);
      *((_QWORD *)v12 + 29) = v12 + 224;
      *((_QWORD *)v12 + 28) = v12 + 224;
      v12[16] = *(_BYTE *)(a2 + 1);
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v12 + 40) = *(unsigned __int16 *)(a2 + 16);
      *((_DWORD *)v12 + 41) = *(unsigned __int8 *)(a2 + 5);
      *((_DWORD *)v12 + 42) ^= (*((_DWORD *)v12 + 42) ^ (*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1F;
      v13 = *((_DWORD *)v12 + 42) ^ ((unsigned __int8)*((_DWORD *)v12 + 42) ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0u;
      *((_DWORD *)v12 + 42) = v13;
      result = ExtEnvAllocateMemory(v13, 0x2000u, &v22);
      if ( result >= 0 )
      {
        *((_QWORD *)v12 + 24) = v22;
        *((_DWORD *)v12 + 46) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v12 + 184), 0, 0x10000u);
        *((_QWORD *)v12 + 19) = 0LL;
        result = HalpIommuProcessDeviceEntries((__int64)v12, a2, &v29);
        if ( result >= 0 )
        {
          result = HalRegisterPermanentAddressUsage(*(LARGE_INTEGER *)(v12 + 8), 0x2040u);
          if ( result >= 0 )
          {
            memset(v25, 0, 0x68uLL);
            v25[0] = 0x6800000001LL;
            v25[7] = v27;
            v14 = 0x40000;
            v25[1] = v12;
            v25[8] = v26;
            LODWORD(v25[2]) = 0;
            v27[0] = HsaConfigureSettings;
            v27[1] = HsaInitializeIommu;
            LODWORD(v25[9]) = 1;
            v27[4] = HsaCreateDevice;
            LODWORD(v25[12]) = 16;
            v27[5] = IvtDeleteDevice;
            if ( (unsigned int)((1 << ((BYTE4(v9) & 0x1F) + 1)) - 1) < 0x40000 )
              v14 = (1 << ((BYTE4(v9) & 0x1F) + 1)) - 1;
            LODWORD(v25[11]) = v14;
            v26[0] = HsaFindDevice;
            v26[1] = HsaSetDeviceSvmCapabilities;
            v26[2] = HsaSetDevicePasidTable;
            v26[3] = HsaGrowPasidTable;
            v26[4] = HsaSetPasidAddressSpace;
            v26[5] = HsaFlushTb;
            v26[6] = HsaFlushDeviceTbOnly;
            v26[7] = HsaDismissPageFault;
            v26[8] = &HsaGetPageFault;
            v26[14] = HsaMarkHiberRegions;
            v26[19] = HsaQueryAcpiDeviceMapping;
            v26[20] = HsaGetRidAcpiMapCount;
            HIDWORD(v25[9]) = *((_DWORD *)v12 + 40);
            v25[10] = *(_QWORD *)(v12 + 164);
            v15 = 14398;
            HIDWORD(v25[2]) = 14398;
            if ( (v9 & 0x84) == 0x84 )
            {
              v27[14] = HsaUpdateRemappingTableEntry;
              v27[15] = HsaInvalidateRemappingTableEntry;
              v27[16] = HsaUpdateRemappingDestination;
              v27[12] = HsaAllocateRemappingTableEntry;
              v27[13] = HsaFreeRemappingTableEntry;
              v15 = 14446;
              HIDWORD(v25[2]) = 14446;
            }
            if ( !v28 )
            {
              HIDWORD(v25[2]) = v15 | 0x100;
              v26[17] = HsaEnumerateIvmdDevices;
              v26[18] = HsaProcessReservedDomains;
              v27[7] = HsaAttachDeviceDomain;
              v27[8] = HsaDetachDeviceDomain;
            }
            v16 = v23;
            v27[9] = HsaFlushDomainTb;
            v27[10] = xHalTimerWatchdogStop;
            v27[11] = xHalTimerWatchdogStop;
            v26[9] = HsaSetMessageInterruptRouting;
            v26[10] = HsaEnableInterrupt;
            v26[11] = HsaDisableInterrupt;
            v26[12] = HsaHandleInterrupt;
            v17 = *v23;
            HIDWORD(v25[11]) = 65534 - *v23;
            result = HalpHsaAllocateReservedDomainList((__int64)v12, 65534 - v17, v17);
            if ( result >= 0 )
            {
              *((_DWORD *)v12 + 50) = 65534;
              *((_QWORD *)v12 + 26) = v16;
              result = ExtEnvRegisterIommu(v25, v18, 0LL);
              if ( result >= 0 )
              {
                result = ExtEnvAllocateMemory(v19, 0x18u, (__int64 *)&v24);
                if ( result >= 0 )
                {
                  v20 = v24;
                  *v24 = 0LL;
                  v20[2] = 0LL;
                  v20[2] = *(_QWORD *)(a2 + 8);
                  v21 = (_QWORD *)qword_140C48928;
                  if ( *(__int64 **)qword_140C48928 != &HsaIvhdList )
                    __fastfail(3u);
                  *v20 = &HsaIvhdList;
                  v20[1] = v21;
                  *v21 = v20;
                  qword_140C48928 = (__int64)v20;
                  if ( v28 || v29 )
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
