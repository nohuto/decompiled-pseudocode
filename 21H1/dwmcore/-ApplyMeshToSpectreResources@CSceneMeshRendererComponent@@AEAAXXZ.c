/*
 * XREFs of ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1801ED2B0
 * Callers:
 *     ?OnChanged@CSceneMeshRendererComponent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ED5A0 (-OnChanged@CSceneMeshRendererComponent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH@@@Z @ 0x1801ED650 (-ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHREN.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180169FF0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801ED26C (-ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 */

void __fastcall CSceneMeshRendererComponent::ApplyMeshToSpectreResources(CSceneMeshRendererComponent *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 7);
  v3 = *v1;
  v4 = *v1;
  while ( (__int64 *)v3 != v1 )
  {
    CSceneMeshRendererComponent::ApplyMeshToMeshComponent(this, *(struct ISpectreMeshComponent **)(v3 + 40));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v4);
    v3 = v4;
  }
}
