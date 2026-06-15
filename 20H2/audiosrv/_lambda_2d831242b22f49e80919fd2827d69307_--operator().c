/*
 * XREFs of _lambda_2d831242b22f49e80919fd2827d69307_::operator() @ 0x180072C38
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_2d831242b22f49e80919fd2827d69307___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::Invoke @ 0x1800737B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800737B0.c)
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036640 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F2D8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F304 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180135FE4 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2d831242b22f49e80919fd2827d69307_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // ebx
  AtmosCheck *v7; // rcx
  wil::details::in1diag3 *v8; // rcx
  int refreshed; // eax
  struct Windows::ApplicationModel::IPackage *v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  bool v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = a2;
  v15 = 0;
  LOBYTE(v13) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v13);
  if ( v6 < 0 )
    goto LABEL_15;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v15);
  if ( v6 < 0 )
    goto LABEL_15;
  if ( (_BYTE)v13 && !v15 )
  {
    v11[0] = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v11);
    if ( (*(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL))(a3, v11) < 0
      || AtmosCheck::IsUsefulPackage(v7, v11[0]) )
    {
      *((_DWORD *)*a1 + 46) = 2;
      v14 = 0;
      refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(*a1, &v14);
      v8 = retaddr;
      if ( refreshed < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1698LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)refreshed);
      if ( v14 || !*((_BYTE *)*a1 + 209) )
      {
        v8 = *a1;
        if ( *((_BYTE *)*a1 + 208) )
          v6 = AtmosCheck::PerformLicenseCheck(v8, 1);
      }
    }
    AtmosCheck::Trace(v8, "AppInstall check result", v6);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v11);
  }
  if ( v6 < 0 )
LABEL_15:
    AtmosCheck::Trace(v5, "AppInstall check result", v6);
  return (unsigned int)v6;
}
