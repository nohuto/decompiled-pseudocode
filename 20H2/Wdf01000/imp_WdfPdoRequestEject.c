/*
 * XREFs of imp_WdfPdoRequestEject @ 0x1C00386D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C0001928 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000F144 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  int PdoPackageFromDeviceHandle; // eax
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+20h] BYREF

  pPkgPdo = 0LL;
  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  PdoPackageFromDeviceHandle = GetPdoPackageFromDeviceHandle(
                                 (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
                                 Device,
                                 "imp_WdfPdoRequestEject",
                                 &pPkgPdo,
                                 &pFxDriverGlobals,
                                 &pDevice);
  if ( PdoPackageFromDeviceHandle < 0 )
  {
    WPP_IFR_SF_d(pFxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxDevicePdoAPI_cpp_Traceguids, PdoPackageFromDeviceHandle);
  }
  else
  {
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
    if ( SafePhysicalDevice )
    {
      IoRequestDeviceEject(SafePhysicalDevice);
      return;
    }
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxDevicePdoAPI_cpp_Traceguids, Device);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
