/*
 * XREFs of ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800951C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAA_NXZ @ 0x1800953EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAA_NXZ.c)
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18009672C (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801B4930 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 */

int __fastcall JumpViewExperienceManagerFactory::GetExperienceManager(
        JumpViewExperienceManagerFactory *this,
        const unsigned __int16 *a2,
        struct IServiceProvider *a3,
        struct IInspectable **a4)
{
  int v8; // eax
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MeetNow>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MeetNow>::GetImpl'::`2'::impl) )
    return -2147023728;
  if ( _o__wcsicmp(a2, L"Windows.Internal.ShellExperience.MeetNow") )
  {
    if ( !_o__wcsicmp(a2, L"Windows.Internal.ShellExperience.JumpView") )
      return JumpViewExperienceManagerFactory::GetExperienceManager(
               (JumpViewExperienceManagerFactory *)((char *)this - 8),
               a3,
               a4);
    return -2147023728;
  }
  v8 = Microsoft::WRL::Details::MakeAndInitialize<MeetNowExperienceManager,IInspectable,IServiceProvider * &>((void **)a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x124,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
