/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094
 * Callers:
 *     imp_WdfRegistryOpenKey @ 0x1C0009970 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryQueryValue @ 0x1C000A4D0 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryQueryULong @ 0x1C00182E0 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfRegistryAssignValue @ 0x1C0018D80 (imp_WdfRegistryAssignValue.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B7E0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C0044190 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0044300 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00443B0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0045DA0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0045F20 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0046100 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0046410 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0046540 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0046670 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0047A00 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0047DF0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0048DF0 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDriverCreate @ 0x1C004BE30 (imp_WdfDriverCreate.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005D110 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005D340 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C005D6F0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C005D910 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C005DB70 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C005DCB0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C005DDB0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C005DF50 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C005E1C0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C005E480 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C005E880 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C005EB60 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C005EE00 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfStringCreate @ 0x1C005F430 (imp_WdfStringCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C0062A8C (FxIoTargetValidateOpenParams.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C002F7EC (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  int _a2; // r8d
  int MaximumLength; // eax

  _a2 = String->Length;
  if ( (_a2 & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, _a2, 0xC000000D);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else if ( (_WORD)MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else
    {
      if ( (unsigned __int16)_a2 <= (unsigned __int16)MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        _a2,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
