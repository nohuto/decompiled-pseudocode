/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801D4990
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180011734 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001963C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x18001C174 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001C218 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006ECC8 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x1801D2834 (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x1801D2984 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801D3BB8 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char v3; // si
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // ecx
  CortanaFlightingHelpers *v10; // rcx
  unsigned int v11; // r8d
  int DpiForMonitor; // eax
  HSTRING_HEADER *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64); // r8
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64); // r8
  unsigned int v18; // r8d
  bool v19; // zf
  char v20; // bl
  HSTRING_HEADER *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r8d
  HSTRING v24; // rbx
  HSTRING_HEADER *v25; // rax
  bool v27; // [rsp+48h] [rbp-69h] BYREF
  int v28; // [rsp+4Ch] [rbp-65h] BYREF
  int v29; // [rsp+50h] [rbp-61h] BYREF
  HSTRING v30; // [rsp+58h] [rbp-59h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-51h] BYREF
  HMONITOR hMonitor; // [rsp+70h] [rbp-41h] BYREF
  HWND hWnd; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v34[8]; // [rsp+80h] [rbp-31h] BYREF
  HWND *p_hWnd; // [rsp+88h] [rbp-29h]
  char v36; // [rsp+90h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-19h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-1h]
  struct tagMONITORINFO mi; // [rsp+B8h] [rbp+7h] BYREF
  HSTRING_HEADER v40; // [rsp+E0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hWnd = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 37), a2);
  EnableWindow(hWnd, 0);
  p_hWnd = &hWnd;
  v3 = 1;
  v36 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 40),
                         v4,
                         &v31,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v29,
                         &v27,
                         (struct tagRECT *)&hstringHeader,
                         &hMonitor);
  if ( MonitorInformation >= 0 )
  {
    v30 = 0LL;
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v38,
           &v30);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x430,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      goto LABEL_29;
    }
    *(_QWORD *)&v31.left = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31.left);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      MonitorInformation = -2147418113;
      v7 = 2147549183LL;
      v8 = 1080LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.left);
      goto LABEL_28;
    }
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = *((_DWORD *)this + 153);
    v9 = 344;
    if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
      v9 = 320;
    *(float *)&hstringHeader.Reserved.Reserved1 = (float)v9 + 48.0;
    v28 = 0;
    CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x36, (__int64)&v28);
    if ( v28 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v10) )
    {
      DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v28, v34);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v8 = 1089LL;
LABEL_24:
        v7 = (unsigned int)DpiForMonitor;
        goto LABEL_25;
      }
      *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetDefaultCortanaWidthWithoutGutter(&mi.rcMonitor, v28)
                                                  + 48.0;
    }
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)off_1804D0018, v11);
    DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
                      (HSTRING)v13[1].Reserved.Reserved1,
                      v14);
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)off_1804D0020, v15);
      DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
                        (HSTRING)v16[1].Reserved.Reserved1,
                        v17);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor >= 0 )
      {
        if ( v27 )
          v19 = v29 == 0;
        else
          v19 = v29 == 2;
        v20 = !v19;
        v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)off_1804D0028, v18);
        DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
                          (HSTRING)v21[1].Reserved.Reserved1,
                          v22,
                          v20);
        MonitorInformation = DpiForMonitor;
        if ( DpiForMonitor >= 0 )
        {
          v24 = v30;
          v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)off_1804D0060, v23);
          DpiForMonitor = ExperienceManagerUtils::RaiseReactivatedEvent(
                            *((ExperienceManagerUtils **)this + 37),
                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this
                                                                                                 + 100),
                            *((HSTRING *)this + 35),
                            *((HSTRING *)this + 36),
                            (HSTRING)v25[1].Reserved.Reserved1,
                            v24);
          MonitorInformation = DpiForMonitor;
          if ( DpiForMonitor >= 0 )
          {
            *((_BYTE *)this + 616) = 1;
            v3 = 0;
            MonitorInformation = 0;
            goto LABEL_27;
          }
          v8 = 1128LL;
        }
        else
        {
          v8 = 1123LL;
        }
      }
      else
      {
        v8 = 1101LL;
      }
    }
    else
    {
      v8 = 1098LL;
    }
    goto LABEL_24;
  }
LABEL_29:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return (unsigned int)MonitorInformation;
}
