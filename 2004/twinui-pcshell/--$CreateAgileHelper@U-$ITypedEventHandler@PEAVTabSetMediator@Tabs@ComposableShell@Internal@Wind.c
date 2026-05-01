/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180299AFC
 * Callers:
 *     ?add_TabWindowSnappedWithOthers@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18029D740 (-add_TabWindowSnappedWithOthers@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU-.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18004A94C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabSetMediator____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___ @ 0x18029A710 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18029A710.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int AgileReference; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void *v10; // rax
  __int64 *v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = (__int64 *)&v12;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  AgileReference = 0;
  v6 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_042db406_7905_56c3_8ea6_19db81931c0f, a1, v6);
  }
  else
  {
    v7 = (__int64 *)*v4;
    v14 = 0LL;
    *v6 = 0LL;
    v13 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  if ( AgileReference >= 0 )
  {
    v8 = v12;
    v12 = 0LL;
    v9 = 0LL;
    v13 = v8;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
      v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabSetMediator____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___(
             v10,
             &v13);
    v14 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v9 )
    {
      v14 = 0LL;
      *a2 = v9;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)AgileReference;
}
