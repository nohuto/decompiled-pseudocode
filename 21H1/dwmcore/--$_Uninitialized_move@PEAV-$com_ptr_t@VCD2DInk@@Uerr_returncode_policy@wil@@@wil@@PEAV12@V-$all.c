/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18018B4F0
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18018B27C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801B6424 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801BAACC (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801FC2A8 (--$_Emplace_reallocate@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180214260 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016D5AC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

__int64 *__fastcall std::_Uninitialized_move<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> *,wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}
