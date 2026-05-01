/*
 * XREFs of _lambda_0c65967083025c8585f472dd890e14b7_::operator() @ 0x1800A4490
 * Callers:
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18005CF20 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180012BD0 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180012C5C (-GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0c65967083025c8585f472dd890e14b7_::operator()(__int64 a1)
{
  int IsTraySearchBoxVisible; // eax
  unsigned int v3; // ebx
  SearchAppDesktopExperienceView *v5; // rbx
  int EdgeUIManager; // eax
  __int64 v7; // rdx
  bool v8; // [rsp+20h] [rbp-38h] BYREF
  struct IEdgeUiManager *v9; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v10[4]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+34h] [rbp-24h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  IsTraySearchBoxVisible = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(
                             *(SearchAppDesktopExperienceView **)a1,
                             **(HMONITOR **)(a1 + 8),
                             &v8);
  v3 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
    return v3;
  }
  if ( v8 )
  {
    v9 = 0LL;
    v5 = *(SearchAppDesktopExperienceView **)a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    EdgeUIManager = SearchAppDesktopExperienceView::GetEdgeUIManager(v5, **(HMONITOR **)(a1 + 8), &v9);
    v3 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 2048LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)EdgeUIManager);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      return v3;
    }
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, _BYTE *))(*(_QWORD *)v9 + 112LL))(v9, v10);
    v3 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 2049LL;
      goto LABEL_9;
    }
    **(_DWORD **)(a1 + 16) = v12 - v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  return 0LL;
}
