/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801AABDC
 * Callers:
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800E8C2C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z @ 0x1801A9FBC (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z.c)
 *     ?ReleaseForRender@CComputeScribbleFramebuffer@@QEAAJXZ @ 0x1801AA800 (-ReleaseForRender@CComputeScribbleFramebuffer@@QEAAJXZ.c)
 *     ?Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z @ 0x1801AA8C0 (-Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801A9A64 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
