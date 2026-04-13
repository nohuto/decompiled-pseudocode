/*
 * XREFs of ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800AD830
 * Callers:
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x180071E04 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800AD9D0 (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::CommonHelper::MakeRootSettingsContainer(__int64 a1)
{
  int ActivationFactory; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Storage.ApplicationData", 0x1Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_5612147b_e843_45e3_94d8_06169e3c8e17, v12);
  v3 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_14;
  v11 = 0LL;
  v4 = *(_QWORD *)v12[0];
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(v4 + 48))(v12[0], &v11);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x1800AD9C6LL);
  }
  v10 = 0LL;
  v7 = *v11;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 80))(v11, &v10);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v8);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_15;
  }
  CreativeFramework::CommonHelper::MakeSettingsContainer(a1, v10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return a1;
}
