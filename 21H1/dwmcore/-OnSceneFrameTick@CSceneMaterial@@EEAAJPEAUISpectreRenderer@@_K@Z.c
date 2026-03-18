/*
 * XREFs of ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801EE350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180169FF0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1801EE1BC (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 */

__int64 __fastcall CSceneMaterial::OnSceneFrameTick(CSceneMaterial *this, struct ISpectreRenderer *a2, char a3)
{
  CSceneMaterial *v3; // r14
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(struct ISpectreRenderer *, __int64); // rdi
  int v9; // eax
  __int64 v10; // rcx
  struct CSceneMeshRendererComponent *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = (CSceneMaterial *)((char *)this - 56);
  v6 = 0;
  v7 = **((_QWORD **)this + 1);
  v15 = v7;
  while ( v7 != *((_QWORD *)this + 1) )
  {
    if ( !*(_QWORD *)(v7 + 40) )
    {
      v8 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64))(*(_QWORD *)a2 + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v7 + 40));
      v9 = v8(a2, v7 + 40);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Eu, 0LL);
        return v6;
      }
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 7) + 200LL))((char *)this - 56, *(_QWORD *)(v7 + 40));
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 7) + 72LL))((char *)this - 56, 0LL, 0LL);
    }
    v11 = *(struct CSceneMeshRendererComponent **)(v7 + 32);
    if ( *((_BYTE *)v11 + 104) )
    {
      v12 = CSceneMaterial::ApplyTexCoordsToSpectreResource(v3, v11, a3);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x65u, 0LL);
        return v6;
      }
      v3 = (CSceneMaterial *)((char *)this - 56);
      *(_BYTE *)(*(_QWORD *)(v7 + 32) + 104LL) = 0;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v15);
    v7 = v15;
  }
  return v6;
}
