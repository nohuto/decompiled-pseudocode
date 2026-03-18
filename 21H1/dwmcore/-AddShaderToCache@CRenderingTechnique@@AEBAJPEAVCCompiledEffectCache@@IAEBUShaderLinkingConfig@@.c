/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0C9C
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180044FB8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18002CD68 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1800449E0 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180044C4C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18009BAB4 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0AAC (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BE7C0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        CRenderingTechnique *this,
        const void **a2,
        unsigned int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  _BYTE *v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int128 v24; // [rsp+58h] [rbp-18h] BYREF
  _BYTE *v25; // [rsp+68h] [rbp-8h]
  unsigned __int64 v26; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0LL;
  *(_QWORD *)&v21 = *((_QWORD *)this + 1);
  v23 = 0LL;
  DWORD2(v21) = 0;
  v25 = 0LL;
  v24 = 0LL;
  *(_OWORD *)v22 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    (char **)v22,
    &v21);
  CFragmentIterator::FindFirst((CFragmentIterator *)v22);
  v11 = (_BYTE *)*((_QWORD *)&v24 + 1);
  while ( ((char *)v22[1] - (char *)v22[0]) >> 4 )
  {
    v12 = *((_QWORD *)v22[1] - 2) + 56LL;
    v26 = v12;
    if ( v5 == v11 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
        (const void **)&v24,
        v11,
        &v26);
      v5 = v25;
      v11 = (_BYTE *)*((_QWORD *)&v24 + 1);
    }
    else
    {
      *(_QWORD *)v11 = v12;
      v11 += 8;
      *((_QWORD *)&v24 + 1) = v11;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v22);
  }
  v13 = *((_QWORD *)v11 - 1);
  v14 = v24;
  v15 = ((__int64)&v11[-v24] >> 3) - 1;
  if ( v15 < 0 || !(_QWORD)v24 && v15 )
  {
    ((void (__fastcall *)(void *, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v22[1],
      v9,
      v10,
      v13);
    __debugbreak();
  }
  *(_QWORD *)&v21 = v15;
  *((_QWORD *)&v21 + 1) = v24;
  v16 = CCompiledEffectCache::CreateLinkedShader(a2, a3, (__int64)a4, v13, &v21, a5);
  v18 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1C1u, 0LL);
  v19 = v22[0];
  if ( v22[0] )
  {
    *(void **)&v21 = v22[0];
    v26 = (v23 - (unsigned __int64)v22[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v26 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned((void **)&v21, &v26);
      v19 = (void *)v21;
    }
    operator delete(v19);
    v23 = 0LL;
    *(_OWORD *)v22 = 0LL;
  }
  if ( v14 )
    std::_Deallocate<16,0>(v14, (unsigned __int64)&v5[-v14] & 0xFFFFFFFFFFFFFFF8uLL);
  return v18;
}
