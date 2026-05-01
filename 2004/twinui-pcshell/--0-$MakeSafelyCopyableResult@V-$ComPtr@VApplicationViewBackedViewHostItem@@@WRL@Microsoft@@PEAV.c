/*
 * XREFs of ??0?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@AEBU012@@Z @ 0x180259134
 * Callers:
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800AB028 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs.c)
 *     ?__clone@?$__func@V_lambda_85c2feea8e3a39098c83caf73af413d2_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x1800AB1C0 (-__clone@-$__func@V_lambda_85c2feea8e3a39098c83caf73af413d2_@@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(
        _QWORD *a1,
        volatile int *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v2 = *(_QWORD *)a2;
  v3 = a1;
  *a1 = *(_QWORD *)a2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 192);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 192), v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      return v3;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
  }
  return v3;
}
