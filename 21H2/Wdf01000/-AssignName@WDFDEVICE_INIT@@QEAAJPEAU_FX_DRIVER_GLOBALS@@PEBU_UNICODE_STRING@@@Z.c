/*
 * XREFs of ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030870
 * Callers:
 *     imp_WdfDeviceInitAssignName @ 0x1C0030810 (imp_WdfDeviceInitAssignName.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall WDFDEVICE_INIT::AssignName(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Name)
{
  FxString *DeviceName; // rax
  FxString *v7; // rax
  FxPoolTypeOrPoolFlags v9; // [rsp+40h] [rbp-18h] BYREF

  DeviceName = this->DeviceName;
  if ( DeviceName )
    return FxDuplicateUnicodeString(DeviceName->m_Globals, Name, &DeviceName->m_UnicodeString);
  *(_QWORD *)&v9.UsePoolType = 0LL;
  v9.u.PoolFlags = 64LL;
  v7 = (FxString *)FxObjectHandleAllocCommon(FxDriverGlobals, &v9, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v7 )
  {
    FxString::FxString(v7, FxDriverGlobals);
    this->DeviceName = DeviceName;
    if ( DeviceName )
    {
      this->Characteristics &= ~0x80u;
      return FxDuplicateUnicodeString(DeviceName->m_Globals, Name, &DeviceName->m_UnicodeString);
    }
  }
  else
  {
    this->DeviceName = 0LL;
  }
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInit_cpp_Traceguids, -1073741670);
  return 3221225626LL;
}
