/*
 * XREFs of ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x1800894C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180044734 (-_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800995F4 (-_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::Hide(SearchAppExperienceManager *this)
{
  int started; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 548)
    && (started = SearchAppExperienceManager::_StartDeferredSuspensionTimer(this), v3 = started, started < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return v3;
  }
  else
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetImpl'::`2'::impl) )
      SearchAppExperienceManager::_UntrackMouseMovement(this);
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 72LL))(*((_QWORD *)this + 54));
  }
}
