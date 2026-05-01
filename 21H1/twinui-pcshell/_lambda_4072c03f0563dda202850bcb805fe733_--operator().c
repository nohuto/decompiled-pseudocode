/*
 * XREFs of _lambda_4072c03f0563dda202850bcb805fe733_::operator() @ 0x1800A12A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___::Run @ 0x1800A45B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___--Run.c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180049070 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008BF18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800919B4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_31afa5824dc70ccdddd77b05669783b6___ @ 0x1800A0830 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_31afa5824dc70ccdddd77b05669783b6___.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032577C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803263A0 (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x1803298EC (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032AE14 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18032E12C (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18032E298 (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032EA44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18032F254 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18032FD1C (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180332FB4 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180333118 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18033DABC (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18033EC3C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803412B8 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4072c03f0563dda202850bcb805fe733_::operator()(unsigned __int16 *a1)
{
  const unsigned __int16 *v2; // rdi
  int v3; // esi
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  _WORD *v11; // rcx
  int RelaunchPolicyFromActivationResult; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  RTL_SRWLOCK *v20; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[5]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v22[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  LODWORD(v20) = 0;
  v2 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v2 = *(const unsigned __int16 **)a1;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v22);
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v22,
    v2);
  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    v3 = -2147024255;
    goto LABEL_29;
  }
  v4 = TouchKeyboardExperienceManager::UnregisterForViewEvents(*((TouchKeyboardExperienceManager **)a1 + 4));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2346LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_32;
  }
  v4 = TouchKeyboardExperienceManager::RegisterForViewEvents(*((_QWORD *)a1 + 4), a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2347LL;
    goto LABEL_17;
  }
  v7 = std::wstring::wstring(
         (__int64)v21,
         L"MultiViewMode Desktop BlankDefaultViewEnabled StandardViewsEnabled ToolBarEnabled ");
  LODWORD(v20) = 1;
  LOBYTE(v8) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    0LL,
    v8);
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v7 = *(_QWORD *)v7;
  v9 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v9 = *(const unsigned __int16 **)a1;
  v3 = ActivateApplicationForExperienceWithPropertySet(v9, (const WCHAR *)v7, 0LL, 0LL, 1u, 0LL);
  std::wstring::_Tidy_deallocate(v21);
  v4 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(*((TouchKeyboardExperienceManager **)a1 + 4));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2356LL;
    goto LABEL_17;
  }
  v4 = TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(*((TouchKeyboardExperienceManager **)a1 + 4));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2357LL;
    goto LABEL_17;
  }
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*((_QWORD *)a1 + 4) + 680LL), &v20);
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 672LL) = v3 >= 0;
  *(_BYTE *)(*((_QWORD *)a1 + 4) + 676LL) = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v20);
  v10 = *((_QWORD *)a1 + 4);
  if ( v3 < 0 )
  {
    v11 = (_WORD *)(v10 + 496);
    if ( *(_QWORD *)(v10 + 520) >= 8uLL )
      v11 = *(_WORD **)(v10 + 496);
    *(_QWORD *)(v10 + 512) = 0LL;
    *v11 = 0;
    KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(*((_QWORD *)a1 + 4) + 688LL));
    RelaunchPolicyFromActivationResult = anonymous_namespace_::GetRelaunchPolicyFromActivationResult((unsigned int)v3);
    if ( RelaunchPolicyFromActivationResult == 1 )
    {
      v16 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(*((_QWORD *)a1 + 4) + 688LL));
      v17 = retaddr;
      if ( v16 >= 0 )
        goto LABEL_29;
      v18 = 2380LL;
    }
    else
    {
      if ( RelaunchPolicyFromActivationResult != 2 )
        goto LABEL_29;
      v20 = (RTL_SRWLOCK *)*((_QWORD *)a1 + 4);
      v16 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_31afa5824dc70ccdddd77b05669783b6___(
              v14,
              v13,
              v15,
              &v20);
      v17 = retaddr;
      if ( v16 >= 0 )
        goto LABEL_29;
      v18 = 2402LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v18,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_29;
  }
  KeyboardHosting::TabTipAdapter::OnInputAppActivated(*(KeyboardHosting::TabTipAdapter **)(v10 + 688));
LABEL_29:
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v22,
    (unsigned int)v3);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x968,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v5 = v3;
LABEL_32:
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::~InputAppActivation((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v22);
  return v5;
}
