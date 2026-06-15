/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180006770 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x1800233A0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180023460 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x180023590 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180023720 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180023860 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180023980 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180023A20 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180023AC0 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180023B60 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180023C40 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180023D90 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x1800240B0 (PbmSetScreenReaderState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003AE8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ??I?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ @ 0x1800087B4 (--I-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008814 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001391C (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180017E30 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001A9E0 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001ACFC (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B50C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B65C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18001D714 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18001D878 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18001D914 (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001D9B4 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002154C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180021570 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180021698 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetAssignedAccessTypeForUser_0 @ 0x180037620 (GetAssignedAccessTypeForUser_0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=192
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v4; // rsi
  unsigned int v5; // eax
  int ProcessFromProcessId; // eax
  unsigned int v8; // r14d
  struct CProcess *v9; // rbx
  struct CProcess *v10; // rax
  struct _RTL_CRITICAL_SECTION *v11; // r14
  volatile signed __int32 *v12; // rbx
  int v13; // eax
  unsigned int LastError; // esi
  struct CProcess *v15; // rbx
  unsigned int v16; // eax
  HANDLE CurrentThread; // rax
  const char *v18; // r9
  unsigned int v19; // eax
  char *v20; // rbx
  void *v21; // rdx
  unsigned int v22; // r8d
  const char *v23; // r9
  int ProcessModuleNameAndAppId; // eax
  void *v25; // rsi
  DWORD v26; // edi
  const char *v27; // r9
  struct CProcess *v28; // rbx
  int v29; // eax
  void *v30; // rdx
  unsigned int v31; // r8d
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  signed int v35; // r9d
  int v36; // eax
  CApplicationManager *v37; // rcx
  signed int v38; // r9d
  int v39; // eax
  int v40; // eax
  CApplicationManager *v41; // rcx
  unsigned int v42; // edi
  int v43; // eax
  HLOCAL v44; // rdi
  int AssignedAccessTypeForUser_0; // eax
  int v46; // eax
  int v47; // r15d
  const char *v48; // r9
  const char *v49; // r9
  PSID *v50; // r15
  const char *v51; // r9
  signed int v52; // eax
  signed int v53; // edx
  signed int v54; // eax
  signed int v55; // edx
  BOOL v56; // r14d
  struct CProcess **v57; // rax
  HLOCAL v58; // r14
  unsigned __int16 *v59; // r15
  int Instance; // eax
  int v61; // eax
  int ReturnLength; // [rsp+20h] [rbp-1F8h]
  int v63; // [rsp+98h] [rbp-180h]
  HANDLE hObject; // [rsp+B8h] [rbp-160h] BYREF
  struct CProcess *v65; // [rsp+C0h] [rbp-158h] BYREF
  _BYTE v66[8]; // [rsp+C8h] [rbp-150h] BYREF
  void *TokenHandle; // [rsp+D0h] [rbp-148h] BYREF
  HLOCAL hMem; // [rsp+D8h] [rbp-140h] BYREF
  unsigned __int16 *v69; // [rsp+E0h] [rbp-138h] BYREF
  int v70; // [rsp+E8h] [rbp-130h] BYREF
  HLOCAL v71; // [rsp+F0h] [rbp-128h] BYREF
  unsigned int Pid; // [rsp+F8h] [rbp-120h] BYREF
  DWORD TokenInformationLength; // [rsp+FCh] [rbp-11Ch] BYREF
  unsigned int v74; // [rsp+100h] [rbp-118h]
  unsigned int v75; // [rsp+104h] [rbp-114h] BYREF
  HANDLE v76; // [rsp+108h] [rbp-110h]
  CApplicationManager *v77; // [rsp+110h] [rbp-108h]
  LPVOID pv; // [rsp+118h] [rbp-100h] BYREF
  int TokenInformation; // [rsp+120h] [rbp-F8h] BYREF
  int v80; // [rsp+124h] [rbp-F4h] BYREF
  BOOL v81; // [rsp+128h] [rbp-F0h]
  int v82; // [rsp+12Ch] [rbp-ECh] BYREF
  int v83; // [rsp+130h] [rbp-E8h] BYREF
  int v84; // [rsp+134h] [rbp-E4h] BYREF
  int v85; // [rsp+138h] [rbp-E0h]
  int v86; // [rsp+13Ch] [rbp-DCh]
  BOOL v87; // [rsp+140h] [rbp-D8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+148h] [rbp-D0h]
  DWORD v89; // [rsp+150h] [rbp-C8h] BYREF
  unsigned int v90; // [rsp+154h] [rbp-C4h] BYREF
  PUCHAR SidSubAuthorityCount; // [rsp+158h] [rbp-C0h]
  int v92; // [rsp+160h] [rbp-B8h] BYREF
  int v93; // [rsp+164h] [rbp-B4h] BYREF
  HANDLE v94; // [rsp+168h] [rbp-B0h]
  __int64 v95; // [rsp+170h] [rbp-A8h] BYREF
  unsigned __int64 v96; // [rsp+178h] [rbp-A0h] BYREF
  struct CProcess *v97; // [rsp+180h] [rbp-98h] BYREF
  HANDLE v98; // [rsp+188h] [rbp-90h]
  CApplicationManager *v99; // [rsp+190h] [rbp-88h]
  struct CProcess **v100; // [rsp+198h] [rbp-80h]
  char v101; // [rsp+1A0h] [rbp-78h]
  char *v102; // [rsp+1A8h] [rbp-70h]
  _BYTE v103[8]; // [rsp+1B0h] [rbp-68h] BYREF
  int v104; // [rsp+1B8h] [rbp-60h] BYREF
  _BYTE v105[8]; // [rsp+1C0h] [rbp-58h] BYREF
  PSID *v106; // [rsp+1C8h] [rbp-50h]
  ATL::CAtlException *v107; // [rsp+1D0h] [rbp-48h] BYREF
  _BYTE v108[64]; // [rsp+1D8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]
  unsigned __int8 v110; // [rsp+220h] [rbp+8h]
  unsigned int v111; // [rsp+220h] [rbp+8h]
  unsigned int v113; // [rsp+230h] [rbp+18h]
  unsigned int v114; // [rsp+230h] [rbp+18h]
  char v115; // [rsp+238h] [rbp+20h] BYREF

  v4 = g_ApplicationManager;
  v77 = g_ApplicationManager;
  *a3 = 0LL;
  v5 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  if ( v5 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x3B2,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             (const char *)v5);
  v65 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(v4, Pid, &v65);
  v8 = ProcessFromProcessId;
  if ( ProcessFromProcessId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B7,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
    v9 = v65;
    if ( v65 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v65 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v9 + 32LL))(v9);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      }
    }
    return v8;
  }
  v10 = v65;
  if ( v65 )
    goto LABEL_345;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 32));
  v102 = (char *)v4 + 32;
  v12 = (volatile signed __int32 *)v65;
  v65 = 0LL;
  if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 32LL))(v12);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
  }
  v13 = CApplicationManager::TryFindProcessFromProcessId(v4, Pid, &v65);
  LastError = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v13);
    if ( v11 )
      LeaveCriticalSection(v11);
