/*
 * XREFs of ?__clone@?$__func@V_lambda_85c2feea8e3a39098c83caf73af413d2_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x1800ACD10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@AEBU012@@Z @ 0x180258814 (--0-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAV.c)
 */

void __fastcall wistd::__function::__func<_lambda_85c2feea8e3a39098c83caf73af413d2_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r11

  v2 = a1 + 8;
  *a2 = &wistd::__function::__func<_lambda_85c2feea8e3a39098c83caf73af413d2_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::`vftable';
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(
    a2 + 1,
    a1 + 8);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 8);
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalAddRef((__int64 *)(v3 + 8));
}
