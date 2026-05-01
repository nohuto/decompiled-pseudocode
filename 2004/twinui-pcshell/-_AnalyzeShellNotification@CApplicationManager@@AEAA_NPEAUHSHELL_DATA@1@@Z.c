/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800381E0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800379B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180016F6C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C200 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18004D4B4 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18004DA44 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180064D50 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180083DA4 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180084DD4 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801415F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180147260 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x180151840 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x18015ACFC (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18046A600 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x18046A630 (-Free@ARI@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  unsigned __int8 v4; // di
  HWND v5; // rbx
  signed int LastError; // r12d
  __int64 v7; // rcx
  __int64 v8; // r14
  HWND v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  CallerIdentity *v13; // r15
  __int64 v14; // rcx
  const char *v15; // r9
  wil::details *v16; // rcx
  HANDLE v17; // rbx
  unsigned __int16 **v18; // r8
  const char *v19; // r9
  __int64 v20; // rdi
  NTSTATUS v21; // eax
  unsigned __int128 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // r15d
  const UNICODE_STRING *v26; // rdi
  void *v27; // rdx
  unsigned int v28; // ecx
  unsigned __int64 v29; // r13
  unsigned int *v30; // rdi
  unsigned __int64 v31; // r15
  unsigned int *v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int *v34; // r9
  int v35; // r10d
  __int64 v36; // r8
  char *v37; // rdx
  unsigned __int64 v38; // r15
  unsigned int AppUserModelId; // eax
  int v41; // edx
  ShellManagedWindowHelper *v42; // r14
  unsigned int v43; // eax
  int v44; // ecx
  unsigned __int64 v45; // rdx
  __int64 VisibleRootOwner; // rax
  HWND v47; // rcx
  bool v48; // al
  __int64 v49; // rcx
  int v50; // edx
  RTL_SRWLOCK *v51; // rbx
  int First; // eax
  int v53; // ecx
  HWND v54; // rdx
  int WeakWindowAppId; // eax
  void *v56; // rdx
  __int16 v57; // ax
  HWND v58; // rdx
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-A9h]
  unsigned __int16 *ReturnLengtha; // [rsp+20h] [rbp-A9h]
  unsigned int ReturnLengthb; // [rsp+20h] [rbp-A9h]
  unsigned int v62; // [rsp+30h] [rbp-99h] BYREF
  ULONG v63; // [rsp+34h] [rbp-95h] BYREF
  HANDLE v64; // [rsp+38h] [rbp-91h] BYREF
  int v65; // [rsp+40h] [rbp-89h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-81h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-79h] BYREF
  int v68; // [rsp+60h] [rbp-69h] BYREF
  DWORD dwProcessId; // [rsp+64h] [rbp-65h] BYREF
  int pvAttribute; // [rsp+68h] [rbp-61h] BYREF
  __int64 v71; // [rsp+70h] [rbp-59h] BYREF
  __int64 v72; // [rsp+78h] [rbp-51h] BYREF
  __int64 v73; // [rsp+80h] [rbp-49h] BYREF
  __int64 v74; // [rsp+88h] [rbp-41h] BYREF
  int v75; // [rsp+90h] [rbp-39h]
  __int64 v76; // [rsp+98h] [rbp-31h] BYREF
  int v77; // [rsp+A0h] [rbp-29h]
  char v78[8]; // [rsp+A8h] [rbp-21h] BYREF
  PSRWLOCK v79; // [rsp+B0h] [rbp-19h]
  char v80[8]; // [rsp+B8h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD v82[4]; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_1805CDAC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CDAC0);
    if ( dword_1805CDAC0 == -1 )
    {
      word_1805CCEB8 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1805CDAC0);
    }
  }
  LastError = 0;
  if ( (unsigned __int16)GetClassLongW(v5, -32) == word_1805CCEB8 )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow();
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v82[0] = 20;
    v82[1] = 19;
    v82[2] = 23;
    v82[3] = 32;
    v49 = 0LL;
    while ( *(_QWORD *)a2 != v82[v49] )
    {
      if ( (unsigned __int64)++v49 >= 4 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        break;
      }
    }
  }
  v7 = *((_QWORD *)a2 + 1);
  if ( !v7 || !(unsigned int)GetWindowBand(v7, (char *)a2 + 24) )
    return v4;
  v8 = *((_QWORD *)a2 + 1);
  if ( (unsigned int)GetWindowBand(v8, &v68)
    && ((v68 == 1 || v68 == 8) && v68 != 1 || v68 == 1 && (unsigned int)IsShellManagedWindow(v8))
    && !GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    *((_DWORD *)a2 + 4) = 2;
  }
  else
  {
    v41 = *((_DWORD *)a2 + 6);
    v42 = (ShellManagedWindowHelper *)*((_QWORD *)a2 + 1);
    if ( ((unsigned int)(v41 - 1) <= 1 || v41 == 16)
      && (!(unsigned int)IsShellManagedWindow(*((_QWORD *)a2 + 1))
       || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(v42, v9))
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      *((_DWORD *)a2 + 4) = 1;
    }
    else
    {
      v43 = *((_DWORD *)a2 + 6);
      if ( v43 == 13 )
      {
        *((_DWORD *)a2 + 4) = 3;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
          1u);
        v71 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v71);
        v74 = *((_QWORD *)a2 + 1);
        v75 = 2;
        if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v74, &v71, v78) >= 0 )
          *((_DWORD *)a2 + 4) = 2;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v71);
      }
      else if ( v43 <= 0x11 && (v44 = 131344, _bittest(&v44, v43)) )
      {
        v51 = CApplicationManagerUtility::g_pIAMGlobals;
        v79 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        v72 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
        v76 = *((_QWORD *)a2 + 1);
        v77 = 2;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v76, &v72, v80);
        v53 = 4;
        if ( First >= 0 )
          v53 = 2;
        *((_DWORD *)a2 + 4) = v53;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
        if ( v51 )
          ReleaseSRWLockShared(v51);
      }
      else
      {
        *((_DWORD *)a2 + 4) = 4;
      }
    }
  }
  *((_BYTE *)a2 + 28) = 0;
  v65 = 0;
  v10 = *((_QWORD *)this + 97);
  if ( v10
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v10 + 48LL))(
         v10,
         *((unsigned int *)a2 + 2),
         0LL,
         &v65) >= 0
    && v65 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( (unsigned int)(v11 - 2) > 1 )
  {
    v45 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == 34LL )
      return v4;
    if ( v11 != 1 )
    {
      if ( v45 == 20 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
          return 1;
      }
      else if ( v45 > 0x1B )
      {
        return 0;
      }
      return ((unsigned int)v45 >= 0x17 || (unsigned int)v45 < 0x14)
          && ((_DWORD)v45 == 19 || (_DWORD)v45 == 23 || (unsigned int)v45 > 0x18);
    }
    if ( v45 > 0x16 )
      goto LABEL_93;
    if ( (_DWORD)v45 != 20 )
    {
      v50 = v45 - 17;
      if ( v50 )
      {
        v45 = (unsigned int)(v50 - 4);
        if ( !(_DWORD)v45 )
          goto LABEL_95;
        if ( (_DWORD)v45 != 1 )
        {
LABEL_93:
          v47 = (HWND)*((_QWORD *)a2 + 1);
          if ( !*((_BYTE *)a2 + 20) )
          {
            v48 = CApplicationManagerUtility::IsTrayWindowStyleCheck(v47, (HWND)v45);
            goto LABEL_96;
          }
          if ( (GetWindowLongPtrW(v47, -20) & 0x40000) == 0 )
          {
LABEL_95:
            v48 = 0;
LABEL_96:
            *((_BYTE *)a2 + 21) = v48;
            return 1;
          }
        }
      }
    }
    *((_BYTE *)a2 + 21) = 1;
    return 1;
  }
  v12 = *(_QWORD *)a2;
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( v12 == 24 )
    {
      VisibleRootOwner = 0LL;
    }
    else
    {
      VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), v12 == 21);
      *((_BYTE *)a2 + 20) = 0;
    }
    goto LABEL_87;
  }
  if ( v12 == 32 && CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v9) )
  {
    VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), 0LL);
