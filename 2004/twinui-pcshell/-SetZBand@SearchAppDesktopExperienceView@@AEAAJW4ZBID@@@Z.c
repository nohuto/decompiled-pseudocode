/*
 * XREFs of ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x180086A54
 * Callers:
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800869B4 (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWindowSizeChangeHandled@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180086A34 (-OnWindowSizeChangeHandled@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180207390 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18001B6DC (-GetViewWrapper@SearchAppDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@SearchAppDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x1802060F8 (--$GetViewWrapperAs@UINtUserViewWrapper@@@SearchAppDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::SetZBand(__int64 a1)
{
  char v2; // cl
  bool v3; // bl
  _QWORD *ViewWrapper; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h]

  v2 = 0;
  v11 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 176) != 13 )
  {
    ViewWrapper = SearchAppDesktopExperienceView::GetViewWrapper(a1, &v10);
    v2 = 1;
    if ( *ViewWrapper )
      v3 = 1;
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( !v3 )
    return 0LL;
  *(_DWORD *)(a1 + 176) = 13;
  v10 = 0LL;
  v6 = SearchAppDesktopExperienceView::GetViewWrapperAs<INtUserViewWrapper>(a1, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, *(unsigned int *)(a1 + 176));
    v7 = v6;
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      return 0LL;
    }
    v8 = 1393LL;
  }
  else
  {
    v8 = 1392LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v7;
}
