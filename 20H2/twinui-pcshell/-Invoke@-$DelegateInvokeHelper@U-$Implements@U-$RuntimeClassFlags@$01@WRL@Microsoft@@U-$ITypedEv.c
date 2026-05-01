/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@$0?0PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTabDataModelTabPropertyChangedEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@3@PEAUITabDataModelTabPropertyChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@789Windows@@@Z @ 0x18033DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180149E54 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ??$?RPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@1234@@_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@QEBAJ$$QEAPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUITabDataModelTabPropertyChangedEventArgs@2345@@Z @ 0x180338768 (--$-RPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropert.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>>::*)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_,-1,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = _lambda_7fa9ec76c559735b12dbf01bbe3e3c50_::operator()<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>(
         (AppViewDataSourceAdapterBase **)(a1 + 64),
         a2,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
