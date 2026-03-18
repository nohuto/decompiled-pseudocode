/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18009BAB4
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180044CE0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18009B5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18009B878 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B924 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B9EC (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0C9C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180044C4C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 */

void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  *((_QWORD *)this + 1) -= 16LL;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 1) - 8LL);
    CFragmentIterator::FindFirst(this);
  }
}
