/*
 * XREFs of ??1?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002C48
 * Callers:
 *     ?erase@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180002BB0 (-erase@-$vector@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001A8BC (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 *     _Microsoft::Bamo::ListPrincipalSimpleCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__BamoActivatableEntityPrincipal___::InsertWorker_::_1_::dtor$0 @ 0x180050872 (_Microsoft--Bamo--ListPrincipalSimpleCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--BamoList_A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>::~com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
