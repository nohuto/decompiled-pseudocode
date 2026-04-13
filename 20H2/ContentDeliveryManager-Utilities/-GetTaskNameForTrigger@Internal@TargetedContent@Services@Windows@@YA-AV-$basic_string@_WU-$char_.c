/*
 * XREFs of ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18007149C
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180072570 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180072970 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180072C54 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180036D6C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180070FEC (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180071150 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180071230 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071308 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
HSTRING __fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(HSTRING a1, __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  char *StringRawBuffer; // rax
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  PCWSTR v13; // rbx
  __int64 v14; // rax
  void **v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  void *v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  char *v21; // rdx
  int v22; // eax
  char *v23; // rdx
  unsigned __int64 v24; // r8
  int v26[2]; // [rsp+28h] [rbp-79h]
  HSTRING v27; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v28; // [rsp+50h] [rbp-51h] BYREF
  int v29; // [rsp+58h] [rbp-49h] BYREF
  HSTRING string; // [rsp+60h] [rbp-41h] BYREF
  void *Src; // [rsp+68h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-31h]
  __int64 v33; // [rsp+78h] [rbp-29h]
  LPVOID pv[4]; // [rsp+80h] [rbp-21h] BYREF
  void *v35[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+Fh]
  unsigned __int64 v37; // [rsp+B8h] [rbp+17h]
  void *v38[3]; // [rsp+C0h] [rbp+1Fh] BYREF
  unsigned __int64 v39; // [rsp+D8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  string = a1;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v29);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_30;
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, a2);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v38, StringRawBuffer);
  v27 = 0LL;
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v29) & 0x100) == 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL);
    WindowsDeleteString(v27);
    v27 = 0LL;
    v8 = v7(a2, &v27);
    v9 = retaddr;
    if ( v8 < 0 )
      goto LABEL_31;
  }
  v28 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL);
  WindowsDeleteString(0LL);
  v28 = 0LL;
  v11 = v10(a2, &v28);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0xBB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_33;
  }
  if ( WindowsIsStringEmpty(v28) )
    v13 = (PCWSTR)L"Initial";
  else
    v13 = WindowsGetStringRawBuffer(v28, 0LL);
  v14 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v29);
  memset(pv, 0, 24);
  v15 = v38;
  if ( v39 >= 8 )
    v15 = (void **)v38[0];
  v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s%s%s",
          v14,
          L":",
          v15);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0xC2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18007188DLL);
  }
  Src = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( WindowsIsStringEmpty(v27) )
  {
    *(_QWORD *)v26 = v13;
    v18 = pv[0];
    v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&Src,
            L"%s%s%s",
            pv[0],
            L"-",
            *(_QWORD *)v26);
    v20 = retaddr;
    if ( v19 >= 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
  v21 = (char *)WindowsGetStringRawBuffer(v27, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v35, v21);
  v18 = pv[0];
  v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&Src,
          L"%s%s%s%s%s",
          pv[0]);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v22);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0xC9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v19);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0xB7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_32;
  }
  if ( v37 >= 8 )
    operator delete(v35[0]);
LABEL_17:
  v23 = (char *)Src;
  Src = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35[0]) = 0;
  if ( *(_WORD *)v23 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)&v23[2 * v24] );
  }
  else
  {
    v24 = 0LL;
  }
  std::wstring::assign(v35, v23, v24);
  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v35);
  if ( v37 >= 8 )
    operator delete(v35[0]);
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35[0]) = 0;
  if ( v18 )
    CoTaskMemFree(v18);
  WindowsDeleteString(v28);
  v28 = 0LL;
  WindowsDeleteString(v27);
  v27 = 0LL;
  if ( v39 >= 8 )
    operator delete(v38[0]);
  v39 = 7LL;
  v38[2] = 0LL;
  LOWORD(v38[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
