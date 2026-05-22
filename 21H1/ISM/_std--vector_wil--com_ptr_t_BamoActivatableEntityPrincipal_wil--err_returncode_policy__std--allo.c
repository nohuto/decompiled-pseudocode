/*
 * XREFs of _std::vector_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy____::_1_::catch$34 @ 0x18004F4FA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001229C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_pol.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy____::_1_::catch_34(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>>(
    *(_QWORD **)(a2 + 112),
    *(_QWORD **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
