/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180124BF8
 * Callers:
 *     ?RegisterKeyboardDockClient@KeyboardDockServer@@UEAAJPEAVBamoKeyboardDockServerStub@@PEAVBamoKeyboardDockClientProxy@@@Z @ 0x180127280 (-RegisterKeyboardDockClient@KeyboardDockServer@@UEAAJPEAVBamoKeyboardDockServerStub@@PEAVBamoKey.c)
 *     ??$emplace@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18012E558 (--$emplace@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013150 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F2D0 (--$_Uninitialized_move@PEAV-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1801190E0 (-_Change_array@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t size_of; // rax
  __int64 *v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // r13
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 result; // rax
  __int64 *v20; // [rsp+70h] [rbp+8h]
  __int64 *v22; // [rsp+88h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  size_of = std::_Get_size_of_n<8>(v10);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v5];
  v14 = v13 + 1;
  v22 = v13 + 1;
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *v13 = v15;
    v20 = &v12[v5];
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>>(
        v18,
        a2,
        v12);
      v20 = v12;
      v17 = v14;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>>(
      v18,
      v16,
      v17);
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Change_array(
      (__int64)a1,
      (__int64)v12,
      v7,
      v10);
    result = (__int64)&(*a1)[v5];
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
      v20,
      v22);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
