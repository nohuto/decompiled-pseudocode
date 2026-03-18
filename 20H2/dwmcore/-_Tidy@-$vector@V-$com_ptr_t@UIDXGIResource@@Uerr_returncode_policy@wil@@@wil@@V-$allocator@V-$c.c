/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800D4600
 * Callers:
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x180037004 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800450C4 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x180186BF4 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801F7F54 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180168C70 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(*(void **)a1);
    std::_Deallocate<16,0>(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
