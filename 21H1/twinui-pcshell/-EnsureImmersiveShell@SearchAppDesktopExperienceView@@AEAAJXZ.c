/*
 * XREFs of ?EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18001BCDC
 * Callers:
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18001B2E0 (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18001B364 (-GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18001B964 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x18001BC08 (-GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x18004DF8C (-GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800501DC (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800502B0 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::EnsureImmersiveShell(SearchAppDesktopExperienceView *this)
{
  LPVOID *v1; // rbx
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (LPVOID *)((char *)this + 104);
  if ( *((_QWORD *)this + 13) )
    return 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 104);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               v1);
  v4 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42B,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)Instance,
    ppv);
  return v4;
}
