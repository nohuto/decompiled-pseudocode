/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4e7___ @ 0x1800AEB98
 * Callers:
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800ADBE8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4e7___(
        bool **a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  HSTRING v10; // rbx
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
  wil::details::in1diag3 *v22; // rcx
  const WCHAR *StringRawBuffer; // rax
  bool v24; // di
  __int64 result; // rax
  char v26[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-21h] BYREF
  HSTRING v28; // [rsp+48h] [rbp-19h] BYREF
  __int64 v29; // [rsp+50h] [rbp-11h] BYREF
  __int64 *v30; // [rsp+58h] [rbp-9h] BYREF
  __int64 v31; // [rsp+60h] [rbp-1h] BYREF
  __int64 *v32; // [rsp+68h] [rbp+7h] BYREF
  HSTRING v33; // [rsp+70h] [rbp+Fh]
  __int64 v34; // [rsp+78h] [rbp+17h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v34 = -2LL;
  v32 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
LABEL_31:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_32;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v32);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_33;
  }
  v31 = 0LL;
  v5 = *v32;
  v31 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v32, &v31);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_34;
  }
  v33 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, HSTRING *))v31)(
         v31,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v28);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8);
    goto LABEL_35;
  }
  v10 = v28;
  v33 = v28;
  v27 = 0LL;
  v11 = *(_QWORD *)v28;
  v27 = 0LL;
  v12 = (*(__int64 (__fastcall **)(HSTRING, __int64 **))(v11 + 48))(v28, &v27);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v12);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x46,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v21);
    JUMPOUT(0x1800AEF69LL);
  }
  v26[0] = 1;
  while ( 1 )
  {
    if ( (*(int (__fastcall **)(__int64 *, char *))(*v27 + 56))(v27, v26) < 0 || !v26[0] )
      goto LABEL_18;
    v30 = 0LL;
    v14 = *v27;
    v30 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 48))(v27, &v30);
    v16 = retaddr;
    if ( v15 < 0 )
      goto LABEL_30;
    v29 = 0LL;
    v17 = *v30;
    v29 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 56))(v30, &v29);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v18);
LABEL_30:
      wil::details::in1diag3::Throw_Hr(
        v16,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_31;
    }
    v19 = v29;
    v28 = 0LL;
    v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 56LL);
    WindowsDeleteString(0LL);
    v28 = 0LL;
    v21 = v20(v19, &v28);
    v22 = retaddr;
    if ( v21 < 0 )
      goto LABEL_36;
    StringRawBuffer = WindowsGetStringRawBuffer(v28, 0LL);
    **a1 = CompareStringOrdinal(*(LPCWCH *)a1[1], -1, StringRawBuffer, -1, 1) == 2;
    v24 = **a1;
    WindowsDeleteString(v28);
    if ( v24 || (*(unsigned int (__fastcall **)(__int64 *, char *))(*v27 + 64))(v27, v26) == -2147483637 )
      break;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  }
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
LABEL_18:
  if ( v27 )
    (*(void (__fastcall **)(__int64 *))(*v27 + 16))(v27);
  result = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v31 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v32 + 16))(v32);
  return result;
}
