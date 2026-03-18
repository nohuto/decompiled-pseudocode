/*
 * XREFs of ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x18023C43C
 * Callers:
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18023C4D0 (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x18023C7B0 (-InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_lower_bound@PEAVCSceneMeshRendererComponent@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18023C12C (--$_Find_lower_bound@PEAVCSceneMeshRendererComponent@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRen.c)
 */

void __fastcall CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  void (__fastcall *v4)(__int64, _QWORD); // rdi
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  CSceneMeshRendererComponent *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 10);
  v3 = *(_QWORD *)a2;
  if ( v2 )
  {
    v4 = *(void (__fastcall **)(__int64, _QWORD))(v3 + 8);
    v10 = this;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CSceneMeshRendererComponent *>(
      (__int64 *)(v2 + 72),
      (__int64)v8,
      (unsigned __int64 *)&v10);
    v7 = v9;
    if ( *(_BYTE *)(v9 + 25) || v5 < *(_QWORD *)(v9 + 32) )
      v7 = *(_QWORD *)(v2 + 72);
    v4(v6, *(_QWORD *)(v7 + 40));
  }
  else
  {
    (*(void (__fastcall **)(struct ISpectreMeshComponent *, _QWORD))(v3 + 8))(a2, 0LL);
  }
}
