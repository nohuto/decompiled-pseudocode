/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18003C50C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18003A220 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18003A288 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18003C690 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        CRenderingTechnique *this,
        const void **a2,
        unsigned int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  __int64 *v5; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  gsl::details *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h]
  __int128 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-8h]
  __int64 v23; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0LL;
  *(_QWORD *)&v18 = *((_QWORD *)this + 1);
  v20 = 0LL;
  DWORD2(v18) = 0;
  v22 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    (__int64)&v19,
    &v18);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v19);
  v9 = (__int64 *)*((_QWORD *)&v21 + 1);
  while ( (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 4 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)&v19 + 1) - 16LL) + 56LL;
    v23 = v10;
    if ( v9 == v5 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(&v21, v9, &v23);
      v5 = v22;
      v9 = (__int64 *)*((_QWORD *)&v21 + 1);
    }
    else
    {
      *v9++ = v10;
      *((_QWORD *)&v21 + 1) = v9;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)&v19);
  }
  v11 = *(v9 - 1);
  v12 = v21;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v18, ((__int64)((__int64)v9 - v21) >> 3) - 1);
  if ( (_QWORD)v18 == -1LL || !v12 && (_QWORD)v18 )
  {
    gsl::details::terminate(v13);
    JUMPOUT(0x18003C687LL);
  }
  *((_QWORD *)&v18 + 1) = v12;
  v14 = CCompiledEffectCache::CreateLinkedShader(a2, a3, (__int64)a4, v11, &v18, a5);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x251u, 0LL);
  if ( (_QWORD)v19 )
  {
    std::_Deallocate<16,0>(v19, (v20 - v19) & 0xFFFFFFFFFFFFFFF0uLL);
    v20 = 0LL;
    v19 = 0LL;
  }
  if ( v12 )
    std::_Deallocate<16,0>(v12, ((unsigned __int64)v5 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
  return v16;
}
