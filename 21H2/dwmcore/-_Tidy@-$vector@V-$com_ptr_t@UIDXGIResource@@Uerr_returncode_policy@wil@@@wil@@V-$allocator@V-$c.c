/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800DD2C8
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x18007F718 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800C7E3C (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801C3EE0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800055CC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      v2,
      *(char **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
