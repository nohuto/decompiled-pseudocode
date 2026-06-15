/*
 * XREFs of ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180073A54
 * Callers:
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073194 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180009DB0 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047588 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z @ 0x1800523D8 (--$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005261C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071964 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_f24fd18e89a514787d866aea92396781___ @ 0x1800726BC (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFlags_2__Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CD898 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800EF66C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AtmosCheck::RegisterForUserWatcherNotifications(AtmosCheck *this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // esi
  _QWORD *v5; // r14
  __int64 *v6; // rcx
  int ActivationFactory; // eax
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  __int64 *v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  AtmosCheck *v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !AtmosCheck::IsRunningOnXbox(this) )
    return 0LL;
  v15 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
  v14 = 0LL;
  v13 = &v14;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v13);
  v3 = Microsoft::WRL::AsWeak<IAudioSessionStore>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (_QWORD *)((char *)this + 248);
    if ( !*((_QWORD *)this + 31) )
    {
      v13 = 0LL;
      v18 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.System.User", 0x14u, 0x13u);
      v6 = v13;
      v13 = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      ActivationFactory = RoGetActivationFactory(v18, &GUID_155eb23b_242a_45e0_a2e9_3171fc6a7fdd, &v13);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v8 = 2898LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ActivationFactory);
LABEL_15:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
        goto LABEL_16;
      }
      v9 = v13;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 248);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64 *, char *))(*v9 + 48))(v9, (char *)this + 248);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v8 = 2899LL;
        goto LABEL_11;
      }
      ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(&hstringHeader, &v14);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
      Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_f24fd18e89a514787d866aea92396781___(
        &v16,
        (__int64)&hstringHeader);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&hstringHeader);
      v10 = v16;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v5 + 72LL))(*v5, v16, (char *)this + 256);
      v4 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6C,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v11);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_15;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 56LL))(*v5);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
    }
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v14);
    if ( this )
      (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4C,
    (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)v3);
LABEL_16:
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v14);
  if ( this )
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
  return v4;
}
