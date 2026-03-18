/*
 * XREFs of _CmSetDeviceRegProp @ 0x140732F70
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406CAC2C (_CmGetDeviceSoftwareKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 *     PnpSaveDeviceCapabilities @ 0x140732DB8 (PnpSaveDeviceCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x14073E488 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14073F2E0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075219C (PiDcUpdateDeviceContainerMembership.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A6308 (PiDcResetChildDeviceContainers.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B4E1C (IopCreateLegacyDeviceIds.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     PipMigrateResetDeviceCallback @ 0x140A936A0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A937C0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     _CmSetDeviceRegPropWorker @ 0x1407330D8 (_CmSetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmSetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, int, _QWORD *); // r14
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v20, 0, 0x58uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  v20[5] = __PAIR64__(a8, a7);
  v20[2] = a3;
  v20[3] = __PAIR64__(a5, a4);
  v20[4] = a6;
  if ( v12 )
  {
    v13 = v12(a1, a2, 1LL, 10LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = CmSetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), HIDWORD(v20[3]), v20[4], v20[5], HIDWORD(v20[5]));
  v14 = v16;
  if ( v12 )
  {
    LODWORD(v20[0]) = v16;
    v17 = v12(a1, a2, 1LL, 10LL, 2, v20);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return LODWORD(v20[0]);
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
