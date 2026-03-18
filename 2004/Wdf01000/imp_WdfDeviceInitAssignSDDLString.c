/*
 * XREFs of imp_WdfDeviceInitAssignSDDLString @ 0x1C00443B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0061994 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0061B9C (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall imp_WdfDeviceInitAssignSDDLString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  int result; // eax
  FxString *v7; // rcx
  FxString *Sddl; // rax
  FxString *v9; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( SDDLString )
    {
      result = FxValidateUnicodeString(v5, SDDLString);
      if ( result >= 0 )
      {
        Sddl = DeviceInit->Security.Sddl;
        if ( Sddl )
          return FxDuplicateUnicodeString(Sddl->m_Globals, SDDLString, &Sddl->m_UnicodeString);
        v9 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v9 )
          FxString::FxString(v9, v5);
        else
          Sddl = 0LL;
        DeviceInit->Security.Sddl = Sddl;
        if ( Sddl )
        {
          return FxDuplicateUnicodeString(Sddl->m_Globals, SDDLString, &Sddl->m_UnicodeString);
        }
        else
        {
          WPP_IFR_SF_(v5, 2u, 0x12u, 0x10u, WPP_FxDeviceInitApi_cpp_Traceguids);
          return -1073741670;
        }
      }
    }
    else if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    {
      return -1073741808;
    }
    else
    {
      v7 = DeviceInit->Security.Sddl;
      if ( v7 )
      {
        v7->Release(v7, 0LL, 528, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->Security.Sddl = 0LL;
      }
      return 0;
    }
  }
  return result;
}