LABEL_15:
    v15 = v65;
    if ( v65 && _InterlockedExchangeAdd((volatile signed __int32 *)v65 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v15 + 32LL))(v15);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
    }
    return LastError;
  }
  if ( v65 )
  {
LABEL_342:
    if ( v11 )
      LeaveCriticalSection(v11);
    v10 = v65;
LABEL_345:
    v65 = 0LL;
    *a3 = v10;
    v42 = 0;
    goto LABEL_346;
  }
  v16 = RpcImpersonateClient(a2);
  if ( v16 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x3C3,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v16);
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  hObject = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &hObject) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3C7,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v18);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  hMem = 0LL;
  v71 = 0LL;
  v19 = GetTokenInformation(hObject, (unsigned __int16 **)&v71, &v75, (unsigned __int16 **)&hMem, &v90);
  if ( v19 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x3CD,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v19);
    if ( hMem )
      LocalFree(hMem);
    if ( v71 )
      LocalFree(v71);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  v20 = (char *)OpenProcess(0x101000u, 0, Pid);
  v94 = v20;
  if ( !v20 && GetLastError() == 5 )
  {
    v20 = (char *)OpenProcess(0x100400u, 0, Pid);
    v94 = v20;
    if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v21, v22, v23);
  }
  v87 = 0;
  TokenInformation = 0;
  v89 = 0;
  if ( GetTokenInformation(hObject, TokenUIAccess, &TokenInformation, 4u, &v89) )
    v87 = TokenInformation != 0;
  v96 = -1LL;
  pv = 0LL;
  v69 = 0LL;
  ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(v20, &v69, (unsigned __int16 **)&pv);
  LastError = ProcessModuleNameAndAppId;
  if ( ProcessModuleNameAndAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F3,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessModuleNameAndAppId);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v69 )
      CoTaskMemFree(v69);
    if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v20);
    if ( hMem )
      LocalFree(hMem);
    if ( v71 )
      LocalFree(v71);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  TokenHandle = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v92, v108, v103) < 0
    || (v86 = 1, (unsigned int)(v92 - 65537) > 1) )
  {
    v86 = 0;
  }
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v93, v105, &v104) < 0 || (v110 = 1, v93 != 917505) )
    v110 = 0;
  v85 = 0;
  v70 = 0;
  v84 = 0;
  v83 = 0;
  v82 = 0;
  LOBYTE(v81) = 0;
  v25 = pv;
  if ( !*(_WORD *)pv )
  {
LABEL_106:
    if ( v110 && v75 )
    {
      v95 = 0LL;
      v32 = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL, 0LL, 0LL, &v95, 0LL);
      if ( v32 )
      {
        v113 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x417,
                 (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                 (const char *)v32);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v25);
        if ( v69 )
          CoTaskMemFree(v69);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v71 )
          LocalFree(v71);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        RpcRevertToSelf();
        if ( v11 )
          LeaveCriticalSection(v11);
        goto LABEL_86;
      }
      v33 = (unsigned int)v95 >> 4;
      LOBYTE(v33) = (v95 & 0x10) != 0;
      v81 = v33;
      v115 = 0;
      v34 = CapabilityCheck(-6LL, L"voipCall", &v115);
      v35 = (unsigned __int16)v34 | 0x80070000;
      if ( v34 <= 0 )
        v35 = v34;
      if ( v35 < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v35);
      }
      v85 = v115 != 0;
      v66[0] = 0;
      v36 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", v66);
      v38 = (unsigned __int16)v36 | 0x80070000;
      if ( v36 <= 0 )
        v38 = v36;
      if ( v38 < 0 )
      {
        v37 = (CApplicationManager *)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v38);
        }
      }
      v39 = v70;
      if ( v66[0] )
        v39 = 1;
      v70 = v39;
      v40 = CApplicationManager::ReadBackgroundMediaRecordingCapability(v37, (void *)0xFFFFFFFFFFFFFFFALL, &v83);
      v42 = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x425,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v40);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v25);
        if ( v69 )
          CoTaskMemFree(v69);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v71 )
          LocalFree(v71);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        RpcRevertToSelf();
        if ( v11 )
          LeaveCriticalSection(v11);
        goto LABEL_346;
      }
      v43 = CApplicationManager::ReadUserSigninSupportCapability(v41, (void *)0xFFFFFFFFFFFFFFFALL, &v82);
      v42 = v43;
      if ( v43 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x429,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v43);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v25);
        if ( v69 )
          CoTaskMemFree(v69);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v71 )
          LocalFree(v71);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        RpcRevertToSelf();
        if ( v11 )
          LeaveCriticalSection(v11);
        goto LABEL_346;
      }
    }
    RpcRevertToSelf();
    v44 = v71;
    AssignedAccessTypeForUser_0 = GetAssignedAccessTypeForUser_0(v71);
    LODWORD(v76) = AssignedAccessTypeForUser_0 == 1;
    if ( !v110 || v70 )
    {
      v70 = 1;
    }
    else
    {
      v46 = CApplicationManager::ReadBackgroundAudioTaskCapability(
              (CApplicationManager *)(AssignedAccessTypeForUser_0 == 1),
              TokenHandle,
              &v70,
              &v84);
      v47 = v46;
      if ( v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43D,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v46);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v25);
        if ( v69 )
          CoTaskMemFree(v69);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v44 )
          LocalFree(v44);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( v11 )
          LeaveCriticalSection(v11);
