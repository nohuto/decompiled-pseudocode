/*
 * XREFs of ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x180349A18
 * Callers:
 *     _lambda_5096affdfa8dd9dd59ff190700218634_::operator() @ 0x1800AF5C0 (_lambda_5096affdfa8dd9dd59ff190700218634_--operator().c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180349324 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18035F6D0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180360850 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B23E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18034AEF4 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18035E0E0 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
        TouchKeyboardExperienceManager *this,
        unsigned int a2)
{
  int v4; // eax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __int64 v7; // rsi
  HWND v8; // rdi
  __int64 (__fastcall *v9)(__int64, HWND, _QWORD); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 86) + 40LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 86) + 40LL),
         0LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      816LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( a2 == *((_DWORD *)this + 179) )
  {
    FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow();
    Ancestor = GetAncestor(FocusedWindow, 2u);
    v7 = *((_QWORD *)this + 44);
    v8 = Ancestor;
    v9 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v7 + 32LL);
    PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(*((_QWORD *)this + 86));
    v11 = v9(v7, v8, PrimaryViewDisplayMode);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        826LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    *((_DWORD *)this + 181) = 2;
  }
  TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(this, a2, 0);
}
