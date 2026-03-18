/*
 * XREFs of ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C001C314
 * Callers:
 *     imp_WdfPdoGetParent @ 0x1C001C2B0 (imp_WdfPdoGetParent.c)
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C005AF90 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x1C005B000 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfPdoMarkMissing @ 0x1C005B050 (imp_WdfPdoMarkMissing.c)
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C005B0C0 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoRequestEject @ 0x1C005B140 (imp_WdfPdoRequestEject.c)
 *     imp_WdfPdoRetrieveAddressDescription @ 0x1C005B210 (imp_WdfPdoRetrieveAddressDescription.c)
 *     imp_WdfPdoUpdateAddressDescription @ 0x1C005B2B0 (imp_WdfPdoUpdateAddressDescription.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_sq @ 0x1C0013EA8 (WPP_IFR_SF_sq.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 */

__int64 __fastcall GetPdoPackageFromDeviceHandle(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        char *FunctionName,
        FxPkgPdo **Package,
        _FX_DRIVER_GLOBALS **ObjectGlobals,
        FxDevice **OutDevice)
{
  unsigned int v8; // ebx
  FxDevice *v10; // r10
  __int64 v11; // r10
  _FX_DRIVER_GLOBALS *v12; // r11
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr(CallersGlobals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v10 = pDevice;
  *ObjectGlobals = pDevice->m_Globals;
  if ( OutDevice )
    *OutDevice = v10;
  if ( FxDevice::IsPdo(v10) )
  {
    *Package = *(FxPkgPdo **)(v11 + 648);
  }
  else
  {
    WPP_IFR_SF_sq(v12, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, FunctionName, Device);
    return (unsigned int)-1073741811;
  }
  return v8;
}
