/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180156198
 * Callers:
 *     ??1CRenderTargetManager@@IEAA@XZ @ 0x180156B5C (--1CRenderTargetManager@@IEAA@XZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180157960 (-clear@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180165380 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@PEAV12@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18016567C (-_Change_array@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
