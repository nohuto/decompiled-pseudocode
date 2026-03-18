/*
 * XREFs of ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18003A220
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180037534 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x180037794 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180037844 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800378D8 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18003798C (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180039D9C (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18003C50C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18003A288 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int i; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  for ( i = *(_DWORD *)(v2 - 8); i < (unsigned int)((__int64)(*(_QWORD *)(v3 + 40) - *(_QWORD *)(v3 + 32)) >> 4); ++i )
  {
    v5 = *(_QWORD *)(v3 + 32) + 16LL * i;
    if ( *(_QWORD *)(v5 + 8) )
    {
      v7 = 0;
      *(_DWORD *)(v2 - 8) = i;
      v6 = *(_QWORD *)(v5 + 8);
      std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        this,
        &v6,
        v2,
        v3);
      goto LABEL_1;
    }
  }
}
