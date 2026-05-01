/*
 * XREFs of ?ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180149174
 * Callers:
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180150410 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?erase@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180159940 (-erase@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  char *v3; // r14
  struct IUnknown **v4; // r15
  struct IUnknown **v5; // rsi
  bool v6; // di
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v9; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v10; // [rsp+48h] [rbp+10h]

  v3 = (char *)this + 48;
  v4 = (struct IUnknown **)*((_QWORD *)this + 7);
  v5 = (struct IUnknown **)*((_QWORD *)this + 6);
  try
  {
    while ( v5 != v4 )
    {
      v9 = *v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v10 = &v9;
      v6 = (unsigned int)SHIsSameObject(a2, v9) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      if ( v6 )
        break;
      ++v5;
    }
    std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::erase(v3, &v9, v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8D,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
      v7);
  }
}
