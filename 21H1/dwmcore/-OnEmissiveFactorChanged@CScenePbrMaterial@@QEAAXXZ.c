/*
 * XREFs of ?OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801EEE10
 * Callers:
 *     ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x180174FC0 (-SetEmissiveFactor@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2.c)
 *     ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177220 (-SetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180169FF0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEA94 (-ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CScenePbrMaterial::OnEmissiveFactorChanged(CScenePbrMaterial *this)
{
  __int64 v2; // rax
  struct ISpectreMaterial *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 8);
  v4 = v2;
  while ( v2 != *((_QWORD *)this + 8) )
  {
    v3 = *(struct ISpectreMaterial **)(v2 + 40);
    if ( v3 )
    {
      CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(this, v3);
      (*(void (__fastcall **)(CScenePbrMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v4);
    v2 = v4;
  }
}
