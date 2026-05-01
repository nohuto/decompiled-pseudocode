/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_3ffe7772ea0e8b24850f42cff1d891ca___1_IInspectable___IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca___ @ 0x180262F48
 * Callers:
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca___ @ 0x180263230 (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabsChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022F630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_18022F630.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x180263F74 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeC_ea_180263F74.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_3ffe7772ea0e8b24850f42cff1d891ca___1_IInspectable___IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca___(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rax

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>(v4);
    v5[8] = *a2;
    v7 = a2[1];
    a2[1] = 0LL;
    v5[9] = v7;
    *v5 = off_180487D40;
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
