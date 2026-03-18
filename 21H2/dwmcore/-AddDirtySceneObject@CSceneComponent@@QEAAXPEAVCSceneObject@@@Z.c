/*
 * XREFs of ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x18025BA7C
 * Callers:
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x18023CB2C (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 *     ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18023D1B0 (-OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18023D660 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18023DB4C (-OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18018579C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?AddDirtySceneObject@CSceneWorld@@QEAAXPEAVCSceneObject@@@Z @ 0x180252E9C (-AddDirtySceneObject@CSceneWorld@@QEAAXPEAVCSceneObject@@@Z.c)
 */

void __fastcall CSceneComponent::AddDirtySceneObject(CSceneComponent *this, struct CSceneObject *a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v3 = **((_QWORD **)this + 8);
  v4 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    CSceneWorld::AddDirtySceneObject(*(CSceneWorld **)(*(_QWORD *)(v3 + 32) + 120LL), a2);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v4);
    v3 = v4;
  }
}
