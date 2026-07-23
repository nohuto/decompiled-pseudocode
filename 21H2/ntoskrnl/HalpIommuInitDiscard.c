/*
 * XREFs of HalpIommuInitDiscard @ 0x140A3AAE8
 * Callers:
 *     HalpIommuInitSystem @ 0x14099C9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403AA248 (HalpIommuRegisterBuiltinPlugins.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1405BF1A0 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HalpIommuInitDiscard(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  _QWORD *v6; // rdi
  _BOOL8 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // ecx
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF

  HalpIommuParaVirtDeviceCacheLock = 0LL;
  HalpDeviceBlockUnblockPushLock = 0LL;
  HalpIommuDeviceCreatedListPushLock = 0LL;
  v5 = HalpHvCpuManager == 0;
  v6 = (_QWORD *)HalIommuDispatch;
  qword_140C48D28 = (__int64)&HalpIommuParaVirtDeviceCache;
  HalpIommuParaVirtDeviceCache = (__int64)&HalpIommuParaVirtDeviceCache;
  qword_140C49E58 = (__int64)&HalpIommuDeviceCreatedList;
  HalpIommuDeviceCreatedList = (__int64)&HalpIommuDeviceCreatedList;
  qword_140C49EA8 = (__int64)&HalpRidAliasList;
  HalpRidAliasList = (__int64)&HalpRidAliasList;
  *(_QWORD *)(HalIommuDispatch + 8) = IommuGetConfiguration;
  v6[2] = IommuGetLibraryContext;
  v6[3] = IommuMapDevice;
  v6[4] = IommuEnableDevicePasid;
  v6[5] = IommuSetAddressSpace;
  v6[6] = IommuDisableDevicePasid;
  v6[7] = IommuUnmapDevice;
  v6[9] = IommuFlushTb;
  v6[10] = IommuFlushAllPasid;
  v6[11] = IommuProcessPageRequestQueue;
  v6[16] = IommuDevicePowerChange;
  v6[17] = IommuBeginDeviceReset;
  v6[18] = IommuFinalizeDeviceReset;
  v21 = 0LL;
  HalpHvParaVirtIommuDomain = 0;
  HalpIommuDmaGuardTableOptIn = 0;
  HalpHvIommu = 0;
  if ( !v5 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    _RAX = 1073741827LL;
    HalpHvIommuDeviceDomain = BYTE3(_RDX) & 1;
    __asm { cpuid }
    v17 = (_RDX & 0x2000000) != 0;
    HalpHvParaVirtIommuDomain = v17;
    HviGetHardwareFeatures((__int64)&v21, v17, 1073741827LL, a4);
    if ( (v21 & 0x20) != 0 )
    {
      HalpHvIommu = 1;
      v6[1] = IommuHvGetConfiguration;
      v6[5] = IommuHvSetAddressSpace;
      v6[9] = IommuHvFlushTb;
      v6[10] = IommuHvFlushAllPasid;
      v6[16] = IommuHvDevicePowerChange;
    }
  }
  HalpIommuEnableGpuIdentityMapping = *(int *)(*(_QWORD *)(a1 + 240) + 132LL) < 0;
  result = HalpIommuRegisterBuiltinPlugins();
  v19 = HalpIommuList;
  if ( (__int64 *)HalpIommuList != &HalpIommuList )
  {
    while ( 1 )
    {
      v20 = *(_DWORD *)(v19 + 456);
      v19 = *(_QWORD *)v19;
      if ( (v20 & 0x40) == 0 )
        break;
      if ( (__int64 *)v19 == &HalpIommuList )
        return result;
    }
  }
  HalpInterruptX2ApicPolicy = 0;
  return result;
}
