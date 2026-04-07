/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180010E98 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001B420 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x1800259B0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800370E0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x18003B6B8 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18003F898 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18004B308 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x18004B410 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18004BA98 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004D9EC (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180080EE8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180085C18 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x180085C58 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180085E84 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18008680C (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x180087610 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x180087938 (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A941C (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  LARGE_INTEGER v1; // rbx
  bool v3; // r13
  HANDLE v4; // rsi
  int v5; // r15d
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // r12d
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  DWORD v13; // r15d
  bool v14; // si
  CDesktopManager *v15; // rdi
  __int64 v16; // rsi
  bool v17; // si
  bool v18; // zf
  int v19; // r8d
  char v20; // al
  DWORD v21; // r8d
  bool v22; // cl
  bool v23; // di
  DWORD v24; // eax
  int v25; // r8d
  double v26; // xmm6_8
  CDesktopManager *v27; // rdi
  int v28; // eax
  __int64 v29; // rsi
  bool v30; // si
  int updated; // eax
  CAnimationEngine *v32; // rcx
  unsigned int v33; // edx
  signed int LastError; // eax
  int v35; // r9d
  signed int v36; // eax
  CDesktopManager *v37; // rcx
  int v38; // eax
  void *v39; // rdx
  signed int v40; // eax
  CDesktopManager *v41; // rcx
  CDesktopManager *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned int v46; // [rsp+28h] [rbp-E0h]
  unsigned int v47; // [rsp+28h] [rbp-E0h]
  bool v48[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v51[2]; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-A8h] BYREF
  struct tagMSG Frequency_8; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE pHandles[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v56[12]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v57[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v58[16]; // [rsp+118h] [rbp+10h] BYREF

  v1.QuadPart = 0LL;
  v3 = 0;
  v4 = 0LL;
  hObject = 0LL;
  v5 = -2147221008;
  *(_WORD *)&v48[4] = 0;
  v56[0] = 0LL;
  Frequency.QuadPart = 0LL;
  v48[1] = 0;
  v48[3] = 0;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 164) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v46 = 2219;
    goto LABEL_81;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v48[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8ADu);
    goto LABEL_113;
  }
  v10 = CoInitializeEx(0LL, 0);
  v51[1] = v10;
  v5 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x8B4u);
  v9 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x8B5u);
    goto LABEL_113;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 26);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v46 = 2231;
    v35 = Instance;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, v46);
    goto LABEL_113;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v56, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v36 = GetLastError();
    v9 = v36;
    if ( v36 > 0 )
      v9 = (unsigned __int16)v36 | 0x80070000;
    v46 = 2243;
LABEL_81:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v35 = v9;
    goto LABEL_85;
  }
  v51[0] = 0;
  v48[3] = 1;
  while ( 1 )
  {
    if ( !v4
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 6),
                v51) >= 0 )
    {
      OpenComposedEvent(v51[0], v33, &hObject);
      v4 = hObject;
    }
    memset(&Frequency_8, 0, sizeof(Frequency_8));
    v13 = 2;
    pHandles[0] = *((HANDLE *)CDesktopManager::s_pDesktopManagerInstance + 34);
    pHandles[1] = v4;
    v14 = 0;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = !*(_DWORD *)(v16 + 64) || !*(_BYTE *)(v16 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v14 = !v17 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v15 + 150)) && !*((_BYTE *)v15 + 19);
      v18 = hObject == 0LL;
      *((_BYTE *)v15 + 18) = v14;
      v3 = !v18 && v14 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23);
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAllAnimationFinished_Info) )
      {
        if ( v14 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
              (unsigned int)&UdwmAllAnimationFinished_Info,
              v19,
              1,
              (__int64)v57);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v3 && v48[1] )
    {
      v20 = 1;
LABEL_57:
      v13 = 1;
      v22 = 0;
      v21 = 64;
      goto LABEL_58;
    }
    v20 = 0;
    v21 = 64;
    if ( !v3 )
      goto LABEL_57;
    v22 = v48[1];
    if ( v48[1] )
      goto LABEL_27;
    v1.QuadPart = -1LL;
    v22 = 1;
    v21 = 0;
LABEL_58:
    v48[1] = v22;
