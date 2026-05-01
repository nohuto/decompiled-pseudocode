/*
 * XREFs of ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18001BFF0
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001AAD0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001BB24 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x18004ECA0 (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     _lambda_03a79c8009de000cc5e001ae04463159_::operator() @ 0x1800A30A0 (_lambda_03a79c8009de000cc5e001ae04463159_--operator().c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180207690 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x18001C07C (-GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::IsTraySearchBoxVisible(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2,
        bool *a3)
{
  int EdgeUIManager; // eax
  unsigned int v5; // ebx
  struct IEdgeUiManager *v6; // rcx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+18h] BYREF
  struct IEdgeUiManager *v12; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v12 = 0LL;
  EdgeUIManager = SearchAppDesktopExperienceView::GetEdgeUIManager(this, a2, &v12);
  v5 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v8 = 1807LL;
  }
  else
  {
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, int *))(*(_QWORD *)v12 + 96LL))(v12, &v11);
    v5 = EdgeUIManager;
    if ( EdgeUIManager >= 0 )
    {
      *a3 = v11 != 0;
      v5 = 0;
      goto LABEL_4;
    }
    v8 = 1810LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)EdgeUIManager,
    v9);
LABEL_4:
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IEdgeUiManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
