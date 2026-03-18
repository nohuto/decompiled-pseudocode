/*
 * XREFs of ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1800449E0
 * Callers:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180044C4C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180044CE0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18009B5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18009B878 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B924 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B9EC (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0C9C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BE7C0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

char *__fastcall std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        char **a1,
        _OWORD *a2)
{
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  SIZE_T v12; // rcx
  char *v13; // rax
  char *v14; // rbp
  char *v15; // r14
  char *v16; // rdx
  char *v17; // rcx
  _BYTE *v18; // rcx
  char *result; // rax
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int128 v22; // xmm0
  signed __int64 v23; // rax
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  void *v25; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = (v4 - *a1) >> 4;
    v9 = v8 >> 1;
    if ( v8 > 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = 16 * v10;
    v12 = 16 * v10;
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      v12 = -1LL;
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
    v14 = v13;
    v15 = &v13[16 * v6];
    *(_OWORD *)v15 = *a2;
    v16 = a1[1];
    v17 = *a1;
    if ( v5 == v16 )
    {
      while ( v17 != v16 )
      {
        v20 = *(_OWORD *)v17;
        v17 += 16;
        *(_OWORD *)v13 = v20;
        v13 += 16;
      }
    }
    else
    {
      if ( v17 != v5 )
      {
        do
        {
          v22 = *(_OWORD *)v17;
          v17 += 16;
          *(_OWORD *)v13 = v22;
          v13 += 16;
        }
        while ( v17 != v5 );
        v16 = a1[1];
      }
      if ( v5 != v16 )
      {
        v23 = v15 - v5;
        do
        {
          *(_OWORD *)&v5[v23 + 16] = *(_OWORD *)v5;
          v5 += 16;
        }
        while ( v5 != v16 );
      }
    }
    v18 = *a1;
    if ( *a1 )
    {
      v21 = a1[2] - v18;
      v25 = *a1;
      v24 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v25, &v24);
        v18 = v25;
      }
      operator delete(v18);
    }
    *a1 = v14;
    a1[1] = &v14[16 * v7];
    result = v15;
    a1[2] = &v14[v11];
  }
  else
  {
    *(_OWORD *)v5 = *a2;
    result = a1[1];
    a1[1] = result + 16;
  }
  return result;
}
