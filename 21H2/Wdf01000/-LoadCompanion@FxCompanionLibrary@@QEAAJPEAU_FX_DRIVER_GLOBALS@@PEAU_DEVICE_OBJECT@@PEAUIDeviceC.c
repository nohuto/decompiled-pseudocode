/*
 * XREFs of ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0060714
 * Callers:
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0068F90 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00274C0 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     GetNameFromPath @ 0x1C00275B8 (GetNameFromPath.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C005B340 (WPP_IFR_SF_D.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x1C0060698 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0060C6C (-OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C0060D0C (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall FxCompanionLibrary::LoadCompanion(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *Pdo,
        IDeviceCompanionCallbacks *CallbackInterface,
        IDeviceCompanion **DeviceCompanion)
{
  FxDriver *Driver; // rcx
  char v9; // r15
  unsigned int v10; // ebx
  int _a1; // eax
  unsigned __int64 v12; // rbx
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  unsigned __int8 v16; // dl
  wchar_t *v17; // rsi
  int v18; // eax
  unsigned __int16 v19; // r9
  IDeviceCompanion **v20; // r12
  int v21; // eax
  _UNICODE_STRING svcNameUnicodeString; // [rsp+30h] [rbp-20h] BYREF
  __m128i v24; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 size; // [rsp+98h] [rbp+48h] BYREF
  _DEVICE_OBJECT *v27; // [rsp+A0h] [rbp+50h]

  v27 = Pdo;
  Driver = DriverGlobals->Driver;
  size = 0;
  v9 = 0;
  svcNameUnicodeString = 0LL;
  GetNameFromPath(&Driver->m_RegistryPath, &svcNameUnicodeString);
  if ( !svcNameUnicodeString.Length )
  {
    v10 = -1073741811;
    WPP_IFR_SF_(DriverGlobals, 2u, 0xCu, 0xFu, WPP_FxCompanionLibrary_cpp_Traceguids);
    return v10;
  }
  _a1 = RtlUShortAdd(svcNameUnicodeString.Length, 2u, &size);
  v10 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x10u, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    return v10;
  }
  v12 = size;
  Tag = DriverGlobals->Tag;
  v14 = retaddr;
  v24.m128i_i64[0] = 0LL;
  v24.m128i_i64[1] = 64LL;
  if ( !DriverGlobals->FxPoolTrackingOn )
    v14 = 0LL;
  v15 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v24, size, Tag, v14);
  v17 = (wchar_t *)v15;
  if ( !v15 )
  {
    v10 = -1073741670;
    WPP_IFR_SF_D(DriverGlobals, v16, 0xCu, 0x11u, WPP_FxCompanionLibrary_cpp_Traceguids, size);
    return v10;
  }
  v18 = RtlStringCbCopyUnicodeString((wchar_t *)v15, v12, &svcNameUnicodeString);
  v10 = v18;
  if ( v18 < 0 )
  {
    v19 = 18;
LABEL_11:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, v19, WPP_FxCompanionLibrary_cpp_Traceguids, v18);
    goto $exit_22;
  }
  v18 = FxCompanionLibrary::OpenCompanionLibraryInterface(this, DriverGlobals);
  v10 = v18;
  if ( v18 < 0 )
  {
    v19 = 19;
    goto LABEL_11;
  }
  v20 = DeviceCompanion;
  v21 = this->m_RdCompanionLibrary->LoadCompanion(
          this->m_RdCompanionLibrary,
          v27,
          v17,
          CallbackInterface,
          DeviceCompanion);
  v10 = v21;
  if ( v21 >= 0 )
  {
    WPP_IFR_SF_q(DriverGlobals, 4u, 0xCu, 0x15u, WPP_FxCompanionLibrary_cpp_Traceguids, v20);
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x14u, WPP_FxCompanionLibrary_cpp_Traceguids, v21);
    v9 = 1;
  }
$exit_22:
  FxPoolFree((FX_POOL_TRACKER *)v17);
  if ( v9 )
    FxCompanionLibrary::CloseCompanionLibraryInterface(this);
  return v10;
}
