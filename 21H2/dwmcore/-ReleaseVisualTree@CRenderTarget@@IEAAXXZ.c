/*
 * XREFs of ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x180025230
 * Callers:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x18001D420 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x180025294 (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x180024AD0 (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::ReleaseVisualTree(CRenderTarget *this)
{
  CVisualTree *v2; // rcx
  __int64 v3; // rcx

  v2 = (CVisualTree *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    CVisualTree::RemoveTreeClient(v2, (CRenderTarget *)((char *)this + 72));
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 96);
    v3 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
