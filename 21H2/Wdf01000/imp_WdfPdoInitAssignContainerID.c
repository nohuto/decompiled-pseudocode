/*
 * XREFs of imp_WdfPdoInitAssignContainerID @ 0x1C00348A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAssignContainerID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *ContainerID)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  FxString *v8; // rax
  FxString *v9; // rax
  unsigned int _a1; // ebx
  unsigned __int16 v11; // r9
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !ContainerID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, ContainerID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        v8 = DeviceInit->Pdo.ContainerID;
        if ( v8 )
          return FxDuplicateUnicodeString(v8->m_Globals, ContainerID, &v8->m_UnicodeString);
        *(_QWORD *)&v12.UsePoolType = 0LL;
        v12.u.PoolFlags = 64LL;
        v9 = (FxString *)FxObjectHandleAllocCommon(v5, &v12, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v9 )
        {
          FxString::FxString(v9, v5);
          DeviceInit->Pdo.ContainerID = v8;
          if ( v8 )
            return FxDuplicateUnicodeString(v8->m_Globals, ContainerID, &v8->m_UnicodeString);
        }
        else
        {
          DeviceInit->Pdo.ContainerID = 0LL;
        }
        _a1 = -1073741670;
        v11 = 64;
      }
      else
      {
        _a1 = -1073741808;
        v11 = 63;
      }
      WPP_IFR_SF_d(v5, 2u, 0x12u, v11, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
      return _a1;
    }
  }
  return result;
}
