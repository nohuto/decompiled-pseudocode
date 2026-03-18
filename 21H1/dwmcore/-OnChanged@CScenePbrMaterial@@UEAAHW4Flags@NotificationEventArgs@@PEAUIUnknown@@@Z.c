/*
 * XREFs of ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EED80
 * Callers:
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EE880 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180169FF0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEAEC (-ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEC18 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEC5C (-ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

__int64 __fastcall CScenePbrMaterial::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  struct ISpectreMaterial *v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = **(_QWORD **)(a1 + 64);
  v8 = v5;
  while ( v5 != *(_QWORD *)(a1 + 64) )
  {
    v6 = *(struct ISpectreMaterial **)(v5 + 40);
    if ( !v6 )
      return 0LL;
    if ( a3 )
    {
      if ( a3 == *(_QWORD *)(a1 + 112) )
      {
        CScenePbrMaterial::ApplyEmissiveInputToSpectreResource((CScenePbrMaterial *)a1, v6);
      }
      else if ( a3 == *(_QWORD *)(a1 + 120) )
      {
        CScenePbrMaterial::ApplyNormalInputToSpectreResource((CScenePbrMaterial *)a1, v6);
      }
      else if ( a3 == *(_QWORD *)(a1 + 128) )
      {
        CScenePbrMaterial::ApplyOcclusionInputToSpectreResource((CScenePbrMaterial *)a1, v6);
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v8);
    v5 = v8;
  }
  return 1LL;
}