LABEL_27:
    v23 = 0;
    v48[0] = 0;
    if ( v20 )
    {
      v23 = v14;
      goto LABEL_48;
    }
    if ( !v22 )
      v21 = -1;
    v24 = MsgWaitForMultipleObjectsEx(v13, pHandles, v21, 0x1CFFu, 6u);
    if ( v24 == v13 )
      break;
    if ( v24 )
    {
      if ( !v48[1] || v24 != 1 && v24 != 258 )
        goto LABEL_48;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v9 = 0;
      if ( !CDesktopManager::s_pDesktopManagerInstance )
        goto LABEL_47;
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( !QueryPerformanceCounter(&PerformanceCount) )
      {
        v40 = GetLastError();
        v9 = v40;
        if ( v40 > 0 )
          v9 = (unsigned __int16)v40 | 0x80070000;
        v47 = 2038;
        if ( v9 >= 0 )
          v9 = -2003304445;
        goto LABEL_104;
      }
      if ( v1.QuadPart == -1 )
        v1 = PerformanceCount;
      v26 = (double)(PerformanceCount.LowPart - v1.LowPart) / (double)(int)Frequency.LowPart;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmAnimation_Info,
          v25,
          1,
          (__int64)v58);
      v27 = CDesktopManager::s_pDesktopManagerInstance;
      CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v26, v25);
      v28 = CDesktopManager::FireTimeEvents(v27, v48);
      v9 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x7D6u);
      }
      else
      {
        v29 = *((_QWORD *)v27 + 26);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v30 = !*(_DWORD *)(v29 + 64) || !*(_BYTE *)(v29 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v30 )
        {
          v32 = (CAnimationEngine *)*((_QWORD *)v27 + 26);
          v48[2] = 0;
          CAnimationEngine::OnTick(v32, *((double *)CDesktopManager::s_pDesktopManagerInstance + 40), &v48[2]);
          v23 = v48[2] || v48[0];
          goto LABEL_45;
        }
      }
      v23 = v48[0];
LABEL_45:
      if ( v9 >= 0 )
      {
        v1 = PerformanceCount;
        goto LABEL_47;
      }
      v47 = 2048;
LABEL_104:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v47);
LABEL_47:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x948u);
        goto LABEL_110;
      }
      goto LABEL_48;
    }
    v50 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v48[0] = 0;
    v38 = CDesktopManager::CheckDXGIAdapter(v37, v48);
    v9 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x93Fu);
LABEL_109:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
      goto LABEL_110;
    }
    wil::details::ResetEvent(*((wil::details **)CDesktopManager::s_pDesktopManagerInstance + 34), v39);
    v23 = !v48[0];
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
LABEL_48:
    if ( Frequency_8.message == 18 )
      goto LABEL_110;
    if ( v23 )
    {
      v50 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61));
        v9 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x95Au);
          goto LABEL_109;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    v4 = hObject;
  }
  if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
    goto LABEL_48;
  while ( Frequency_8.message != 18 )
  {
    DispatchMessageW(&Frequency_8);
    if ( !Frequency_8.hwnd )
      CDesktopManager::HandleThreadMessage(Frequency_8.message, (HWND)Frequency_8.wParam, Frequency_8.lParam);
    if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
      goto LABEL_48;
  }
LABEL_110:
  if ( hObject )
    CloseHandle(hObject);
  v5 = v51[1];
LABEL_113:
  CWaitForService::Cleanup((CWaitForService *)v56);
  if ( v48[3] )
  {
    v50 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v48[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v48[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v41);
      v42 = CDesktopManager::s_pDesktopManagerInstance;
      v43 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 41);
      if ( v43 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 41));
        v42 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 41) = 0LL;
      }
      v44 = *((_QWORD *)v42 + 42);
      if ( v44 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 16LL))(*((_QWORD *)v42 + 42));
        v42 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 42) = 0LL;
      }
      if ( *((_QWORD *)v42 + 26) )
      {
        CAnimationEngine::Cleanup(*((CAnimationEngine **)v42 + 26));
        v42 = CDesktopManager::s_pDesktopManagerInstance;
      }
      if ( *((_QWORD *)v42 + 26) )
      {
        CAnimationEngine::Release(*((CAnimationEngine **)v42 + 26));
        v42 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26) = 0LL;
      }
      CDisplayBroker::Shutdown(*((CDisplayBroker **)v42 + 36));
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
  }
  if ( v5 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003302654, 0x98Fu);
  return 2291664642LL;
}
