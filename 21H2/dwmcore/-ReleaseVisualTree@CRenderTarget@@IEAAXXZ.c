/*
 * XREFs of ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x18002689C
 * Callers:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180026450 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z @ 0x18002672C (-SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x180026678 (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 */

void __fastcall CRenderTarget::ReleaseVisualTree(CRenderTarget *this)
{
  CVisualTree **v1; // rbx

  v1 = (CVisualTree **)((char *)this + 104);
  if ( *((_QWORD *)this + 13) )
  {
    CVisualTree::RemoveTreeClient(*v1, (CRenderTarget *)((char *)this + 64));
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v1);
  }
}
