/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AA878
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800A9138 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePr.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgsImpl@@AEAUSize@Foundation@Windows@@@Z @ 0x1800A943C (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundation@Windows@@@.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x1800A9540 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundati_ea_1800A9540.c)
 *     ??1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ @ 0x1800A9DBC (--1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ.c)
 *     ??1?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A9DFC (--1-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?MakeSafelyCopyable@?$MakeSafelyCopyablTraitsIUnknown@PEAVViewSizePreferencesChangedEventArgsImpl@@@details@wil@@SA?AU?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgsImpl@@@23@PEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800AA99C (-MakeSafelyCopyable@-$MakeSafelyCopyablTraitsIUnknown@PEAVViewSizePreferencesChangedEventArgsImp.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800AB028 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs.c)
 *     ??1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ @ 0x1800AB13C (--1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180251770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_180251770.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
