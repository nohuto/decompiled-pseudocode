/*
 * XREFs of ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18027BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x1802798FC (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 */

void __fastcall CDDisplaySwapChain::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  __int64 v3; // rcx
  const struct IDeviceResource *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 56));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 72));
  v3 = *(_QWORD *)(this + 80);
  v4 = 0LL;
  *(_QWORD *)(this + 80) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(this + 88),
    0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 96));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 104));
  v5 = *(_QWORD *)(this + 112);
  *(_QWORD *)(this + 112) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 120));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 128));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 136));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 144));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 152));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 160));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 168));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 176));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 184));
  *(_DWORD *)(this + 200) = -1;
  *(_DWORD *)(this + 204) = -1;
  std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
    *(DDisplayPrimaryBufferResources **)(this + 208),
    *(DDisplayPrimaryBufferResources **)(this + 216));
  *(_QWORD *)(this + 216) = *(_QWORD *)(this + 208);
  v6 = *(_QWORD *)(this + 232);
  if ( v6 )
  {
    v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(
      v7,
      this & ((unsigned __int128)-(__int128)(this - 64) >> 64));
    v8 = *(_QWORD *)(this + 232);
    *(_QWORD *)(this + 232) = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( this != 64 )
    v4 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(this - 56) + 12LL) + this - 56);
  CDeviceResource::NotifyInvalid((CDeviceResource *)(this - 40), v4);
}
