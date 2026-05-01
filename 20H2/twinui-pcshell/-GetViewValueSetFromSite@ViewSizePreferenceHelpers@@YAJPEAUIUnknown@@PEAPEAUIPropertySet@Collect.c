/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CE8E0
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803CF2C8 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180042E7C (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180069070 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009391C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18016C104 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18019B9C4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$Make@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@PEAU5678@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CD790 (--$Make@VLaunchUIContext@-CP@--GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknow.c)
 *     ??R_lambda_ba34a585c1760404579405f4d163a371_@@QEBAJXZ @ 0x1803CDE7C (--R_lambda_ba34a585c1760404579405f4d163a371_@@QEBAJXZ.c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1803CE850 (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1803CF834 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite(
        IUnknown *this,
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  HRESULT v4; // eax
  HWND *v5; // r9
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  void *v9; // rbx
  int (__fastcall *v10)(void *, LPVOID *); // rdi
  unsigned int v11; // r8d
  PVOID Reserved1; // rbx
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  unsigned int TargetViewSizePreferenceOrDefault; // eax
  unsigned int v18; // r8d
  void *v19; // rbx
  volatile int *v20; // rdx
  WCHAR *v21; // rbx
  __int64 (__fastcall *v22)(WCHAR *, GUID *, __int64 *); // rdi
  int v23; // eax
  int v24; // eax
  WCHAR *v26; // [rsp+30h] [rbp-69h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-61h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+58h] [rbp-41h] BYREF
  void *v32; // [rsp+60h] [rbp-39h] BYREF
  void *v33; // [rsp+68h] [rbp-31h] BYREF
  struct IUnknown v34; // [rsp+70h] [rbp-29h] BYREF
  const WCHAR *v35[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v36; // [rsp+88h] [rbp-11h] BYREF
  HSTRING_HEADER v37; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v38; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  punk = this;
  a2->lpVtbl = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(
         &GUID_f1c46d71_b791_4110_8d5c_7108f22c1010,
         0LL,
         1u,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &ppv);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v26 = (WCHAR *)ppv;
    ppv = 0LL;
    if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
           punk,
           &v34,
           (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&v36,
           v5) )
    {
      v7 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
             v36,
             (unsigned int)v34.lpVtbl);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 259LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)(unsigned int)v7);
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
        goto LABEL_32;
      }
    }
    else
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             punk,
             (const GUID *const)&SID_LaunchSourceAppUserModelId,
             &GUID_989191ac_28ff_4cf0_9584_e0d078bc2396,
             &ppvOut) >= 0 )
      {
        pv = 0LL;
        v9 = ppvOut;
        v10 = *(int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)ppvOut + 24LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( v10(v9, &pv) >= 0 )
        {
          v35[0] = (const WCHAR *)pv;
          Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, v35, v11)[1].Reserved.Reserved1;
          v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)off_1804CF570, v13);
          v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                  (HSTRING)v14[1].Reserved.Reserved1,
                  v15,
                  (__int64)Reserved1);
          v6 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x10F,
              (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
              (const char *)(unsigned int)v16);
            if ( pv )
              CoTaskMemFree(pv);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_31;
          }
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    TargetViewSizePreferenceOrDefault = ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk);
    if ( TargetViewSizePreferenceOrDefault )
    {
      v7 = ViewSizePreferenceHelpers::SetTargetViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
             TargetViewSizePreferenceOrDefault,
             v18);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 279LL;
        goto LABEL_18;
      }
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    if ( IUnknown_QueryService(
           punk,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &v33) >= 0 )
    {
      v35[0] = v26;
      PEAU5678::Z::Make<`ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext,AJPEAUIUnknown,Windows::Foundation::Collections::IPropertySet * *>(
        (__int64 *)&ppvOut,
        v35);
      v19 = ppvOut;
      if ( !ppvOut )
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x131,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)0x8007000ELL);
LABEL_30:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        goto LABEL_31;
      }
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v33 + 24LL))(v33, ppvOut);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)v19,
        v20);
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    if ( IUnknown_QueryService(punk, &stru_180541E38, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v32) >= 0 )
      (*(void (__fastcall **)(void *, WCHAR *))(*(_QWORD *)v32 + 24LL))(v32, v26);
    v35[0] = (const WCHAR *)&punk;
    v35[1] = (const WCHAR *)&v26;
    _lambda_ba34a585c1760404579405f4d163a371_::operator()((__int64)v35);
    v31 = 0LL;
    v21 = v26;
    v22 = **(__int64 (__fastcall ***)(WCHAR *, GUID *, __int64 *))v26;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    v23 = v22(v21, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, &v31);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        336LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
    v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 48LL))(v31, 1LL);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        337LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v24);
      __debugbreak();
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    a2->lpVtbl = (struct IUnknownVtbl *)v26;
    v6 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v4);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v6;
}
