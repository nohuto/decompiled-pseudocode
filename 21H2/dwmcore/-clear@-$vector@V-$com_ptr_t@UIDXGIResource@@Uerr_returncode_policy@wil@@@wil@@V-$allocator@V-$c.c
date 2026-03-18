/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180005208
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C522C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800055CC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

void *__fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::clear(__int64 a1)
{
  void *result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(*(void **)a1);
  result = *(void **)a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  return result;
}
