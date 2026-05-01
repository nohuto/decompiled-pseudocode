/*
 * XREFs of ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@TwinUI@@@Z @ 0x1800A74D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@QEAA_NXZ @ 0x18009E4B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@w.c)
 *     ?GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800A441C (-GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800A767C (-ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpt.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911@@@details@wil@@QEAA_NXZ @ 0x1800A789C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_3653891.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::Show(__int64 a1, HSTRING a2, int a3)
{
  ShellFeedsDesktopExperienceView *v5; // rsi
  int ActivateArgs; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  string = 0LL;
  v5 = (ShellFeedsDesktopExperienceView *)(a1 - 24);
  WindowsDeleteString(0LL);
  string = 0LL;
  ActivateArgs = ShellFeedsDesktopExperienceView::GetActivateArgs(v5, a2, &string);
  v7 = ActivateArgs;
  if ( ActivateArgs >= 0 )
  {
    v9 = 2;
    if ( a3 != 1 )
      v9 = 0;
    if ( ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911>::GetImpl'::`2'::impl)
       || wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsPerfImprovements>::GetImpl'::`2'::impl))
      && !a3 )
    {
      v9 = 2;
    }
    ActivateArgs = ShellFeedsDesktopExperienceView::ShowInternal(v5, string, v9);
    v7 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      v7 = 0;
      goto LABEL_13;
    }
    v8 = 494LL;
  }
  else
  {
    v8 = 482LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)ActivateArgs);
LABEL_13:
  WindowsDeleteString(string);
  return v7;
}
