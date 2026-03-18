/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x1801EBB6C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1801EBC30 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpec_ea_1801EBC30.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180167490 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x180169134 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801EB248 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_ptr_t@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v6; // r10
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v4 = *a1;
  v6 = a3;
  if ( a3 == **a1 && a4 == v4 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      (__int64 *)v4[1]);
    v4[1] = (__int64)v4;
    *v4 = (__int64)v4;
    v4[2] = (__int64)v4;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( (__int64 *)v6 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v15);
      v14 = v9;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v14);
      v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDevice const * const,CGradientSource::Cache>>>::_Extract(
              a1,
              v10);
      v12 = v11[5];
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      std::_Deallocate<16,0>(v11, 0x30uLL);
      v6 = v15;
    }
    *a2 = v6;
  }
  return a2;
}
