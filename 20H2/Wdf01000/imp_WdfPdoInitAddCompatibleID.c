/*
 * XREFs of imp_WdfPdoInitAddCompatibleID @ 0x1C00454D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018B7C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00610B4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00612BC (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddCompatibleID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *CompatibleID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  FxString *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  signed int v11; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !CompatibleID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, CompatibleID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        v8 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v8 )
        {
          FxString::FxString(v8, v5);
          v10 = v9;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          v11 = FxDuplicateUnicodeString(
                  *(_FX_DRIVER_GLOBALS **)(v10 + 16),
                  CompatibleID,
                  (_UNICODE_STRING *)(v10 + 104));
          if ( v11 >= 0 )
            v11 = (unsigned __int8)FxCollectionInternal::Add(&DeviceInit->Pdo.CompatibleIDs, v5, (FxObject *)v10) == 0
                ? 0xC0000001
                : 0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 16LL))(v10, 0LL, 0LL, 0LL);
          return (unsigned int)v11;
        }
        else
        {
          WPP_IFR_SF_(v5, 2u, 0x12u, 0x3Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
          return 3221225626LL;
        }
      }
      else
      {
        WPP_IFR_SF_d(v5, 2u, 0x12u, 0x3Du, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
        return 3221225488LL;
      }
    }
  }
  return result;
}
