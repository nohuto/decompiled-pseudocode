/*
 * XREFs of ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18004D500
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004C3CC (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004FA68 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004FB10 (--$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherOptions@S.c)
 *     ??$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004FBF8 (--$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherStati.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004FCA0 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004FD08 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x180051214 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(
        ToastNotification::ActivityToastNotificationCallback *this,
        HSTRING a2,
        HSTRING a3)
{
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  PCWSTR v14; // rcx
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, HSTRING, HSTRING *); // rsi
  HRESULT v17; // eax
  char v18; // di
  HSTRING v19; // rcx
  __int64 v20; // rcx
  bool v21; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v22[7]; // [rsp+29h] [rbp-28h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-21h] BYREF
  HSTRING string; // [rsp+38h] [rbp-19h] BYREF
  __int64 v25; // [rsp+40h] [rbp-11h] BYREF
  __int64 v26; // [rsp+48h] [rbp-9h] BYREF
  __int64 v27; // [rsp+50h] [rbp-1h] BYREF
  __int64 *v28; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING v31; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v29[1] = -2LL;
  LODWORD(StringRawBuffer) = 0;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>(&v28);
  v25 = 0LL;
  v5 = *v28;
  v25 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 *))(v5 + 48))(v28, a2, &v25);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_31;
  wil::ActivateInstance<Windows::System::ILauncherOptions>(&v27);
  if ( WindowsGetStringLen(a3) )
  {
    StringRawBuffer = 0LL;
    v8 = *v28;
    StringRawBuffer = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, PCWSTR *))(v8 + 48))(v28, a3, &StringRawBuffer);
    v10 = retaddr;
    if ( v9 < 0 )
      goto LABEL_32;
    v11 = (*(__int64 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v27 + 128LL))(v27, StringRawBuffer);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_34;
    }
    if ( StringRawBuffer )
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
  }
  wil::GetActivationFactory<Windows::System::ILauncherStatics>(v29);
  StringRawBuffer = 0LL;
  v12 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(v29[0], v25, v27, &StringRawBuffer);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18004D829LL);
  }
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(&v21, StringRawBuffer);
  v14 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v26 = 0LL;
  string = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 120LL))(v25, &v26) < 0 )
    goto LABEL_15;
  v15 = v26;
  v16 = *(int (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v26 + 48LL);
  WindowsDeleteString(string);
  string = 0LL;
  v31 = 0LL;
  v17 = WindowsCreateStringReference(L"mmx-scid", 8u, &hstringHeader, &v31);
  if ( v17 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xF5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v6);
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0xFC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v18 = 1;
  LODWORD(StringRawBuffer) = 1;
  if ( v16(v15, v31, &string) < 0 )
  {
LABEL_15:
    v19 = string;
    goto LABEL_16;
  }
  v19 = string;
  if ( !string )
LABEL_16:
    v18 = 0;
  if ( v18 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
    v22[0] = 0;
    v21 = v21;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
      &v21,
      v22,
      &StringRawBuffer);
    v19 = string;
  }
  WindowsDeleteString(v19);
  string = 0LL;
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v29[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v28 )
    (*(void (__fastcall **)(__int64 *))(*v28 + 16))(v28);
}