LABEL_87:
    *((_QWORD *)a2 + 1) = VisibleRootOwner;
  }
  v13 = (CallerIdentity *)*((_QWORD *)a2 + 1);
  if ( v13 )
  {
    *((_BYTE *)a2 + 21) = 1;
    if ( *((_QWORD *)a2 + 4) )
      return 1;
    if ( *((_DWORD *)a2 + 4) != 2 )
      return 1;
    if ( *(_QWORD *)a2 > 0x1DuLL )
      return 1;
    v14 = 604110848LL;
    if ( !_bittest64(&v14, *(_QWORD *)a2) )
      return 1;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( !GetWindowThreadProcessId((HWND)v13, &dwProcessId) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x6B,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v15);
LABEL_162:
      if ( LastError >= 0 )
        return 1;
      if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a2 + 1), v54)
        && !CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v58)
        && DwmGetWindowAttribute(*((HWND *)a2 + 1), 0xEu, &pvAttribute, 4u) >= 0
        && !pvAttribute )
      {
        (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                       + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          *((_QWORD *)a2 + 1),
          1LL);
        return 0;
      }
      return 0;
    }
    v17 = OpenProcess(0x1000u, 0, dwProcessId);
    v64 = v17;
    if ( (((unsigned __int64)v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      LastError = wil::details::GetLastErrorFailHr(v16);
      goto LABEL_161;
    }
    v73 = 0LL;
    if ( !(unsigned int)GetProcessUIContextInformation(v17, &v73) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x71,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v19);
      goto LABEL_161;
    }
    if ( (_DWORD)v73 == 2 )
    {
      WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(v13, (_QWORD *)a2 + 4, v18);
      LastError = WeakWindowAppId;
      if ( WeakWindowAppId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x78,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
          (const char *)(unsigned int)WeakWindowAppId,
          (int)ReturnLength);
        goto LABEL_161;
      }
      LastError = 0;
    }
    if ( *((_QWORD *)a2 + 4) )
      goto LABEL_68;
    *((_QWORD *)a2 + 4) = 0LL;
    *(_OWORD *)P = 0LL;
    if ( v17 == GetCurrentProcess() )
    {
      v20 = -4LL;
      TokenHandle = (void *)-4LL;
    }
    else if ( OpenProcessToken(v17, 8u, &TokenHandle) )
    {
      v20 = (__int64)TokenHandle;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError )
      {
LABEL_45:
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError == -2147023728 || LastError == -2147024891 )
        {
LABEL_160:
          ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
          if ( LastError < 0 )
            goto LABEL_161;
LABEL_68:
          CloseHandle(v17);
          return 1;
        }
        if ( LastError < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)LastError,
            (int)ReturnLength);
          goto LABEL_160;
        }
        if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             (ARI::ProcessToken::SysAppId *)P[1],
                             0LL,
                             (unsigned int)&v62,
                             0LL,
                             ReturnLength) == 122 )
        {
          CoTaskMemFree(0LL);
          v28 = v62;
          v29 = v62;
          v30 = 0LL;
          v31 = v62 + 1LL;
          if ( v31 < v62 )
          {
            LastError = -2147024362;
            goto LABEL_158;
          }
          if ( is_mul_ok(v31, 2uLL) )
          {
            v32 = (unsigned int *)CoTaskMemAlloc(2 * v31);
            v30 = v32;
            if ( !v32 )
            {
              LastError = -2147024882;
              goto LABEL_158;
            }
            LastError = 0;
            if ( v31 > 0x7FFFFFFF || v29 >= 0x7FFFFFFF )
            {
              *(_WORD *)v32 = 0;
            }
            else
            {
              v33 = v31;
              v34 = v32;
              v35 = 0;
              v36 = 0LL;
              v37 = (char *)((char *)&szAgent - (char *)v32);
              while ( v33 != v31 )
              {
                v57 = *(_WORD *)&v37[(_QWORD)v34];
                if ( !v57 )
                  break;
                *(_WORD *)v34 = v57;
                v34 = (unsigned int *)((char *)v34 + 2);
                ++v36;
                if ( !--v33 )
                  goto LABEL_153;
              }
              if ( v33 )
                goto LABEL_59;
LABEL_153:
              v34 = (unsigned int *)((char *)v34 - 2);
              --v36;
              v35 = -2147024774;
LABEL_59:
              *(_WORD *)v34 = 0;
              v38 = v31 - v36;
              if ( v35 >= 0 && v38 > 1 && 2 * v38 > 2 )
                memset_0((char *)v30 + 2 * v36 + 2, 0, 2 * v38 - 2);
            }
            v28 = v62;
          }
          else
          {
            LastError = -2147024362;
          }
          if ( LastError >= 0 )
          {
            AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                               (ARI::ProcessToken::SysAppId *)P[1],
                               (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v28,
                               (unsigned int)&v62,
                               v30,
                               ReturnLengtha);
            if ( !AppUserModelId )
            {
              *((_QWORD *)a2 + 4) = v30;
              CoTaskMemFree(0LL);
              if ( P[0] )
              {
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
                v17 = v64;
              }
              goto LABEL_68;
            }
            LastError = wil::details::in1diag3::Return_Win32(
                          retaddr,
                          (void *)0xAC,
                          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                          (const char *)AppUserModelId,
                          ReturnLengthb);
            goto LABEL_159;
          }
LABEL_158:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAB,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)LastError,
            (int)ReturnLengtha);
