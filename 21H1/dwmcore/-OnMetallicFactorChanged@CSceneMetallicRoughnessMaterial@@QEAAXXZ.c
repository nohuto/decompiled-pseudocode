/*
 * XREFs of ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801EE900
 * Callers:
 *     ?SetMetallicFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x1801758B8 (-SetMetallicFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@.c)
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177120 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 *     ?SetRoughnessFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x180177600 (-SetRoughnessFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180169FF0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged(CSceneMetallicRoughnessMaterial *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 8);
  v4 = v2;
  while ( v2 != *((_QWORD *)this + 8) )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
      (*(void (__fastcall **)(CSceneMetallicRoughnessMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
        this,
        0LL,
        0LL);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v4);
    v2 = v4;
  }
}
