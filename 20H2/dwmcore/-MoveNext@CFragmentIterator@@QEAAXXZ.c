/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18005BBB4
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180051FB0 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18005A57C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18005A8D8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18005A984 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18005AD2C (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18005D330 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18005D634 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
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
