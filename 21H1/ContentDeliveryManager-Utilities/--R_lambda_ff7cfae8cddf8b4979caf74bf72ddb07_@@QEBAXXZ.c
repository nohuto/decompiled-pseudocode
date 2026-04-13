/*
 * XREFs of ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004A1BC
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@@details@wil@@UEAAJXZ @ 0x18004EC10 (-Run@-$functor_wrapper_void@AEAV_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180047DF0 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180048588 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x1800486FC (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180048908 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180048CF4 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180049194 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004A8E4 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x18004B0CC (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18004B2F0 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x18004B620 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
HRESULT __fastcall _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()(__int64 *a1)
{
  __int64 *v2; // rsi
  const char *v3; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  char v5; // r13
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 **i; // r14
  __int64 **v10; // r15
  unsigned __int128 v11; // kr10_16
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r14
  DWORD v16; // edi
  __int64 v17; // rcx
  ToastNotification::ActivityToastNotificationCallback *v18; // rcx
  __int64 v19; // r14
  LSTATUS v20; // eax
  unsigned __int64 v21; // r9
  const char *v22; // rdx
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-2A8h]
  HSTRING v25; // [rsp+40h] [rbp-288h] BYREF
  HSTRING v26; // [rsp+48h] [rbp-280h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-278h] BYREF
  __int64 v28; // [rsp+58h] [rbp-270h]
  HSTRING string[2]; // [rsp+60h] [rbp-268h] BYREF
  struct _GUID v30; // [rsp+70h] [rbp-258h] BYREF
  int v31; // [rsp+80h] [rbp-248h] BYREF
  _QWORD v32[2]; // [rsp+88h] [rbp-240h] BYREF
  __int64 v33; // [rsp+98h] [rbp-230h]
  __int64 *v34; // [rsp+A0h] [rbp-228h]
  unsigned __int128 v35; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-210h]
  __int64 v37; // [rsp+C0h] [rbp-208h]
  char *v38[2]; // [rsp+C8h] [rbp-200h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-1F0h]
  unsigned __int64 v40; // [rsp+E0h] [rbp-1E8h]
  GUID rguid; // [rsp+F0h] [rbp-1D8h] BYREF
  _QWORD v42[4]; // [rsp+100h] [rbp-1C8h] BYREF
  int v43; // [rsp+120h] [rbp-1A8h]
  int *v44; // [rsp+128h] [rbp-1A0h]
  int *v45; // [rsp+130h] [rbp-198h]
  int v46; // [rsp+138h] [rbp-190h] BYREF
  char v47; // [rsp+13Ch] [rbp-18Ch]
  int v48; // [rsp+160h] [rbp-168h] BYREF
  const char *v49; // [rsp+168h] [rbp-160h]
  __int64 v50; // [rsp+170h] [rbp-158h]
  char v51; // [rsp+178h] [rbp-150h]
  __int64 v52; // [rsp+180h] [rbp-148h]
  _BYTE v53[144]; // [rsp+188h] [rbp-140h] BYREF
  __int64 v54; // [rsp+218h] [rbp-B0h]
  __int128 v55; // [rsp+220h] [rbp-A8h]
  __int64 v56; // [rsp+230h] [rbp-98h]
  OLECHAR sz[40]; // [rsp+240h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v37 = -2LL;
  v2 = 0LL;
  string[0] = 0LL;
  v40 = 15LL;
  v39 = 0LL;
  LOBYTE(v38[0]) = 0;
  WindowsDeleteString(0LL);
  try
  {
    string[0] = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(
      &v31,
      *(_QWORD *)a1[1],
      string,
      &rguid,
      &v31,
      v38);
    v3 = (const char *)v38;
    if ( v40 >= 0x10 )
      v3 = v38[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
    v42[1] = 0LL;
    v42[2] = v42;
    v42[3] = 0LL;
    v43 = 0;
    v44 = &v48;
    v45 = &v46;
    v46 = 0;
    v47 = 0;
    v51 = 0;
    v48 = 0;
    v49 = "HandleResumableTaskNotificationActivity";
    v50 = 0LL;
    v5 = 1;
    v52 = 1LL;
    v54 = 0LL;
    memset_0(v53, 0, sizeof(v53));
    v55 = 0LL;
    v56 = 0LL;
    v42[0] = &MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::`vftable';
    v30 = rguid;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v42,
      &v30,
      StringRawBuffer,
      v3);
    v6 = CDPInitialize();
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v6);
      JUMPOUT(0x18004A835LL);
    }
    StringFromGUID2(&rguid, sz, 39);
    v34 = 0LL;
    v33 = 0LL;
    MobilityExperience::CDPActivityHelper::FindAllUserAccounts(&SystemTimeAsFileTime);
    MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
      &v35,
      *(_QWORD *)&SystemTimeAsFileTime);
    v7 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v11 = v35;
    v10 = (__int64 **)(v11 >> 64);
    v8 = (_QWORD *)v11;
    for ( i = (__int64 **)v35; i != v10; ++i )
    {
      v12 = *i;
      *(_QWORD *)&v30.Data1 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
      v32[0] = 0LL;
      v13 = *v12;
      v32[0] = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, _QWORD *))(v13 + 48))(v12, &rguid, v32) >= 0 )
      {
        v14 = v32[0];
        v32[0] = 0LL;
        v33 = v14;
        v34 = v12;
        v5 = 0;
        v7 = v14;
        v2 = v12;
        v8 = (_QWORD *)v35;
        break;
      }
      if ( v32[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
      v8 = (_QWORD *)v35;
    }
    if ( v8 )
    {
      v15 = (_QWORD *)*((_QWORD *)&v35 + 1);
      if ( v8 != *((_QWORD **)&v35 + 1) )
      {
        do
        {
          if ( *v8 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
          ++v8;
        }
        while ( v8 != v15 );
        v8 = (_QWORD *)v35;
      }
      operator delete(v8);
      v35 = 0LL;
      v36 = 0LL;
    }
    if ( SystemTimeAsFileTime )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&SystemTimeAsFileTime + 16LL))(SystemTimeAsFileTime);
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      v5,
      (__int64)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    v16 = v31;
    LODWORD(v32[0]) = v31;
    v32[1] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    WindowsDeleteString(0LL);
    v26 = 0LL;
    WindowsDeleteString(0LL);
    v25 = 0LL;
    SystemTimeAsFileTime.dwLowDateTime = v16;
    v28 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v17, &SystemTimeAsFileTime, &v25, &v26);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v18, v25, v26);
    v19 = *a1;
    v30.Data1 = v16;
    *(_QWORD *)v30.Data4 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(v19, &v30, v2);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v20 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
            L"LastResumeOnPCInteractionTime",
            0xBu,
            &SystemTimeAsFileTime,
            8u);
    v21 = (unsigned __int16)v20 | 0x80070000;
    if ( v20 <= 0 )
      v21 = (unsigned int)v20;
    if ( (v21 & 0x80000000) != 0LL )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
        (const char *)v21);
    v22 = (const char *)v38;
    if ( v40 >= 0x10 )
      v22 = v38[0];
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v42,
      v22);
    WindowsDeleteString(v26);
    v26 = 0LL;
    WindowsDeleteString(v25);
    v25 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v2 )
      (*(void (__fastcall **)(__int64 *))(*v2 + 16))(v2);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::~HandleResumableTaskNotificationActivity((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v42);
    if ( v40 >= 0x10 )
      operator delete(v38[0]);
    v40 = 15LL;
    v39 = 0LL;
    LOBYTE(v38[0]) = 0;
    result = WindowsDeleteString(string[0]);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtExceptionMsg(
             retaddr,
             (void *)0x93,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
             "Failed to handle an Activity Toast Notification",
             lpData);
  }
  return result;
}
