/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016D5E4
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18016FD5C (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x1801745C8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801C60AC (--$_Uninitialized_move@PEAV-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801C756C (-_Change_array@-$vector@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x180253474 (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
        CRenderTargetBitmap **a1,
        CRenderTargetBitmap **a2)
{
  CRenderTargetBitmap **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CRenderTargetBitmap::Release(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
