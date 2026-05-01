/*
 * XREFs of ?GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180012C5C
 * Callers:
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180012BD0 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18005CE98 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     _lambda_0c65967083025c8585f472dd890e14b7_::operator() @ 0x1800A4490 (_lambda_0c65967083025c8585f472dd890e14b7_--operator().c)
 * Callees:
 *     ?EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180012D30 (-EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::GetEdgeUIManager(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2,
        struct IEdgeUiManager **a3)
{
  int v3; // esi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v3 = (int)a3;
  *a3 = 0LL;
  v6 = SearchAppDesktopExperienceView::EnsureImmersiveShell(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return v7;
  }
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 13) + 24LL))(
         *((_QWORD *)this + 13),
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = 1229LL;
  }
  else
  {
    v12 = v3;
    v8 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *))(*(_QWORD *)v14 + 72LL))(
           v14,
           a2,
           &SID_EdgeUi,
           &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v11 = 1230LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v8,
    v12);
LABEL_5:
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
