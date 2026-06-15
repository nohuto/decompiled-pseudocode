/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180038F2C
 * Callers:
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073C54 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180047B68 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D48 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F718 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::_lambda_d4b2d08f096e200be5494970f4d857ee_ @ 0x180070318 (_lambda_d4b2d08f096e200be5494970f4d857ee_--_lambda_d4b2d08f096e200be5494970f4d857ee_.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_2d831242b22f49e80919fd2827d69307___ @ 0x180073074 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--Pack.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_5056499381e6be98f6bae348336db3ef___ @ 0x1800730CC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_1800730CC.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_d4b2d08f096e200be5494970f4d857ee___ @ 0x180073124 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_180073124.c)
 *     ??1?$ComPtr@UIAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180073624 (--1-$ComPtr@UIAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  AtmosCheck *v3; // rcx
  int ActivationFactory; // r15d
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  AtmosCheck *v13; // rdi
  __int64 v14; // rax
  char *v15; // r8
  AtmosCheck *v16; // rsi
  AtmosCheck *v18; // [rsp+20h] [rbp-39h] BYREF
  AtmosCheck *v19; // [rsp+28h] [rbp-31h] BYREF
  __int64 v20; // [rsp+30h] [rbp-29h] BYREF
  AtmosCheck *v21; // [rsp+38h] [rbp-21h] BYREF
  char v22[8]; // [rsp+40h] [rbp-19h] BYREF
  char v23[8]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-9h] BYREF
  HSTRING string; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF

  v20 = 0LL;
  v19 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v19);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v20);
  if ( ActivationFactory >= 0 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v24[1] = (char *)this + 56;
    v6 = v20;
    v7 = (_QWORD *)((char *)this + 48);
    v8 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 48);
    if ( ActivationFactory < 0 )
      goto LABEL_23;
    v18 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v18);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_2d831242b22f49e80919fd2827d69307___(
      v24,
      &v18);
    Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>(&v18);
    v9 = lambda_d4b2d08f096e200be5494970f4d857ee_::_lambda_d4b2d08f096e200be5494970f4d857ee_(v22, &v19);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_5056499381e6be98f6bae348336db3ef___(
      &v21,
      v9);
    Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>(v22);
    v10 = lambda_d4b2d08f096e200be5494970f4d857ee_::_lambda_d4b2d08f096e200be5494970f4d857ee_(v23, &v19);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_d4b2d08f096e200be5494970f4d857ee___(
      &v18,
      v10);
    Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>(v23);
    v11 = v24[0];
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v7 + 64LL))(
                          *v7,
                          v24[0],
                          (char *)this + 144);
    if ( ActivationFactory < 0 )
    {
      if ( v18 )
        (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v18 + 16LL))(v18);
      v3 = v21;
      if ( !v21 )
        goto LABEL_21;
      v12 = *(_QWORD *)v21;
      goto LABEL_20;
    }
    v13 = v21;
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, AtmosCheck *, char *))(*(_QWORD *)*v7 + 96LL))(
                          *v7,
                          v21,
                          (char *)this + 152);
    if ( ActivationFactory >= 0 )
    {
      v15 = (char *)this + 160;
      v16 = v18;
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, AtmosCheck *, char *))(*(_QWORD *)*v7 + 80LL))(
                            *v7,
                            v18,
                            v15);
      if ( v16 )
      {
        v14 = *(_QWORD *)v16;
        goto LABEL_17;
      }
    }
    else
    {
      v3 = v18;
      if ( v18 )
      {
        v14 = *(_QWORD *)v18;
LABEL_17:
        (*(void (**)(void))(v14 + 16))();
      }
    }
    if ( !v13 )
      goto LABEL_21;
    v12 = *(_QWORD *)v13;
LABEL_20:
    (*(void (**)(void))(v12 + 16))();
LABEL_21:
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_23:
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  AtmosCheck::Trace(v3, "RegAppDepNotification result", ActivationFactory);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  return (unsigned int)ActivationFactory;
}
