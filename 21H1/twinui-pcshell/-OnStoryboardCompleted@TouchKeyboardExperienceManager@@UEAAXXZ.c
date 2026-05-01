/*
 * XREFs of ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x18032D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180327FD8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::OnStoryboardCompleted(struct tagRECT *this)
{
  unsigned int bottom; // edx
  int v3; // eax
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( LOBYTE(this[37].right) )
  {
    if ( this[18].right != this[18].left )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
        (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
        1u,
        3u);
      bottom = this[32].bottom;
      v4 = this[18];
      v3 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)&this[-12],
             bottom,
             &v4);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21C,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
    }
    LOBYTE(this[37].right) = 0;
  }
  if ( BYTE1(this[37].right) )
    BYTE1(this[37].right) = 0;
}
