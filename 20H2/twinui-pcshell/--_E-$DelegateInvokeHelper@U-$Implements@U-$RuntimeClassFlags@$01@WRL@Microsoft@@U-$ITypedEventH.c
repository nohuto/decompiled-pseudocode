/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@$0?0PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTabDataModelTabPropertyChangedEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@3@PEAUITabDataModelTabPropertyChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18033B120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>>::*)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_,-1,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[9];
  if ( v4 )
  {
    a1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
