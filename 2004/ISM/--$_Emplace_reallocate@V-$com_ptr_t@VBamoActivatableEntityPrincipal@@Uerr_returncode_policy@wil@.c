/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180012390
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001ABDC (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800122DC (-_Change_array@-$vector@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180012350 (--$_Uninitialized_move@PEAV-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 size_of; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rcx
  __int64 *v16; // rdx
  _QWORD *v17; // r8
  __int64 *v18; // rcx

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v7;
  }
  else
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  size_of = std::_Get_size_of_n<8>(v10);
  v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v5];
  v14 = v13 + 1;
  v15 = *a3;
  *a3 = 0LL;
  *v13 = v15;
  v16 = a1[1];
  v17 = v12;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>>(
      v18,
      a2,
      v12);
    v17 = v14;
    v16 = a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>>(
    v18,
    v16,
    v17);
  std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Change_array(
    (__int64)a1,
    (__int64)v12,
    v7,
    v10);
  return (__int64)&(*a1)[v5];
}
