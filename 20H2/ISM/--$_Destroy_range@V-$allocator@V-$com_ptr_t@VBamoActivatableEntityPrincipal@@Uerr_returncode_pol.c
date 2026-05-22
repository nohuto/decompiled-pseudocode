/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800122D4
 * Callers:
 *     ?_Change_array@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180012314 (-_Change_array@-$vector@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180012388 (--$_Uninitialized_move@PEAV-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@w.c)
 *     _std::vector_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy____::_1_::catch$34 @ 0x18004EEBA (_std--vector_wil--com_ptr_t_BamoActivatableEntityPrincipal_wil--err_returncode_policy__std--allo.c)
 *     ??_G?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x180104280 (--_G-$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>>(
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
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
