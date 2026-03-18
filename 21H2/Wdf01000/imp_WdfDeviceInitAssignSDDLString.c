/*
 * XREFs of imp_WdfDeviceInitAssignSDDLString @ 0x1C00312A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignSDDLString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  __int64 result; // rax
  FxString *Sddl; // rax
  FxString *v8; // rax
  FxString *v9; // rcx
  FxPoolTypeOrPoolFlags v10; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    if ( SDDLString )
    {
      result = FxValidateUnicodeString(v5, SDDLString);
      if ( (int)result < 0 )
        return result;
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
        return FxDuplicateUnicodeString(Sddl->m_Globals, SDDLString, &Sddl->m_UnicodeString);
      *(_QWORD *)&v10.UsePoolType = 0LL;
      v10.u.PoolFlags = 64LL;
      v8 = (FxString *)FxObjectHandleAllocCommon(v5, &v10, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
      if ( v8 )
      {
        FxString::FxString(v8, v5);
        DeviceInit->Security.Sddl = Sddl;
        if ( Sddl )
          return FxDuplicateUnicodeString(Sddl->m_Globals, SDDLString, &Sddl->m_UnicodeString);
      }
      else
      {
        DeviceInit->Security.Sddl = 0LL;
      }
      WPP_IFR_SF_(v5, 2u, 0x12u, 0x10u, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
    if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    {
      return 3221225488LL;
    }
    else
    {
      v9 = DeviceInit->Security.Sddl;
      if ( v9 )
      {
        v9->Release(v9, 0LL, 528, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->Security.Sddl = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
