/*
 * XREFs of ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180362884
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x18035EC20 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362958 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002BAC8 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803494F4 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035CE38 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TSF3CHSIME@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180362D84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TSF3CHSIME@@@details@wil@@QEAAX_NW4Report.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18036353C (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(RTL_SRWLOCK **this)
{
  int IsReady; // edi
  __int64 v3; // rdx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 451) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)this);
    if ( IsReady < 0 )
    {
      v3 = 545LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsReady);
      return (unsigned int)IsReady;
    }
    IsReady = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(this[8]);
    if ( IsReady < 0 )
    {
      v3 = 546LL;
      goto LABEL_4;
    }
    IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)this, 1);
    if ( IsReady < 0 )
    {
      v3 = 547LL;
      goto LABEL_4;
    }
    LOBYTE(v5) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TSF3CHSIME>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TSF3CHSIME>::GetImpl'::`2'::impl,
      v5,
      0LL);
    v6 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((KeyboardHosting::TabTipAdapter *)this);
    if ( v6 < 0 )
    {
      v7 = 556LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  else
  {
    v6 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)this, 0);
    if ( v6 < 0 )
    {
      v7 = 562LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
