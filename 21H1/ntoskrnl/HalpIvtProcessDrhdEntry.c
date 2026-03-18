/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x1404E1D7C
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x1404E1CD0 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalSocRequestApi @ 0x14039EB7C (HalSocRequestApi.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403A89D0 (HalRegisterPermanentAddressUsage.c)
 *     HalMapIoSpace @ 0x1403A8C70 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403B75C0 (HalpUnmapVirtualAddress.c)
 *     Feature_Servicing_30141497__private_IsEnabled @ 0x1403EC074 (Feature_Servicing_30141497__private_IsEnabled.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404CFCD0 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x1404CFF9C (ExtEnvFreeMemory.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E2578 (HalpIvtAllocateReservedDomainList.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1404E2D5C (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1404E2FA0 (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1404E30A0 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x1404E31E4 (DmrFreeRmrrTree.c)
 *     ExtEnvRegisterIommu @ 0x140A8A8F0 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  NTSTATUS ReservedDomainList; // esi
  char v5; // r12
  __int64 v6; // rcx
  int Memory; // eax
  unsigned __int64 v8; // r15
  LARGE_INTEGER v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  int v14; // esi
  unsigned __int64 v15; // rax
  _BYTE *NextDrhdDeviceScope; // rax
  int v17; // r11d
  __int64 v18; // rax
  _DWORD *v19; // rdx
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // r14
  size_t v24; // rbx
  bool v25; // zf
  __int64 v26; // r8
  __int64 v27; // rcx
  int v29; // [rsp+30h] [rbp-D0h]
  _DWORD *v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD Size[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD *v33; // [rsp+50h] [rbp-B0h]
  _QWORD v34[14]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v36[18]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v37[30]; // [rsp+170h] [rbp+70h] BYREF
  char v39; // [rsp+278h] [rbp+178h] BYREF
  char v40; // [rsp+280h] [rbp+180h]
  int v41; // [rsp+288h] [rbp+188h]

  v35 = 0LL;
  memset(v36, 0, 0x88uLL);
  memset(v37, 0, 0xA8uLL);
  ReservedDomainList = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v5 = 0;
  v41 = 0;
  v30 = 0LL;
  v40 = 0;
  v39 = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (unsigned int)Feature_Servicing_30141497__private_IsEnabled()
    && ((int)HalSocRequestApi(v6, 0LL, 2, 16LL, &v35) < 0
     || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v35)(0LL, 0LL, 0LL, &v39)) )
  {
    v39 = 0;
  }
  Memory = ExtEnvAllocateMemory(v6, 0x18u, (__int64 *)&v30);
  v8 = (unsigned __int64)v30;
  ReservedDomainList = Memory;
  if ( Memory < 0 )
    goto LABEL_64;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v30);
  if ( ReservedDomainList < 0 )
    goto LABEL_64;
  memset(v34, 0, 0x68uLL);
  v9 = *(LARGE_INTEGER *)(a2 + 8);
  v34[0] = 0x6800000001LL;
  v33 = HalMapIoSpace(v9, 0x220uLL, MmNonCached);
  if ( !v33 )
  {
    ReservedDomainList = -1073741670;
LABEL_64:
    if ( v8 )
    {
      DmrFreeRmrrTree(v8);
      ExtEnvFreeMemory(v27, v8);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v9, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    v10 = *(unsigned __int16 *)(a2 + 2) - 16;
    v34[1] = 0LL;
    Size[0] = v10;
    LODWORD(v34[2]) = v10 + 304;
    v34[7] = v36;
    v34[8] = v37;
    v36[0] = IvtConfigureSettings;
    v36[1] = IvtInitializeIommu;
    v36[4] = IvtCreateDevice;
    v36[5] = IvtDeleteDevice;
    v37[13] = IvtCheckForReservedRegion;
    v37[0] = IvtFindDevice;
    v37[17] = IvtEnumerateRmrrDevices;
    HIDWORD(v34[9]) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(v34[9]) = 2;
    LODWORD(v34[12]) = 16;
    HIDWORD(v34[2]) = 4;
    v11 = v33[1] & 0xFFFFFFFFFFFFEEFFuLL;
    _BitScanReverse((unsigned int *)&v10, ((unsigned __int16)(v33[1] & 0xEEFF) >> 8) & 0x1F);
    v41 = v10;
    v12 = v33[2];
    v13 = 1LL << (((unsigned __int8)(v12 >> 35) & 0x1Fu) + 1);
    if ( v13 > 0x100000 )
      LODWORD(v13) = 0x100000;
    LODWORD(v34[11]) = v13;
    if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v12 & 0x18) == 0x18 )
    {
      v36[14] = IvtUpdateRemappingTableEntry;
      v14 = 68;
      HIDWORD(v34[2]) = 68;
      v36[15] = IvtInvalidateRemappingTableEntry;
      v36[16] = IvtUpdateRemappingDestination;
    }
    else
    {
      v14 = HIDWORD(v34[2]);
    }
    if ( (!(unsigned int)Feature_Servicing_30141497__private_IsEnabled() || v39 == 2)
      && (v12 & 2) != 0
      && (v11 & 0x80u) == 0LL
      && (v12 & 0x40) != 0
      && ((v11 >> 8) & 0x1F) != 0
      && (v11 & 0x80000000000000LL) != 0
      && (v11 & 0x40000000000000LL) != 0
      && (v11 & 0x10) == 0 )
    {
      v36[9] = IvtFlushDomainTb;
      v36[10] = xHalTimerWatchdogStop;
      v36[11] = xHalTimerWatchdogStop;
      v36[7] = IvtAttachDeviceDomain;
      v36[8] = IvtDetachDeviceDomain;
      v37[18] = IvtProcessReservedDomains;
      _BitScanReverse64(&v15, (v11 >> 8) & 0x1F);
      v14 |= (((_DWORD)v15 << 12) + 4096) | 0x100;
      HIDWORD(v34[2]) = v14;
    }
    if ( (v12 & 1) != 0 )
    {
      v14 |= 0x800u;
      HIDWORD(v34[2]) = v14;
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
        v14 &= ~0x100u;
        HIDWORD(v34[2]) = v14;
      }
      v18 = 0x400000000LL;
      if ( v17 )
        v18 = 0x800000000LL;
      if ( (v11 & v18) != 0 )
      {
        v5 = 1;
        v40 = 1;
      }
    }
    v31 = 0;
    v19 = (_DWORD *)((unsigned __int64)&v31 & -(__int64)(v5 != 0));
    v20 = 1 << (2 * (v11 & 7) + 4);
    if ( v19 )
      *v19 = --v20;
    v8 = (unsigned __int64)v30;
    v29 = v20 - 1;
    v21 = v20 - 1 - *v30;
    LODWORD(v30) = *v30;
    HIDWORD(v34[11]) = v21;
    if ( (v14 & 0x20) != 0 || (v14 & 0x100) != 0 )
    {
      v14 |= 0x12u;
      v37[10] = IvtEnableInterrupt;
      v37[11] = IvtDisableInterrupt;
      v37[12] = IvtHandleInterrupt;
      v37[9] = IvtSetMessageInterruptRouting;
      HIDWORD(v34[2]) = v14;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v14 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v34, v22, &Size[1]);
    if ( ReservedDomainList >= 0 )
    {
      v23 = *(_QWORD *)&Size[1];
      **(_QWORD **)&Size[1] = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v23 + 212) = *(unsigned __int16 *)(a2 + 6);
      *(_QWORD *)(v23 + 176) = v11;
      v24 = Size[0];
      *(_QWORD *)(v23 + 184) = v12;
      *(_QWORD *)(v23 + 232) = v23 + 304;
      *(_DWORD *)(v23 + 216) = v24;
      v25 = (v34[2] & 0x2000000000LL) == 0;
      *(_BYTE *)(v23 + 228) = *(_BYTE *)(a2 + 4) & 1;
      *(_DWORD *)(v23 + 220) = v29;
      *(_DWORD *)(v23 + 224) = v31;
      *(_DWORD *)(v23 + 208) = v41;
      *(_QWORD *)(v23 + 168) = 0LL;
      *(_QWORD *)(v23 + 200) = v23 + 192;
      *(_QWORD *)(v23 + 192) = v23 + 192;
      if ( !v25 )
        *(_BYTE *)(v23 + 268) = 1;
      if ( (v34[2] & 0x10000000000LL) != 0 )
        *(_BYTE *)(v23 + 269) = 1;
      if ( v40 )
        *(_BYTE *)(v23 + 270) = 1;
      v26 = (unsigned int)v30;
      *(_QWORD *)(v23 + 288) = v8;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v23, v21, v26);
      if ( ReservedDomainList >= 0 )
        memmove(*(void **)(v23 + 232), (const void *)(a2 + 16), v24);
    }
  }
  HalpUnmapVirtualAddress((unsigned __int64)v33, 1LL, 0LL);
  if ( ReservedDomainList < 0 )
    goto LABEL_64;
  return (unsigned int)ReservedDomainList;
}
