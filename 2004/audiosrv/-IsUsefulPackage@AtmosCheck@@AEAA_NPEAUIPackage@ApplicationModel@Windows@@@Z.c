/*
 * XREFs of ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180136C74
 * Callers:
 *     _lambda_2d831242b22f49e80919fd2827d69307_::operator() @ 0x1800736F8 (_lambda_2d831242b22f49e80919fd2827d69307_--operator().c)
 *     _lambda_5056499381e6be98f6bae348336db3ef_::operator() @ 0x180073914 (_lambda_5056499381e6be98f6bae348336db3ef_--operator().c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::operator() @ 0x180073B10 (_lambda_d4b2d08f096e200be5494970f4d857ee_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::IsUsefulPackage(AtmosCheck *this, struct Windows::ApplicationModel::IPackage *a2)
{
  char v3; // bl
  struct Windows::ApplicationModel::IPackage *v5; // [rsp+20h] [rbp-10h] BYREF
  AtmosCheck *v6; // [rsp+50h] [rbp+20h] BYREF
  char v7; // [rsp+58h] [rbp+28h] BYREF
  char v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v6 = this;
  v5 = a2;
  v3 = 0;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = 0LL;
  LOBYTE(v6) = 0;
  v7 = 0;
  v8 = 0;
  (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *, AtmosCheck **))(*(_QWORD *)a2 + 64LL))(a2, &v6);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
  if ( (**(int (__fastcall ***)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01,
         &v9) >= 0 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 88LL))(v9, &v7);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 80LL))(v9, &v8);
  }
  if ( !(_BYTE)v6 && !v7 && !v8 )
    v3 = 1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v5);
  return v3;
}
