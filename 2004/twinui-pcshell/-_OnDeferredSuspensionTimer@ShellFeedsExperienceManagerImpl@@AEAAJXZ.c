/*
 * XREFs of ?_OnDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D324
 * Callers:
 *     ?_OnMessageHandler@ShellFeedsExperienceManagerImpl@@AEAAJI_K_J@Z @ 0x18009D420 (-_OnMessageHandler@ShellFeedsExperienceManagerImpl@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180052AFC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShellFeedsExperienceManagerImpl_SuspensionEnabled@ShellFeedsTelemetry@@SAXXZ @ 0x18009C7A4 (-ShellFeedsExperienceManagerImpl_SuspensionEnabled@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA?AW4ExperienceViewState@CSingleViewShellExperience@@XZ @ 0x18009CD74 (-_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA-AW4ExperienceViewState@CSingleViewShellExpe.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009D008 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261@@@details@wil@@QEAA_NXZ @ 0x18009E538 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnDeferredSuspensionTimer(ShellFeedsExperienceManagerImpl *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 144);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
      {
        v4 = *((_QWORD *)this + 12);
        v11 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 56LL))(v4, &v11) < 0 || v11 != 1 )
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261>::GetImpl'::`2'::impl) )
          {
            if ( (unsigned int)ShellFeedsExperienceManagerImpl::_GetViewState((__int64)this) )
            {
              ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SuspensionEnabled(v6);
              v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 96LL))(*((_QWORD *)this + 12));
              if ( v7 < 0 )
              {
                v8 = 1082LL;
LABEL_12:
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)v8,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
                  (const char *)(unsigned int)v7);
              }
            }
          }
          else
          {
            ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SuspensionEnabled(v5);
            v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 96LL))(*((_QWORD *)this + 12));
            if ( v7 < 0 )
            {
              v8 = 1088LL;
              goto LABEL_12;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