LABEL_159:
          CoTaskMemFree(v30);
          goto LABEL_160;
        }
        LastError = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA8,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)0x8000FFFFLL,
          (int)ReturnLengtha);
        ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
LABEL_161:
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v64);
        goto LABEL_162;
      }
      v20 = (__int64)TokenHandle;
      LastError = 0;
    }
    v21 = NtQueryInformationToken((HANDLE)v20, TokenSecurityAttributes, 0LL, 0, &v63);
    if ( v21 == -1073741789 )
    {
      v22 = v63 * (unsigned __int128)0x10uLL;
      if ( is_mul_ok(v63, 0x10uLL) )
      {
        *(_QWORD *)&v22 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v22), 16LL * v63);
        v23 = v22;
        if ( (_QWORD)v22 )
        {
          memset_0((void *)v22, 0, v63);
          v24 = NtQueryInformationToken((HANDLE)v20, TokenSecurityAttributes, (PVOID)v23, v63, &v63);
          if ( v24 < 0 )
          {
            LastError = RtlNtStatusToDosErrorNoTeb(v24);
            ARI::Free((PVOID)v23, v56);
            v17 = v64;
          }
          else if ( *(_DWORD *)(v23 + 4)
                 && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v25 = 0, *(_DWORD *)(v23 + 4)) )
          {
            while ( 1 )
            {
              v26 = (const UNICODE_STRING *)(*(_QWORD *)(v23 + 8) + 40LL * v25);
              if ( !RtlCompareUnicodeString(&DestinationString, v26, 1u) )
                break;
              if ( ++v25 >= *(_DWORD *)(v23 + 4) )
                goto LABEL_39;
            }
            P[1] = (PVOID)v26;
            P[0] = (PVOID)v23;
            ARI::Free(0LL, v27);
            v17 = v64;
          }
          else
          {
LABEL_39:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v23);
            LastError = 1168;
            v17 = v64;
          }
          goto LABEL_43;
        }
        v17 = v64;
      }
      ARI::Free(0LL, *((void **)&v22 + 1));
      LastError = 8;
    }
    else if ( v21 )
    {
      LastError = RtlNtStatusToDosErrorNoTeb(v21);
    }
    else
    {
      LastError = 1359;
    }
LABEL_43:
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
    goto LABEL_45;
  }
  return v4;
}
