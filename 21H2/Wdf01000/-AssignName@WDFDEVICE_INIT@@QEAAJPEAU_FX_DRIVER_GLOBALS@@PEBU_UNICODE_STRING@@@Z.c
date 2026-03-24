/*
 * XREFs of ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C004FD24
 * Callers:
 *     imp_WdfDeviceInitAssignName @ 0x1C0044380 (imp_WdfDeviceInitAssignName.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0061A14 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0061C1C (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall WDFDEVICE_INIT::AssignName(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Name)
{
  FxString *DeviceName; // rax
  FxString *v7; // rax

  DeviceName = this->DeviceName;
  if ( !DeviceName )
  {
    v7 = (FxString *)FxObjectHandleAlloc(
                       FxDriverGlobals,
                       ExDefaultNonPagedPoolType,
                       0x78uLL,
                       0,
                       0LL,
                       0,
                       FxObjectTypeExternal);
    if ( v7 )
      FxString::FxString(v7, FxDriverGlobals);
    else
      DeviceName = 0LL;
    this->DeviceName = DeviceName;
    if ( !DeviceName )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInit_cpp_Traceguids, -1073741670);
      return -1073741670;
    }
    this->Characteristics &= ~0x80u;
  }
  return FxDuplicateUnicodeString(DeviceName->m_Globals, Name, &DeviceName->m_UnicodeString);
}