LABEL_189:
        v42 = v47;
LABEL_346:
        wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v65);
        return v42;
      }
    }
    v80 = 0;
    if ( v75 && !(unsigned int)CheckTokenCapability(hObject, *((_QWORD *)v77 + 2), &v80) )
    {
      v47 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x449,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v48);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_189;
    }
    TokenInformationLength = 0;
    GetTokenInformation(hObject, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
    if ( GetLastError() != 122 )
    {
      v47 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x451,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v49);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_189;
    }
    v50 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
    v106 = v50;
    if ( !v50 )
    {
      v47 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x454,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)0x8007000ELL);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_189;
    }
    if ( !GetTokenInformation(hObject, TokenIntegrityLevel, v50, TokenInformationLength, &TokenInformationLength) )
    {
      v114 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x456,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v51);
      LocalFree(v50);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      v42 = v114;
      goto LABEL_346;
    }
    SidSubAuthorityCount = GetSidSubAuthorityCount(*v50);
    v52 = GetLastError();
    v53 = (unsigned __int16)v52 | 0x80070000;
    if ( v52 <= 0 )
      v53 = v52;
    v74 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45B,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v53);
      LocalFree(v50);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
LABEL_273:
      v42 = v74;
      goto LABEL_346;
    }
    if ( !SidSubAuthorityCount || !*SidSubAuthorityCount )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45C,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)0x8000FFFFLL);
      LocalFree(v50);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      v42 = -2147418113;
      goto LABEL_346;
    }
    LODWORD(SidSubAuthorityCount) = *GetSidSubAuthority(*v50, (unsigned __int8)(*SidSubAuthorityCount - 1));
    v54 = GetLastError();
    v55 = (unsigned __int16)v54 | 0x80070000;
    if ( v54 <= 0 )
      v55 = v54;
    v74 = v55;
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x461,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v55);
      LocalFree(v50);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_273;
    }
    v56 = (unsigned int)SidSubAuthorityCount < 0x2000;
    LocalFree(v50);
    v57 = (struct CProcess **)wil::com_ptr_t<CProcess,wil::err_returncode_policy>::operator&((volatile signed __int32 **)&v65);
    v63 = v56;
    v58 = hMem;
    v59 = v69;
    Instance = CProcess::CreateInstance(
                 v20,
                 Pid,
                 v90,
                 v69,
                 (const unsigned __int16 *)v25,
                 v96,
                 (const unsigned __int16 *)v44,
                 v75 != 0,
                 (const unsigned __int16 *)hMem,
                 v86,
                 v110,
                 v85,
                 v70,
                 v84,
                 v83,
                 v82,
                 (int)v76,
                 v81,
                 v80,
                 v63,
                 v57);
    v111 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47B,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)Instance);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v59 )
        CoTaskMemFree(v59);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( v58 )
        LocalFree(v58);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
