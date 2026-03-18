/*
 * XREFs of ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18023D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18018579C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x18023D0AC (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x18025BA7C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 */

__int64 __fastcall CSceneMaterial::OnSceneFrameTick(CSceneMaterial *this, struct ISpectreRenderer *a2, char a3)
{
  CSceneMaterial *v3; // rbp
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct ISpectreRenderer *, __int64); // rdi
  int v10; // eax
  __int64 v11; // rcx
  struct CSceneMeshRendererComponent *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = (CSceneMaterial *)((char *)this - 64);
  v6 = 0;
  v7 = **((_QWORD **)this + 1);
  v17 = v7;
  while ( v7 != *((_QWORD *)this + 1) )
  {
    if ( !*(_QWORD *)(v7 + 40) )
    {
      v8 = *(_QWORD *)a2;
      v16 = 0;
      v9 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64))(v8 + 64);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v7 + 40));
      v10 = v9(a2, v7 + 40);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x63u);
        return v6;
      }
      (*(void (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)this - 8) + 192LL))(
        (char *)this - 64,
        *(_QWORD *)(v7 + 40),
        &v16);
      if ( v16 )
        CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v7 + 32), (CSceneMaterial *)((char *)this - 64));
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 8) + 72LL))((char *)this - 64, 0LL, 0LL);
    }
    v12 = *(struct CSceneMeshRendererComponent **)(v7 + 32);
    if ( *((_BYTE *)v12 + 112) )
    {
      v13 = CSceneMaterial::ApplyTexCoordsToSpectreResource(v3, v12, a3);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x70u);
        return v6;
      }
      v3 = (CSceneMaterial *)((char *)this - 64);
      *(_BYTE *)(*(_QWORD *)(v7 + 32) + 112LL) = 0;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v17);
    v7 = v17;
  }
  return v6;
}
