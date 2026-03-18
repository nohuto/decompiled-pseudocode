/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800B8BE0
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18004B198 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800B86F0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800B89A4 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800B8A50 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800B8B18 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800B9AE8 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18004B49C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
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
