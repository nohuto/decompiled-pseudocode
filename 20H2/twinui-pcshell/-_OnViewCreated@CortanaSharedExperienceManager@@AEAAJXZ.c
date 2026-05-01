/*
 * XREFs of ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BCBBC
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1801BCA90 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801BAA68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@detai.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BBB8C (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BBD84 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BD4BC (-_RegisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BD6D0 (-_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnViewCreated(
        CortanaSharedExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int started; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 528) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::GetImpl'::`2'::impl,
    0,
    a3);
  if ( *((_BYTE *)this + 538) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 62) + 104LL))(*((_QWORD *)this + 62), 3LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x446,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)this);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x449,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x44A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  started = CortanaSharedExperienceManager::_StartActivationTimeoutPolicy(this);
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x44B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)started);
  v8 = CortanaSharedExperienceManager::_RegisterViewPresentationChanged(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
