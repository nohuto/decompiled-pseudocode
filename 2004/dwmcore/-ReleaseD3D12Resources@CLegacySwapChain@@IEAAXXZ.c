/*
 * XREFs of ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x1802486B8
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C23B4 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802482D0 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E9718 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::ReleaseD3D12Resources(CLegacySwapChain *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx

  v1 = *((_QWORD *)this + 14);
  for ( i = *((_QWORD *)this + 13); i != v1; i += 8LL )
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset((CDrawListEntry **)(*(_QWORD *)i + 96LL));
}
