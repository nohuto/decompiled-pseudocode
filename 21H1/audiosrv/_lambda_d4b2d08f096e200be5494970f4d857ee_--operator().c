/*
 * XREFs of _lambda_d4b2d08f096e200be5494970f4d857ee_::operator() @ 0x180073A10
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUpdatingEventArgs___Windows::ApplicationModel::IPackageUpdatingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_d4b2d08f096e200be5494970f4d857ee___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___::Invoke @ 0x1800741D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800741D0.c)
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180037148 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F618 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F644 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180136FC4 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d4b2d08f096e200be5494970f4d857ee_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // ebx
  AtmosCheck *v7; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  bool v11; // [rsp+50h] [rbp+28h] BYREF
  __int64 v12; // [rsp+58h] [rbp+30h] BYREF
  int v13; // [rsp+60h] [rbp+38h] BYREF
  struct Windows::ApplicationModel::IPackage *v14; // [rsp+68h] [rbp+40h] BYREF

  v12 = a2;
  v13 = 0;
  LOBYTE(v12) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 80LL))(a3, &v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 88LL))(a3, &v13);
    if ( v6 >= 0 && (_BYTE)v12 && !v13 )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
      if ( ((*(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL))(
              a3,
              &v14) < 0
         || AtmosCheck::IsUsefulPackage(v7, v14))
        && AtmosCheck::IsLicenseEvaluationRequired(*a1) )
      {
        *((_DWORD *)*a1 + 46) = 4;
        v11 = 0;
        refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(*a1, &v11);
        if ( refreshed < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1812LL,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)refreshed);
        if ( v11 || !*((_BYTE *)*a1 + 209) )
        {
          if ( *((_BYTE *)*a1 + 208) )
            v6 = AtmosCheck::PerformLicenseCheck(*a1, 1);
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
    }
  }
  AtmosCheck::Trace(v5, "AppUpdating check result", v6);
  return (unsigned int)v6;
}
