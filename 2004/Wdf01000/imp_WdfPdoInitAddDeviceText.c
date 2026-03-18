/*
 * XREFs of imp_WdfPdoInitAddDeviceText @ 0x1C0045F20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0044110 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0061CB8 (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  _FX_DRIVER_GLOBALS *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  unsigned int v11; // esi
  FX_POOL **v12; // rax
  FxDeviceText *v13; // rbx
  wchar_t *v14; // rax
  unsigned __int16 v15; // ax
  wchar_t *v16; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v8 = DeviceInit->DriverGlobals;
  v9 = DeviceInit->DriverGlobals;
  if ( !DeviceDescription )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( !DeviceLocation )
    FxVerifierNullBugCheck(v9, retaddr);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v8, DeviceDescription);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v8, DeviceLocation);
      v11 = result;
      if ( (int)result >= 0 )
      {
        if ( DeviceInit->InitType != FxDeviceInitTypePdo )
        {
          WPP_IFR_SF_d(v8, 2u, 0x12u, 0x41u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
          return 3221225488LL;
        }
        v12 = FxPoolAllocator(v8, &v8->FxPoolFrameworks, 1u, 0x20uLL, v8->Tag, retaddr);
        v13 = (FxDeviceText *)v12;
        if ( v12 )
        {
          v12[1] = 0LL;
          v12[2] = 0LL;
          *((_DWORD *)v12 + 6) = 0;
          *v12 = 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        if ( v13 )
        {
          v13->m_LocaleId = LocaleId;
          v14 = FxDuplicateUnicodeStringToString(v8, DeviceDescription);
          v13->m_Description = v14;
          if ( v14 )
          {
            v16 = FxDuplicateUnicodeStringToString(v8, DeviceLocation);
            v13->m_LocationInformation = v16;
            if ( v16 )
            {
              *DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY *)v13;
              DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY **)v13;
              return v11;
            }
            v15 = 68;
          }
          else
          {
            v15 = 67;
          }
          v11 = -1073741670;
          WPP_IFR_SF_d(v8, 2u, 0x12u, v15, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
          FxDeviceText::`scalar deleting destructor'(v13);
        }
        else
        {
          v11 = -1073741670;
          WPP_IFR_SF_d(v8, 2u, 0x12u, 0x42u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
        }
        return v11;
      }
    }
  }
  return result;
}
