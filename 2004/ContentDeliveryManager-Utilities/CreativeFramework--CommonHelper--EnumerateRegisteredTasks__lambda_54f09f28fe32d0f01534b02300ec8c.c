/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_54f09f28fe32d0f01534b02300ec8cff___ @ 0x1800AF0A4
 * Callers:
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800ADB68 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800AEF70 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CDE41 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_54f09f28fe32d0f01534b02300ec8cff___(
        __int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, HSTRING *); // rdi
  int v21; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v23; // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdi
  __int64 result; // rax
  __int64 v28; // [rsp+38h] [rbp-89h] BYREF
  __int64 *v29; // [rsp+40h] [rbp-81h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-79h] BYREF
  HSTRING v31; // [rsp+50h] [rbp-71h] BYREF
  __int64 v32; // [rsp+58h] [rbp-69h] BYREF
  __int64 v33; // [rsp+60h] [rbp-61h] BYREF
  __int64 *v34; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v35; // [rsp+70h] [rbp-51h]
  const WCHAR *v36[2]; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-39h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-21h] BYREF
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v36[1] = (const WCHAR *)-2LL;
  v34 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_34;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v34);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_35;
  }
  v33 = 0LL;
  v5 = *v34;
  v33 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v34, &v33);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_36;
  }
  v35 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v33)(
         v33,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v30);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8);
    goto LABEL_37;
  }
  v10 = v30;
  v35 = v30;
  v29 = 0LL;
  v11 = *v30;
  v29 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v11 + 48))(v30, &v29);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v12);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  LOBYTE(v28) = 1;
  while ( 1 )
  {
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(*v29 + 56))(v29, &v28) < 0 || !(_BYTE)v28 )
      goto LABEL_24;
    v30 = 0LL;
    v14 = *v29;
    v30 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 48))(v29, &v30);
    v16 = retaddr;
    if ( v15 < 0 )
      goto LABEL_32;
    v32 = 0LL;
    v17 = *v30;
    v32 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 56))(v30, &v32);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v18);
LABEL_32:
      wil::details::in1diag3::Throw_Hr(
        v16,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_33;
    }
    v19 = v32;
    v31 = 0LL;
    v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 56LL);
    WindowsDeleteString(0LL);
    v31 = 0LL;
    v21 = v20(v19, &v31);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v21);
      JUMPOUT(0x1800AF52ALL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v31, 0LL);
    v23 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
    if ( CompareStringOrdinal(v23, -1, StringRawBuffer, -1, 1) == 2 )
      break;
    WindowsDeleteString(v31);
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *))(*v29 + 64))(v29, &v28) == -2147483637 )
      goto LABEL_20;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  }
  v24 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v19 + 48LL))(v19, &hstringHeader);
  v25 = retaddr;
  if ( v24 < 0 )
    goto LABEL_38;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 96LL))(v19, 0LL);
  memset_0(sz, 0, 0x4EuLL);
  StringFromGUID2((const GUID *const)&hstringHeader, sz, 39);
  v26 = **(_QWORD **)(a1 + 8);
  v36[0] = WindowsGetStringRawBuffer(v31, 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
    v36,
    sz,
    (const unsigned __int16 *)(v26 + 8));
  WindowsDeleteString(v31);
LABEL_20:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
LABEL_24:
  if ( v29 )
    (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
  result = (*(__int64 (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  if ( v33 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v34 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v34 + 16))(v34);
  return result;
}
