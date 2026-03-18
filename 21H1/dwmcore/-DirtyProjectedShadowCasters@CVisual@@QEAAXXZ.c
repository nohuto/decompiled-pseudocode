/*
 * XREFs of ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1800045C8
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004080 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180005D30 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180005DE4 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 */

void __fastcall CVisual::DirtyProjectedShadowCasters(CVisual *this)
{
  __int64 ProjectedShadowCasters; // rax
  __int64 v2; // rbx
  CProjectedShadowCaster **v3; // rdi
  unsigned __int64 v4; // rsi

  if ( (**((_DWORD **)this + 28) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v2 = 0LL;
    v3 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    v4 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        CProjectedShadowCaster::RequestRedraw(*v3);
        ++v2;
        ++v3;
      }
      while ( v2 != v4 );
    }
  }
}
