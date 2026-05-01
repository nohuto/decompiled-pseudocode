/*
 * XREFs of ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800DB508
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800D406C (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800D4EB0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C7678 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBAIXZ @ 0x1800CBAE4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1800DB470 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801AB5C4 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801E803C (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180209104 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  unsigned int v2; // eax
  __int64 v3; // r12
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  struct IUnknown *v7; // rdx
  unsigned int v8; // eax
  unsigned int i; // esi
  int v10; // r15d
  __int64 (__fastcall *v11)(__int64, _QWORD, void **); // rbx
  void **v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  _QWORD *v15; // rax
  char v16; // bl
  unsigned int v17; // eax
  const struct _tlgProvider_t *v18; // rcx
  int v19; // ecx
  int v20; // r9d
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v22; // [rsp+38h] [rbp-38h] BYREF
  HSTRING v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF

  LODWORD(v23) = 0;
  v22 = 0LL;
  v21 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 15) + 56LL))(
         *((_QWORD *)this + 15),
         *((_QWORD *)this + 16),
         0LL,
         &v21);
  winrt::check_hresult(v2);
  v3 = v21;
  v25 = v21;
  v4 = 1;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v22);
  v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15), &v22);
  winrt::check_hresult(v5);
  *((_QWORD *)this + 16) = v22;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 56LL))(v3, &v24);
  winrt::check_hresult(v6);
  v8 = 0;
  for ( i = 0; ; ++i )
  {
    v10 = v4;
    if ( v8 == v24 )
      break;
    v21 = 0LL;
    LODWORD(v23) = v4 | 4;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v3 + 48LL);
    v12 = winrt::put_abi((winrt *)&v21, v7);
    v13 = v11(v3, i, v12);
    winrt::check_hresult(v13);
    v4 |= 2u;
    if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(&v21) == 1 )
    {
      v22 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 96LL))(v21, &v22);
      winrt::check_hresult(v14);
      v23 = v22;
      v4 = v10 | 0xA;
      v15 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId((__int64)this, &v26);
      v16 = winrt::operator==(&v23, v15);
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v26);
      if ( v16 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 48LL))(v21, &v26);
        winrt::check_hresult(v17);
        *(_OWORD *)((char *)this + 72) = v26;
        v18 = WindowManagementLogging::Provider();
        if ( *(_DWORD *)v18 > 5u && tlgKeywordOn((__int64)v18, 0x400000000000LL) )
        {
          *(_QWORD *)&v26 = 0x2000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            v19,
            (unsigned int)&unk_180527391,
            0,
            v20,
            (__int64)&v26);
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v21);
        break;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v21);
    v8 = i + 1;
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v25);
}
