/*
 * XREFs of ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180210B20
 * Callers:
 *     ?ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x180209350 (-ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x180208B8C (--$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINtUs.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18020B318 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18020C568 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x18020C9EC (-IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18020CB78 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18020CDD4 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020FE8C (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180211064 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  char v6; // r14
  int IsShowForTransitions; // ebx
  __int64 v8; // rdx
  int ActivateArgs; // eax
  __int64 v11; // rdx
  bool v12; // bl
  __int64 *v13; // rcx
  __int64 v14; // rax
  int ViewWrapper; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0;
  LODWORD(string) = 0;
  IsShowForTransitions = CortanaDesktopExperienceView::IsShowForTransitions(
                           (CortanaDesktopExperienceView *)a1,
                           a2,
                           (bool *)&string);
  if ( IsShowForTransitions < 0 )
  {
    v8 = 879LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions);
    return (unsigned int)IsShowForTransitions;
  }
  *(_BYTE *)(a1 + 215) = 0;
  if ( !(_BYTE)string )
  {
    *(_BYTE *)(a1 + 218) = 1;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs((CortanaDesktopExperienceView *)(a1 - 24), a2, &string);
    IsShowForTransitions = ActivateArgs;
    if ( ActivateArgs < 0 )
    {
      v11 = 900LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)ActivateArgs);
      goto LABEL_31;
    }
    v12 = 0;
    if ( a3 - 5 <= 1 )
    {
      v6 = 1;
      if ( *CortanaDesktopExperienceView::GetViewWrapper(a1 - 24, &v21) )
        v12 = 1;
    }
    if ( (v6 & 1) != 0 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( v12 )
    {
      *(_BYTE *)(a1 + 228) = 1;
      if ( *(_DWORD *)(a1 + 224) == 1 )
      {
        v13 = *(__int64 **)(a1 + 72);
        v14 = *v13;
        v18 = *(_OWORD *)(a1 + 172);
        (*(void (__fastcall **)(__int64 *, __int128 *))(v14 + 136))(v13, &v18);
      }
      v21 = 0LL;
      ViewWrapper = CortanaDesktopExperienceView::GetViewWrapperAs<INtUserViewWrapper>(a1 - 24, &v21);
      IsShowForTransitions = ViewWrapper;
      if ( ViewWrapper < 0 )
      {
        v16 = 915LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)ViewWrapper);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_31:
        WindowsDeleteString(string);
        return (unsigned int)IsShowForTransitions;
      }
      ViewWrapper = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      IsShowForTransitions = ViewWrapper;
      if ( ViewWrapper < 0 )
      {
        v16 = 916LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    }
    if ( *(_BYTE *)(a1 + 214) )
      v17 = 2LL;
    else
      v17 = *(_BYTE *)(a1 + 272) != 0;
    ActivateArgs = CortanaDesktopExperienceView::ShowInternal(a1 - 24, string, v17, a3);
    IsShowForTransitions = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      WindowsDeleteString(string);
      goto LABEL_33;
    }
    v11 = 932LL;
    goto LABEL_30;
  }
  *(_BYTE *)(a1 + 218) = 0;
  IsShowForTransitions = CortanaDesktopExperienceView::NotifyAppWithTransitionType(
                           (CortanaDesktopExperienceView *)(a1 - 24),
                           L"NotifyAppTransitionRequestHandled",
                           a3,
                           0LL);
  if ( IsShowForTransitions < 0 )
  {
    v8 = 893LL;
    goto LABEL_3;
  }
LABEL_33:
  if ( CortanaDesktopExperienceView::IsViewVisible((CortanaDesktopExperienceView *)(a1 - 24)) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton((CortanaDesktopExperienceView *)(a1 - 24));
  return 0LL;
}