LABEL_309:
      v42 = v111;
      goto LABEL_346;
    }
    *((_DWORD *)v65 + 123) = v87;
    v61 = CApplicationManager::Register(v77, v65);
    v111 = v61;
    if ( v61 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47F,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v61);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v59 )
        CoTaskMemFree(v59);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( v58 )
        LocalFree(v58);
      if ( v44 )
        LocalFree(v44);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_309;
    }
    v99 = v77;
    v100 = &v65;
    v101 = 1;
    v76 = (char *)v77 + 120;
    AcquireSRWLockExclusive((PSRWLOCK)v77 + 15);
    v98 = v76;
    try
    {
      v97 = v65;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        (__int64 *)v77 + 16,
        &v97);
    }
    catch ( ATL::CAtlException *v107 )
    {
      if ( *(_DWORD *)v107 == -1073741571 )
        _o__resetstkoflw();
    }
    if ( v76 )
    {
      ReleaseSRWLockExclusive((PSRWLOCK)v76);
      v98 = 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)v65 + 2);
    v101 = 0;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    CoTaskMemFree(pv);
    if ( v69 )
      CoTaskMemFree(v69);
    if ( (char *)v94 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v94);
    if ( hMem )
      LocalFree(hMem);
    if ( v71 )
      LocalFree(v71);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v11 = lpCriticalSection;
    goto LABEL_342;
  }
  v76 = TokenHandle;
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v26 = GetLastError();
    CloseHandle(v76);
    SetLastError(v26);
  }
  TokenHandle = 0LL;
  if ( OpenProcessToken(v20, 8u, &TokenHandle) )
  {
    v29 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v96);
    if ( v29 < 0 )
    {
      v113 = wil::details::in1diag3::Return_NtStatus(retaddr, v30, v31, (const char *)(unsigned int)v29, ReturnLength);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v25);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v71 )
        LocalFree(v71);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      RpcRevertToSelf();
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_86;
    }
    goto LABEL_106;
  }
  v113 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x40F,
           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
           v27);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  CoTaskMemFree(v25);
  if ( v69 )
    CoTaskMemFree(v69);
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v20);
  if ( hMem )
    LocalFree(hMem);
  if ( v71 )
    LocalFree(v71);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  RpcRevertToSelf();
  if ( v11 )
    LeaveCriticalSection(v11);
LABEL_86:
  v28 = v65;
  if ( v65 && _InterlockedExchangeAdd((volatile signed __int32 *)v65 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v28 + 32LL))(v28);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v28 + 24LL))(v28, 1LL);
  }
  return v113;
}
