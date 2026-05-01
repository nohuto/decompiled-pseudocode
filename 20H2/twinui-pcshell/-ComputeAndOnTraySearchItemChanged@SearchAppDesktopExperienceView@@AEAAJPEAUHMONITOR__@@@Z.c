/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180060E60
 * Callers:
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180060E14 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800129B8 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180012BD0 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18005F510 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x180096A20 (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon@@@details@wil@@QEAA_NXZ @ 0x180097614 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrim.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NXZ @ 0x180097718 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSear_ea_180097718.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180207874 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2)
{
  int MonitorInformation; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  HKEY v7; // rcx
  int v8; // eax
  unsigned int CortanaWidthWithoutGutter; // ebx
  HMONITOR v10; // r8
  LANGID ThreadUILanguage; // ax
  int v12; // [rsp+28h] [rbp-29h]
  bool v13[4]; // [rsp+48h] [rbp-9h] BYREF
  unsigned int v14; // [rsp+4Ch] [rbp-5h] BYREF
  int v15; // [rsp+50h] [rbp-1h] BYREF
  struct tagRECT v16; // [rsp+58h] [rbp+7h] BYREF
  struct tagRECT v17; // [rsp+68h] [rbp+17h] BYREF
  RECT rc; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &rc,
                         &v17,
                         &v16,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v15,
                         v13);
  v5 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetImpl'::`2'::impl) )
    {
      v13[0] = 0;
      SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, a2, v13);
      v8 = SHRegSetBOOL(v7, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", L"TraySearchBoxVisible", v13[0]);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x566,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v8,
          v12);
    }
    CortanaWidthWithoutGutter = GetCortanaWidthWithoutGutter(&rc, 1);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetImpl'::`2'::impl) )
      {
        v14 = 0;
        SHRegGetDWORD(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
          L"SearchboxWidth",
          &v14);
        if ( (int)v14 > 0 && v14 != CortanaWidthWithoutGutter )
          SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
      }
    }
    ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)CortanaWidthWithoutGutter, (__int64)a2, v10);
    if ( v15 != 2 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      IsBiDiLocale(ThreadUILanguage);
    }
    *(float *)&v16.left = (float)rc.left;
    *(float *)&v16.top = (float)rc.top;
    *(float *)&v16.right = (float)(rc.right - rc.left);
    result = 0LL;
    *(float *)&v16.bottom = (float)(rc.bottom - rc.top);
    *(struct tagRECT *)((char *)this + 188) = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x560,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v12);
    return v5;
  }
  return result;
}
