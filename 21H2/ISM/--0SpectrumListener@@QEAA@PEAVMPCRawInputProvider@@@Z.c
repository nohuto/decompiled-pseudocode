/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B648
 * Callers:
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@@Z @ 0x1800899CC (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSpect.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18007F8EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x18008A63C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008B4E8 (--$ActivateInstance@V-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@@Fo.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::IInputPriv____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs_____::_)(Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___ @ 0x18008B590 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18008B590.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18008B604 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QE.c)
 *     ?reset@?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAAXPEAVSpeechRuntimeListener@@@Z @ 0x18008BEDC (-reset@-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x18008D680 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18008D794 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ??0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x18008E4EC (--0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x18008E570 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(SpectrumListener *this, struct MPCRawInputProvider *a2)
{
  const char *v4; // r9
  char *v5; // rbx
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, char *); // r15
  __int64 v11; // rbx
  void *v12; // rax
  int v13; // eax
  const char *v14; // r9
  wil::details::in1diag3 *v15; // rcx
  wil::details::in1diag3 *v16; // rcx
  MPCHeadUpdateListener *Instance; // rax
  int v18; // eax
  int v19; // eax
  SpeechRuntimeListener *v20; // rax
  SpeechRuntimeListener *v21; // rbx
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  struct MPCRawInputProvider *v24; // [rsp+30h] [rbp-50h]
  SpectrumListener *v25; // [rsp+38h] [rbp-48h]
  SpectrumListener *v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v24 = a2;
  v25 = this;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>((__int64)this);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  v5 = (char *)this + 24;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  v6 = retaddr;
  if ( !a2 )
    goto LABEL_18;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Input.Spatial.Internal.InputPriv",
    0x2Cu,
    0x2Bu);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>>(
         v29,
         (__int64 *)this + 3);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      31LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      v15,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_21;
  }
  v9 = *(_QWORD *)v5;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, char *))(**(_QWORD **)v5 + 48LL);
  *(_QWORD *)&v23 = SpectrumListener::OnPhraseDetected;
  DWORD2(v23) = 0;
  v26 = this;
  v27 = v23;
  v11 = 0LL;
  v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v11 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::IInputPriv____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs_____::___Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___(
            (__int64)v12,
            (__int64)&v26);
  *(_QWORD *)&v23 = v11;
  v13 = v10(v9, v11, (char *)this + 48);
  v15 = retaddr;
  if ( v13 < 0 )
    goto LABEL_20;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v16 = retaddr;
  if ( !ISMTestMode::s_instance )
  {
LABEL_21:
    wil::details::in1diag3::_FailFast_Unexpected(
      v16,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v14);
    __debugbreak();
  }
  if ( *(_BYTE *)ISMTestMode::s_instance )
  {
    Instance = MPCHeadUpdateListener::GetInstance();
    MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int64 *)this + 5);
    v18 = MPCRawInputProvider::AttachDevice(*((_QWORD *)this + 2), 0x20000, (_DWORD *)this + 19);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        39LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
  }
  v19 = MPCRawInputProvider::AttachDevice(*((_QWORD *)this + 2), 0x40000, (_DWORD *)this + 20);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      43LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v19);
LABEL_18:
    wil::details::in1diag3::_FailFast_Unexpected(
      v6,
      28LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      v4);
    goto LABEL_19;
  }
  *(_QWORD *)&v23 = operator new(0x58uLL);
  v20 = SpeechRuntimeListener::SpeechRuntimeListener((SpeechRuntimeListener *)v23, v24, *((_DWORD *)this + 20));
  v21 = v20;
  if ( (__int128 *)((char *)this + 32) != &v23 )
  {
    v21 = 0LL;
    std::unique_ptr<SpeechRuntimeListener>::reset((char *)this + 32, v20);
    v20 = 0LL;
  }
  if ( v20 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(v21);
    operator delete(v21, (const struct std::nothrow_t *)0x58);
  }
  *((_BYTE *)this + 72) = 1;
  return this;
}
