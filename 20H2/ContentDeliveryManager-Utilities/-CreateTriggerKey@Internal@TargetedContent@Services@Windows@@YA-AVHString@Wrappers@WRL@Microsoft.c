/*
 * XREFs of ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800736C0
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800742CC (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_1800742CC.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18007438C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074840 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800777E4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x180073AE4 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerKey(HSTRING *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rbx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  PCWSTR v16; // rdi
  PCWSTR v17; // rbx
  PCWSTR v18; // rax
  int v19; // eax
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v21; // rdi
  PCWSTR v22; // rbx
  PCWSTR v23; // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  void *v26; // rbx
  int v27; // eax
  HSTRING v29[3]; // [rsp+38h] [rbp-40h] BYREF
  LPVOID pv[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  HSTRING v32; // [rsp+B8h] [rbp+40h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+48h] BYREF
  HSTRING v34; // [rsp+C8h] [rbp+50h] BYREF

  v29[2] = (HSTRING)-2LL;
  v29[0] = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL);
  WindowsDeleteString(0LL);
  v29[0] = 0LL;
  v5 = v4(a2, v29);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_15;
  v34 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL);
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v8 = v7(a2, &v34);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x272,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  string = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v11 = v10(a2, &string);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x274,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_18;
  }
  v32 = 0LL;
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v14 = v13(a2, &v32);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x276,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_19;
  }
  memset(pv, 0, 24);
  if ( !WindowsIsStringEmpty(string) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v21 = WindowsGetStringRawBuffer(v32, 0LL);
    v22 = WindowsGetStringRawBuffer(v34, 0LL);
    v23 = WindowsGetStringRawBuffer(v29[0], 0LL);
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s_%s_%s_%s",
            v23,
            v22,
            v21,
            StringRawBuffer,
            0);
    v25 = retaddr;
    if ( v24 >= 0 )
      goto LABEL_9;
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x287,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v24);
    JUMPOUT(0x1800739FDLL);
  }
  v16 = WindowsGetStringRawBuffer(v32, 0LL);
  v17 = WindowsGetStringRawBuffer(v34, 0LL);
  v18 = WindowsGetStringRawBuffer(v29[0], 0LL);
  v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s_%s_%s",
          v18,
          v17,
          v16);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v19);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x270,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
LABEL_9:
  *a1 = 0LL;
  v26 = pv[0];
  v29[1] = (HSTRING)pv[0];
  v27 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(a1);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  if ( v26 )
    CoTaskMemFree(v26);
  WindowsDeleteString(v32);
  v32 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v34);
  v34 = 0LL;
  WindowsDeleteString(v29[0]);
  return a1;
}
