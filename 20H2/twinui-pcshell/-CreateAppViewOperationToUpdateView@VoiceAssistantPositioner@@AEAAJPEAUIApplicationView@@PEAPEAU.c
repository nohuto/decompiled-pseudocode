/*
 * XREFs of ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803DFBB4
 * Callers:
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1803E7038 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801845DC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801A3E74 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6778 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1803DD95C (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x1803DF488 (-ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLA.c)
 *     ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1803E082C (-GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE.c)
 *     ?IsCortanaApp@@YA_NPEAUIApplicationView@@@Z @ 0x1803E106C (-IsCortanaApp@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VoiceAssistantPositioner::CreateAppViewOperationToUpdateView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int LastError; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 (__fastcall *v11)(char *, struct IApplicationView *, _BYTE *, __int64 *); // rdi
  int MonitorInformation; // eax
  __int64 v13; // rdx
  char v14; // r12
  struct IApplicationView *v15; // rdx
  HWND WindowW; // rdi
  const char *v17; // r9
  WPARAM WindowForView; // rax
  HMONITOR v19; // r15
  int v20; // eax
  HMONITOR v21; // r8
  RECT v22; // xmm6
  int v23; // edi
  HMONITOR v24; // r8
  int v25; // esi
  HMONITOR v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64); // rax
  char v31[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  int v35; // [rsp+7Ch] [rbp-84h] BYREF
  _DWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[4]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v38[4]; // [rsp+8Ch] [rbp-74h] BYREF
  struct IApplicationViewOperation **v39; // [rsp+90h] [rbp-70h]
  struct IApplicationView *v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v42; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v43; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v44; // [rsp+D0h] [rbp-30h] BYREF
  RECT v45; // [rsp+E0h] [rbp-20h] BYREF
  RECT v46; // [rsp+F0h] [rbp-10h] BYREF
  LPARAM lParam[2]; // [rsp+100h] [rbp+0h] BYREF
  RECT rc; // [rsp+110h] [rbp+10h] BYREF
  RECT v49; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v50; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v39 = a3;
  v40 = a2;
  v5 = Microsoft::WRL::Details::Make<ApplicationViewOperation,>(lParam);
  v41 = *v5;
  v6 = v41;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(lParam);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, 255LL, 288LL);
    LastError = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 697LL;
      goto LABEL_5;
    }
    v33 = 0LL;
    v11 = *(__int64 (__fastcall **)(char *, struct IApplicationView *, _BYTE *, __int64 *))(*((_QWORD *)this + 13) + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    MonitorInformation = v11((char *)this + 104, a2, v37, &v33);
    LastError = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v13 = 700LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)MonitorInformation);
      goto LABEL_42;
    }
    MonitorInformation = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 176LL))(v6, v33);
    LastError = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v13 = 701LL;
      goto LABEL_21;
    }
    MonitorInformation = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 128LL))(v6, 0LL);
    LastError = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v13 = 703LL;
      goto LABEL_21;
    }
    v14 = 1;
    v31[0] = 1;
    if ( IsCortanaApp(a2) )
    {
      rc = *(RECT *)((char *)this + 392);
    }
    else
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( !WindowW )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x2CE,
                      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
                      v17);
LABEL_42:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
        goto LABEL_43;
      }
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                        v15);
      *(_OWORD *)lParam = 0LL;
      if ( (int)SendMessageW(WindowW, 0x5D2u, WindowForView, (LPARAM)lParam) < 0 )
      {
        v14 = 0;
        v31[0] = 0;
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 52, (__int64)a2);
      }
      else
      {
        rc = *(RECT *)lParam;
      }
    }
    v19 = MonitorFromRect(&rc, 1u);
    MonitorInformation = VoiceAssistantPositioner::GetMonitorInformation(
                           this,
                           v19,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v34,
                           &v44,
                           &v43,
                           &v42);
    LastError = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v13 = 742LL;
      goto LABEL_21;
    }
    v49 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _BYTE *))(**((_QWORD **)this + 25) + 40LL))(
            *((_QWORD *)this + 25),
            &v49,
            v38);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2EA,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v20);
    v22 = v49;
    v23 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (__int64)v19, v21);
    v25 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)*((unsigned int *)this + 96),
            (__int64)v19,
            v24);
    LODWORD(lParam[0]) = v25;
    v35 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)*((unsigned int *)this + 97),
            (__int64)v19,
            v26);
    v45 = v22;
    v46 = rc;
    VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
      (__int64)&v44,
      &v50,
      v34,
      v25,
      v35,
      (__int64)&v44,
      &v43,
      &v42,
      (__int128 *)&v46.left,
      &v45,
      v23);
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v27 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v32,
            &v50);
    LastError = v27;
    if ( v27 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 80LL))(v6, v32);
      LastError = v27;
      if ( v27 >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 160LL))(v6, 13LL);
        LastError = v27;
        if ( v27 >= 0 )
        {
          v36[0] = 1;
          v36[1] = 1;
          v27 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, v36, 0LL);
          LastError = v27;
          if ( v27 >= 0 )
          {
            v27 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v6 + 208LL))(v6, v36, 0LL);
            LastError = v27;
            if ( v27 >= 0 )
            {
              v29 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL);
              if ( v14 )
              {
                v27 = v29(v6, 1LL);
                LastError = v27;
                if ( v27 < 0 )
                {
                  v28 = 770LL;
                  goto LABEL_39;
                }
              }
              else
              {
                v27 = v29(v6, 0LL);
                LastError = v27;
                if ( v27 < 0 )
                {
                  v28 = 774LL;
                  goto LABEL_39;
                }
              }
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              *v39 = (struct IApplicationViewOperation *)v6;
              VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView<IApplicationView * &,bool &,tagRECT &,int &,int &,tagSIZE &>(
                &v40,
                v31,
                &v50,
                (int *)lParam,
                &v35,
                (struct tagSIZE *)this + 48);
              LastError = 0;
              goto LABEL_41;
            }
            v28 = 765LL;
          }
          else
          {
            v28 = 764LL;
          }
        }
        else
        {
          v28 = 760LL;
        }
      }
      else
      {
        v28 = 757LL;
      }
    }
    else
    {
      v28 = 756LL;
    }
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v27);
LABEL_41:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    goto LABEL_42;
  }
  LastError = -2147024882;
  v8 = 2147942414LL;
  v9 = 694LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v8);
LABEL_43:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
  return LastError;
}
