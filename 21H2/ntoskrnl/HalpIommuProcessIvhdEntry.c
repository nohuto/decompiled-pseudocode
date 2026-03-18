/*
 * XREFs of HalpIommuProcessIvhdEntry @ 0x1405307FC
 * Callers:
 *     HalpIommuHsaDiscover @ 0x140AF9490 (HalpIommuHsaDiscover.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403BE4F0 (HalRegisterPermanentAddressUsage.c)
 *     ExtEnvAllocateMemory @ 0x1403CE24C (ExtEnvAllocateMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpHsaAllocateReservedDomainList @ 0x1405302D4 (HalpHsaAllocateReservedDomainList.c)
 *     HalpIommuProcessDeviceEntries @ 0x140530540 (HalpIommuProcessDeviceEntries.c)
 *     HsaProcessIvmd @ 0x140532D90 (HsaProcessIvmd.c)
 *     ExtEnvRegisterIommu @ 0x140B4BF38 (ExtEnvRegisterIommu.c)
 */

int __fastcall HalpIommuProcessIvhdEntry(__int64 a1, __int64 a2, char *a3)
{
  char v6; // di
  bool v7; // cf
  __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // r15
  int result; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  int v19; // edx
  unsigned int *v20; // rbx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v27; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v28; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v29[14]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[18]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v31[30]; // [rsp+140h] [rbp+40h] BYREF
  char v32; // [rsp+248h] [rbp+148h] BYREF
  char v33; // [rsp+250h] [rbp+150h] BYREF
  __int64 v34; // [rsp+258h] [rbp+158h] BYREF

  v6 = 0;
  v26 = 0LL;
  memset(v30, 0, 0x88uLL);
  memset(v31, 0, 0xB8uLL);
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v28 = 0LL;
  v34 = 0LL;
  v27 = 0LL;
  *a3 = 0;
  v33 = 0;
  v32 = 0;
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
  v10 = (4 * (_BYTE)v9) & 8 | (16 * ((v9 >> 45) & 1));
  if ( ((*(_BYTE *)(a2 + 1) >> 4) & ((v9 & 0x600000000008LL) == 0x600000000008LL)) != 0 )
    v10 = (4 * (_BYTE)v9) & 8 | (16 * ((*(_QWORD *)(a2 + 24) >> 45) & 1)) | 1;
  v11 = v10 | 4;
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & ((v11 & 1) != 0 && (v9 & 0x20000000012LL) == 0x20000000012LL)) == 0
    || (BYTE4(v9) & 0x1Fu) < 8 )
  {
    v11 &= ~4u;
  }
  v12 = v11 | 2;
  if ( (v9 & 0x84) != 0x84 )
    v12 = v11;
  if ( (v12 & 3) == 0 )
    return 0;
  result = HsaProcessIvmd(a2, a1 + *(unsigned int *)(a1 + 4), &v32, &v27);
  if ( result >= 0 )
  {
    result = ExtEnvAllocateMemory(v14, 0xF0u, &v34);
    if ( result >= 0 )
    {
      memset(&v30[2], 0, 0x78uLL);
      v15 = v34;
      v16 = (_QWORD *)(v34 + 224);
      *(_QWORD *)(v34 + 232) = v34 + 224;
      *v16 = v16;
      *(_BYTE *)(v15 + 16) = *(_BYTE *)(a2 + 1);
      *(_WORD *)(v15 + 18) = v12;
      *(_QWORD *)(v15 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v15 + 160) = *(unsigned __int16 *)(a2 + 16);
      *(_DWORD *)(v15 + 164) = *(unsigned __int8 *)(a2 + 5);
      *(_DWORD *)(v15 + 168) ^= (*(_DWORD *)(v15 + 168) ^ (*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1F;
      v17 = *(_DWORD *)(v15 + 168) ^ ((unsigned __int8)*(_DWORD *)(v15 + 168) ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0u;
      *(_DWORD *)(v15 + 168) = v17;
      result = ExtEnvAllocateMemory(v17, 0x2000u, &v26);
      if ( result >= 0 )
      {
        *(_QWORD *)(v15 + 192) = v26;
        *(_DWORD *)(v15 + 184) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v15 + 184), 0, 0x10000u);
        *(_QWORD *)(v15 + 152) = 0LL;
        result = HalpIommuProcessDeviceEntries(v15, a2, &v33);
        if ( result >= 0 )
        {
          result = HalRegisterPermanentAddressUsage(*(LARGE_INTEGER *)(v15 + 8), 0x2040u);
          if ( result >= 0 )
          {
            memset(v29, 0, 0x68uLL);
            HIDWORD(v29[9]) = *(_DWORD *)(v15 + 160);
            v18 = 2076;
            v29[10] = *(_QWORD *)(v15 + 164);
            v29[7] = v30;
            v29[8] = v31;
            v30[0] = HsaConfigureSettings;
            v30[1] = HsaInitializeIommu;
            v29[0] = 0x6800000001LL;
            v29[1] = v15;
            v29[2] = 0x81C00000000LL;
            LODWORD(v29[9]) = 1;
            LODWORD(v29[12]) = 16;
            if ( (v12 & 1) != 0 )
            {
              v30[4] = HsaCreateDevice;
              v30[5] = IvtDeleteDevice;
              v31[0] = HsaFindDevice;
              v31[5] = HsaFlushTb;
              v31[6] = HsaFlushDeviceTbOnly;
              v31[19] = HsaQueryAcpiDeviceMapping;
              v31[20] = HsaGetRidAcpiMapCount;
              if ( !v32 )
              {
                v18 = 2332;
                v31[17] = HsaEnumerateIvmdDevices;
                v31[18] = HsaProcessReservedDomains;
                v30[7] = HsaAttachDeviceDomain;
                v30[8] = HsaDetachDeviceDomain;
              }
              v18 |= 0x6000u;
              v30[9] = HsaFlushDomainTb;
              v30[10] = xHalTimerWatchdogStop;
              v30[11] = xHalTimerWatchdogStop;
              HIDWORD(v29[2]) = v18;
            }
            v19 = 0x40000;
            if ( (unsigned int)((1 << ((BYTE4(v9) & 0x1F) + 1)) - 1) < 0x40000 )
              v19 = (1 << ((BYTE4(v9) & 0x1F) + 1)) - 1;
            LODWORD(v29[11]) = v19;
            if ( (v12 & 4) != 0 )
            {
              v18 |= 0x20u;
              v31[1] = HsaSetDeviceSvmCapabilities;
              v31[2] = HsaSetDevicePasidTable;
              v31[3] = HsaGrowPasidTable;
              v31[4] = HsaSetPasidAddressSpace;
              v31[7] = HsaDismissPageFault;
              v31[8] = &HsaGetPageFault;
              v31[14] = HsaMarkHiberRegions;
              HIDWORD(v29[2]) = v18;
            }
            if ( (v12 & 2) != 0 )
            {
              v30[14] = &HsaUpdateRemappingTableEntry;
              v18 = v18 & 0xFFFFFFAF | 0x40;
              HIDWORD(v29[2]) = v18;
              v30[15] = HsaInvalidateRemappingTableEntry;
              v30[16] = HsaUpdateRemappingDestination;
              v30[12] = HsaAllocateRemappingTableEntry;
              v30[13] = HsaFreeRemappingTableEntry;
            }
            if ( (v12 & 4) != 0 )
            {
              v31[9] = HsaSetMessageInterruptRouting;
              v31[10] = HsaEnableInterrupt;
              v31[11] = HsaDisableInterrupt;
              v31[12] = HsaHandleInterrupt;
              HIDWORD(v29[2]) = v18 | 2;
            }
            v20 = v27;
            v21 = *v27;
            HIDWORD(v29[11]) = 65534 - *v27;
            result = HalpHsaAllocateReservedDomainList(v15, 65534 - v21, v21);
            if ( result >= 0 )
            {
              *(_DWORD *)(v15 + 200) = 65534;
              *(_QWORD *)(v15 + 208) = v20;
              result = ExtEnvRegisterIommu(v29, v22, 0LL);
              if ( result >= 0 )
              {
                result = ExtEnvAllocateMemory(v23, 0x18u, &v28);
                if ( result >= 0 )
                {
                  v24 = v28;
                  v28[2] = *(_QWORD *)(a2 + 8);
                  v25 = (_QWORD *)qword_140C49C88;
                  if ( *(__int64 **)qword_140C49C88 != &HsaIvhdList )
                    __fastfail(3u);
                  *v24 = &HsaIvhdList;
                  v24[1] = v25;
                  *v25 = v24;
                  qword_140C49C88 = (__int64)v24;
                  if ( v32 || v33 )
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
