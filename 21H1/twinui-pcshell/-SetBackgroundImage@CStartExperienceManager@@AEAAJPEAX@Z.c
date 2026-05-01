/*
 * XREFs of ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1801B190C
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B0620 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800191CC (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x1801AEC50 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 *     ?CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801AF9C8 (-CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1801AFB20 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x1801B1C98 (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartExperienceManager::SetBackgroundImage(CStartExperienceManager *this, void *a2)
{
  struct IDCompositionDevice **v4; // rdx
  int DCompDevice; // eax
  int MonitorInformation; // ebx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  int DesktopWallpaperHWND; // eax
  struct CSingleViewShellExperience *v10; // rdx
  __int64 v11; // rdx
  HWND *v12; // r8
  HWND v13; // r15
  char v14; // r12
  int started; // eax
  __int64 v16; // rbx
  HWND v17; // r14
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, void *, GUID *, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v24; // [rsp+48h] [rbp-29h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-21h] BYREF
  __int64 v26; // [rsp+58h] [rbp-19h] BYREF
  __int64 v27; // [rsp+60h] [rbp-11h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-9h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1h] BYREF
  struct tagRECT v30; // [rsp+78h] [rbp+7h] BYREF
  struct tagRECT v31; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 79) )
    CStartExperienceManager::UnsetBackgroundImage(this);
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  DCompDevice = DesktopWallpaperHelpers::CreateDCompDevice((DesktopWallpaperHelpers *)&v28, v4);
  MonitorInformation = DCompDevice;
  if ( DCompDevice >= 0 )
  {
    v27 = 0LL;
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
    v8 = **v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    DesktopWallpaperHWND = v8(v7, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, &v27);
    MonitorInformation = DesktopWallpaperHWND;
    if ( DesktopWallpaperHWND < 0 )
    {
      v11 = 975LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)DesktopWallpaperHWND);
      goto LABEL_26;
    }
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           this,
                           v10,
                           &v30,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&hWnd,
                           &v24,
                           &v31,
                           0LL);
    if ( MonitorInformation < 0 )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_27;
    }
    DesktopWallpaperHWND = DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
                             (DesktopWallpaperHelpers *)&v30,
                             (const struct Geometry::CRect *)&hWnd,
                             v12);
    MonitorInformation = DesktopWallpaperHWND;
    if ( DesktopWallpaperHWND < 0 )
    {
      v11 = 990LL;
      goto LABEL_10;
    }
    v13 = hWnd;
    *(_QWORD *)&v31.left = hWnd;
    v14 = 1;
    LOBYTE(v31.right) = 1;
    v26 = 0LL;
    *(_QWORD *)&v30.left = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    started = Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
                &v26,
                &hWnd,
                (struct IDCompositionDevice **)&v30);
    MonitorInformation = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      goto LABEL_24;
    }
    hWnd = 0LL;
    v16 = v26;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v17 = *(HWND *)(v16 + 40);
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*(_QWORD *)(v16 + 40));
      v17 = *(HWND *)(v16 + 40);
    }
    hWnd = v17;
    v29 = 0LL;
    v18 = v27;
    v19 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v27 + 232LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v20 = v19(v18, a2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, &v29);
    MonitorInformation = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, HWND))(*(_QWORD *)v29 + 24LL))(v29, v17);
      MonitorInformation = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
        MonitorInformation = v20;
        if ( v20 >= 0 )
        {
          v22 = v26;
          v26 = *((_QWORD *)this + 79);
          *((_QWORD *)this + 79) = v22;
          *((_QWORD *)this + 80) = v13;
          v14 = 0;
          MonitorInformation = 0;
          goto LABEL_23;
        }
        v21 = 1010LL;
      }
      else
      {
        v21 = 1009LL;
      }
    }
    else
    {
      v21 = 1006LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( v14 )
      DestroyWindow(v13);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3CD,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)DCompDevice);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  return (unsigned int)MonitorInformation;
}
