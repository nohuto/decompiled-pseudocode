/*
 * XREFs of ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1801F73BC
 * Callers:
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18004C348 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180201D00 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CVisual::DirtyProjectedShadowCasters(CVisual *this)
{
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v2; // rdi
  CProjectedShadowCaster **i; // rbx

  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v2 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v2; ++i )
      CProjectedShadowCaster::RequestRedraw(*i);
  }
}
