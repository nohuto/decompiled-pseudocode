/*
 * XREFs of ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009890C
 * Callers:
 *     ?Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ @ 0x180098900 (-Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B92C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18007A320 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18007A534 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007FE08 (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180098EA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180098FDC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaAp.c)
 *     ??$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UILockScreenRegistrySettingProvider@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180099118 (--$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA-AV-$com_ptr_.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CFEF1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=1
void __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana(
        CreativeFramework::Actions::LaunchCortanaService *this)
{
  int v1; // eax
  LSTATUS ValueW; // edx
  __int16 v3; // cx
  signed int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int LockAppHost; // eax
  wil::details::in1diag3 *v9; // rcx
  struct ILockAppHost *v10; // rbx
  __int64 (__fastcall *v11)(struct ILockAppHost *, GUID *, __int64 *); // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, GUID *, GUID *, __int64 *); // rsi
  __int64 v16; // rcx
  int v17; // eax
  void **v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct ILockAppHost *v22; // rcx
  char v23; // [rsp+40h] [rbp-2C8h] BYREF
  _BYTE v24[7]; // [rsp+41h] [rbp-2C7h] BYREF
  __int64 v25; // [rsp+48h] [rbp-2C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-2B0h] BYREF
  int v28; // [rsp+60h] [rbp-2A8h] BYREF
  char v29; // [rsp+64h] [rbp-2A4h]
  int v30; // [rsp+68h] [rbp-2A0h] BYREF
  char v31; // [rsp+6Ch] [rbp-29Ch]
  struct ILockAppHost *v32; // [rsp+70h] [rbp-298h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp-290h] BYREF
  int v34; // [rsp+7Ch] [rbp-28Ch] BYREF
  __int64 v35; // [rsp+80h] [rbp-288h]
  _BYTE v36[8]; // [rsp+88h] [rbp-280h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-278h] BYREF
  void *v38[3]; // [rsp+98h] [rbp-270h] BYREF
  unsigned __int64 v39; // [rsp+B0h] [rbp-258h]
  void *v40[3]; // [rsp+B8h] [rbp-250h] BYREF
  unsigned __int64 v41; // [rsp+D0h] [rbp-238h]
  void *pvData[66]; // [rsp+E0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+0h]

  v35 = -2LL;
  v39 = 7LL;
  v38[2] = 0LL;
  LOWORD(v38[0]) = 0;
  std::wstring::assign(v38, (char *)L"StartMode=Reactive&QuerySource=LockScreen", 0x29uLL);
  v41 = 7LL;
  v40[2] = 0LL;
  LOWORD(v40[0]) = 0;
  std::wstring::assign(v40, (char *)L"&QuerySourceSecondaryId=", 0x18uLL);
  wil::ActivateInstance<ContentManagement::ILockScreenRegistrySettingProvider>(&v27);
  v23 = 0;
  v24[0] = 0;
  v1 = (*(__int64 (__fastcall **)(__int64, char *, _BYTE *))(*(_QWORD *)v27 + 48LL))(v27, &v23, v24);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_42;
  }
  if ( v23 )
  {
    std::wstring::append(v40, (void **)L"LaunchFromSpotlight", 0x13uLL);
  }
  else
  {
    memset_0(pvData, 0, 0x208uLL);
    pcbData = 520;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Speech_OneCore\\Preferences",
               L"Id",
               2u,
               0LL,
               pvData,
               &pcbData);
    if ( ValueW )
    {
      v3 = 0;
      LOWORD(pvData[0]) = 0;
    }
    else
    {
      v3 = (__int16)pvData[0];
    }
    v4 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v4 = ValueW;
    if ( v4 >= 0 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *((_WORD *)pvData + v5) );
      if ( v5 )
        std::wstring::append(v40, pvData, v5 & -(__int64)(v3 != 0));
    }
  }
  std::wstring::append(v38, v40, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v41 >= 8 )
    operator delete(v40[0]);
  v6 = `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v27 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
                       v36);
    v6 = v27;
  }
  v28 = 0;
  v29 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D638,
    0x125F087u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v28,
    1u,
    3);
  v7 = `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v27 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
                       v37);
    v7 = v27;
  }
  v30 = 0;
  v31 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D628,
    0x1389317u,
    (v7 >> 10) & 1,
    (v7 >> 11) & 1,
    (__int64)&v30,
    1u,
    3);
  v32 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  LockAppHost = GetLockAppHost(&v32);
  v9 = retaddr;
  if ( LockAppHost < 0 )
  {
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)LockAppHost);
    __debugbreak();
  }
  v10 = v32;
  v11 = **(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v32;
  v12 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v11(v10, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v26);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = v26;
  v15 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v26 + 24LL);
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v15(v14, &IID_IAboveLockActivationManager, &GUID_f50a27f7_82b6_4711_be12_9becff694462, &v25);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v34 = 0;
  v18 = v38;
  if ( v39 >= 8 )
    v18 = (void **)v38[0];
  v19 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, void **, int *))(*(_QWORD *)v25 + 24LL))(
          v25,
          L"Microsoft.549981C3F5F10_8wekyb3d8bbwe!App",
          v18,
          &v34);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x180098E1DLL);
  }
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v39 >= 8 )
    operator delete(v38[0]);
}
