/*
 * XREFs of ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180044C4C
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180044CE0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18009B5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18009B878 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B924 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B9EC (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18009BAB4 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0C9C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1800449E0 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  v4 = *(_DWORD *)(v2 - 8);
  v5 = *(_QWORD *)(v3 + 32);
  while ( v4 < (unsigned int)((*(_QWORD *)(v3 + 40) - v5) >> 4) )
  {
    if ( *(_QWORD *)(v5 + 16LL * v4 + 8) )
    {
      DWORD2(v6) = 0;
      *(_DWORD *)(v2 - 8) = v4;
      *(_QWORD *)&v6 = *(_QWORD *)(v5 + 16LL * v4 + 8);
      std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        (char **)this,
        &v6);
      goto LABEL_1;
    }
    ++v4;
  }
}
