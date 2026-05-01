/*
 * XREFs of ?__clone@?$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x1800AC8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$MakeSafelyCopyableResult@V?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@QEAA@AEBU012@@Z @ 0x18024B930 (--0-$MakeSafelyCopyableResult@V-$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Wind.c)
 */

void __fastcall wistd::__function::__func<_lambda_88fc7155b3915cd74e6d1f1f1c627343_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_88fc7155b3915cd74e6d1f1f1c627343_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::`vftable';
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
    a2 + 1,
    a1 + 8);
  v3[1] = *(_QWORD *)(v2 + 8);
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalAddRef(v3 + 1);
}
