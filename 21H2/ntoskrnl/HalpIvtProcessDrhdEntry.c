/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x1404E764C
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x1404E75A0 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403ACDC0 (HalRegisterPermanentAddressUsage.c)
 *     HalMapIoSpace @ 0x1403AD060 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E7E88 (HalpIvtAllocateReservedDomainList.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1404E866C (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1404E88B0 (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1404E89B0 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x1404E8AF4 (DmrFreeRmrrTree.c)
 *     ExtEnvRegisterIommu @ 0x140A8D9F0 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  NTSTATUS ReservedDomainList; // esi
  char v5; // r14
  __int64 v6; // rcx
  int Memory; // eax
  unsigned __int64 v8; // r12
  LARGE_INTEGER v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  char v14; // al
  int v15; // esi
  unsigned __int64 v16; // rax
  _BYTE *NextDrhdDeviceScope; // rax
  int v18; // r11d
  __int64 v19; // rax
  _DWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // r13d
  __int64 v23; // rdx
  _QWORD *v24; // r14
  size_t v25; // rbx
  bool v26; // zf
  __int64 v27; // r8
  __int64 v28; // rcx
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh]
  unsigned int *v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int Size; // [rsp+40h] [rbp-C0h]
  int Size_4; // [rsp+44h] [rbp-BCh]
  _QWORD *v35; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-B0h]
  _QWORD v37[14]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v38[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v39[18]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v40[30]; // [rsp+170h] [rbp+70h] BYREF
  char v42; // [rsp+278h] [rbp+178h] BYREF
  char v43; // [rsp+280h] [rbp+180h]
  int v44; // [rsp+288h] [rbp+188h]

  *(_OWORD *)v38 = 0LL;
  memset(v39, 0, 0x88uLL);
  memset(v40, 0, 0xA8uLL);
  ReservedDomainList = 0;
  v35 = 0LL;
  v5 = 0;
  v44 = 0;
  v32 = 0LL;
  v43 = 0;
  v42 = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, v38) < 0
    || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v38[0])(0LL, 0LL, 0LL, &v42) )
  {
    v42 = 0;
  }
  Memory = ExtEnvAllocateMemory(v6, 0x18u, (__int64 *)&v32);
  v8 = (unsigned __int64)v32;
  ReservedDomainList = Memory;
  if ( Memory < 0 )
    goto LABEL_62;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v32);
  if ( ReservedDomainList < 0 )
    goto LABEL_62;
  memset(v37, 0, 0x68uLL);
  v9 = *(LARGE_INTEGER *)(a2 + 8);
  v37[0] = 0x6800000001LL;
  v36 = HalMapIoSpace(v9, 0x220uLL, MmNonCached);
  if ( !v36 )
  {
    ReservedDomainList = -1073741670;
LABEL_62:
    if ( v8 )
    {
      DmrFreeRmrrTree(v8);
      ExtEnvFreeMemory(v28, v8);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v9, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    v10 = *(unsigned __int16 *)(a2 + 2) - 16;
    v37[1] = 0LL;
    Size = v10;
    LODWORD(v37[2]) = v10 + 304;
    v37[7] = v39;
    v37[8] = v40;
    v39[0] = IvtConfigureSettings;
    v39[1] = IvtInitializeIommu;
    v39[4] = IvtCreateDevice;
    v39[5] = IvtDeleteDevice;
    v40[13] = IvtCheckForReservedRegion;
    v40[0] = IvtFindDevice;
    v40[17] = IvtEnumerateRmrrDevices;
    HIDWORD(v37[9]) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(v37[9]) = 2;
    LODWORD(v37[12]) = 16;
    HIDWORD(v37[2]) = 4;
    v11 = v36[1] & 0xFFFFFFFFFFFFEEFFuLL;
    _BitScanReverse((unsigned int *)&v10, (v11 >> 8) & 0x1F);
    v44 = v10;
    v12 = v36[2];
    v13 = 1LL << (((unsigned __int8)(v12 >> 35) & 0x1Fu) + 1);
    if ( v13 > 0x100000 )
      LODWORD(v13) = 0x100000;
    v14 = *(_BYTE *)(a1 + 37) & 3;
    LODWORD(v37[11]) = v13;
    if ( v14 == 1 && (v12 & 0x18) == 0x18 )
    {
      v39[14] = IvtUpdateRemappingTableEntry;
      v15 = 68;
      HIDWORD(v37[2]) = 68;
      v39[15] = IvtInvalidateRemappingTableEntry;
      v39[16] = IvtUpdateRemappingDestination;
    }
    else
    {
      v15 = HIDWORD(v37[2]);
    }
    if ( v42 == 2
      && (v12 & 2) != 0
      && (v11 & 0x80u) == 0LL
      && (v12 & 0x40) != 0
      && ((v11 >> 8) & 0x1F) != 0
      && (v11 & 0x80000000000000LL) != 0
      && (v11 & 0x40000000000000LL) != 0
      && (v11 & 0x10) == 0 )
    {
      v31 = v44;
      v39[9] = IvtFlushDomainTb;
      v39[10] = xHalTimerWatchdogStop;
      v39[11] = xHalTimerWatchdogStop;
      v39[7] = IvtAttachDeviceDomain;
      v39[8] = IvtDetachDeviceDomain;
      v40[18] = IvtProcessReservedDomains;
      _BitScanReverse64(&v16, (v11 >> 8) & 0x1F);
      v15 |= (((_DWORD)v16 << 12) + 4096) | 0x100;
      HIDWORD(v37[2]) = v15;
    }
    if ( (v12 & 1) != 0 )
    {
      v15 |= 0x800u;
      HIDWORD(v37[2]) = v15;
    }
    NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL);
    if ( NextDrhdDeviceScope
      && *NextDrhdDeviceScope == 1
      && NextDrhdDeviceScope[1] == 8
      && !NextDrhdDeviceScope[5]
      && NextDrhdDeviceScope[6] == 2
      && !NextDrhdDeviceScope[7]
      && !*(_WORD *)(a2 + 6)
      && (v11 & 0x3F0000) < 0x2F0000 )
    {
      if ( !HalpIommuEnableGpuIdentityMapping )
      {
        v15 &= ~0x100u;
        HIDWORD(v37[2]) = v15;
      }
      v19 = 0x400000000LL;
      if ( v18 )
        v19 = 0x800000000LL;
      if ( (v11 & v19) != 0 )
      {
        v5 = 1;
        v43 = 1;
      }
    }
    v30 = 0;
    v20 = (_DWORD *)((unsigned __int64)&v30 & -(__int64)(v5 != 0));
    v21 = 1 << (2 * (v11 & 7) + 4);
    if ( v20 )
      *v20 = --v21;
    v8 = (unsigned __int64)v32;
    Size_4 = v21 - 1;
    v22 = v21 - 1 - *v32;
    v31 = *v32;
    HIDWORD(v37[11]) = v22;
    if ( (v15 & 0x20) != 0 || (v15 & 0x100) != 0 )
    {
      v15 |= 0x12u;
      v40[10] = IvtEnableInterrupt;
      v40[11] = IvtDisableInterrupt;
      v40[12] = IvtHandleInterrupt;
      v40[9] = IvtSetMessageInterruptRouting;
      HIDWORD(v37[2]) = v15;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2, 0LL) < 0 && (v15 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v37, v23, &v35);
    if ( ReservedDomainList >= 0 )
    {
      v24 = v35;
      *v35 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v24 + 53) = *(unsigned __int16 *)(a2 + 6);
      v24[22] = v11;
      v25 = Size;
      v24[23] = v12;
      v24[29] = v24 + 38;
      *((_DWORD *)v24 + 54) = v25;
      v26 = (v37[2] & 0x2000000000LL) == 0;
      *((_BYTE *)v24 + 228) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v24 + 55) = Size_4;
      *((_DWORD *)v24 + 56) = v30;
      *((_DWORD *)v24 + 52) = v44;
      v24[21] = 0LL;
      v24[25] = v24 + 24;
      v24[24] = v24 + 24;
      if ( !v26 )
        *((_BYTE *)v24 + 268) = 1;
      if ( (v37[2] & 0x10000000000LL) != 0 )
        *((_BYTE *)v24 + 269) = 1;
      if ( v43 )
        *((_BYTE *)v24 + 270) = 1;
      v27 = v31;
      v24[36] = v8;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v24, v22, v27);
      if ( ReservedDomainList >= 0 )
        memmove((void *)v24[29], (const void *)(a2 + 16), v25);
    }
  }
  HalpUnmapVirtualAddress((unsigned __int64)v36, 1LL, 0LL);
  if ( ReservedDomainList < 0 )
    goto LABEL_62;
  return (unsigned int)ReservedDomainList;
}
