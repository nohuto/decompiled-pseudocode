/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18015620C
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180155B34 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180154A20 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear(_QWORD **a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>>(*a1, a1[1]);
  result = (__int64)*a1;
  a1[1] = *a1;
  return result;
}
