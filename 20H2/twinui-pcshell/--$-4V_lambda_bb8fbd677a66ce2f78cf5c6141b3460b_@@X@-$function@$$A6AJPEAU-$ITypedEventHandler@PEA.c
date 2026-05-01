/*
 * XREFs of ??$?4V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@@Z @ 0x180451E38
 * Callers:
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x180451F1C (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::operator=<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  v4 = a1[14];
  a1[14] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  a1[1] = &wistd::__function::__func<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::`vftable';
  v5 = a2 + 1;
  a1[2] = *a2;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v5;
    *v5 = 0LL;
  }
  a1[14] = a1 + 1;
  return a1;
}
