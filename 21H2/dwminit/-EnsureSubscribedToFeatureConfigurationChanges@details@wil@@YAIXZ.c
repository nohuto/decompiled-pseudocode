/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180006B88
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180006360 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000BB58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  unsigned int v1; // ebx
  RTL_SRWLOCK **v2; // rdx
  void (__stdcall **v3)(PSRWLOCK); // rcx
  void (__fastcall *v4)(__int64 *, void (__fastcall *)(RTL_SRWLOCK *), void *); // rax
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-10h] BYREF
  void (__stdcall *v7)(PSRWLOCK); // [rsp+28h] [rbp-8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+20h] BYREF
  void (__stdcall *v9)(PSRWLOCK); // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+30h] BYREF
  void (__stdcall *v11)(PSRWLOCK); // [rsp+68h] [rbp+38h] BYREF

  v1 = dword_18001425C;
  if ( !dword_18001425C )
  {
    if ( wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_180014248);
      if ( qword_180014260 )
      {
        v1 = dword_18001425C;
        v2 = &v8;
        v9 = ReleaseSRWLockExclusive;
        v3 = &v9;
        v8 = &stru_180014248;
LABEL_5:
        wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v3, v2);
        return v1;
      }
      qword_180014260 = 0LL;
      v4 = (void (__fastcall *)(__int64 *, void (__fastcall *)(RTL_SRWLOCK *), void *))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v4 = (void (__fastcall *)(__int64 *, void (__fastcall *)(RTL_SRWLOCK *), void *))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v4(
          &qword_180014260,
          _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
          &wil::details::g_enabledStateManager);
      }
      if ( qword_180014260 )
      {
        v1 = 1;
        v6 = &stru_180014248;
        dword_18001425C = 1;
        v2 = &v6;
        v7 = ReleaseSRWLockExclusive;
        v3 = &v7;
        goto LABEL_5;
      }
      v10 = &stru_180014248;
      v11 = ReleaseSRWLockExclusive;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v11, &v10);
    }
    return 0;
  }
  return v1;
}
