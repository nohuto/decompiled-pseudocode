/*
 * XREFs of ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18004C348
 * Callers:
 *     ?UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z @ 0x1800A55E0 (-UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x180027060 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1801F73BC (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1802020F4 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::UpdateTransform(
        CPreComputeContext::CPreWalkVisual *this,
        const struct CVisualTree *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  const struct CVisualTree *v5; // rdx
  CPreComputeContext::CPreWalkVisual *v6; // rcx
  struct CTreeData *TreeData; // rax
  struct CComposition *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  CCompositionLight *v12; // r14
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v14; // rdi
  CProjectedShadowCaster **i; // rbx

  CurrentFrameId = GetCurrentFrameId();
  CPreComputeContext::CPreWalkVisual::CalcTransform(v6, v5, CurrentFrameId);
  if ( !*((_WORD *)this + 4) )
    return;
  TreeData = CVisual::FindTreeData(*(CVisual **)this, a2);
  if ( *((_QWORD *)TreeData + 34) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)TreeData + 36) + 16LL) + 496LL) )
    goto LABEL_3;
  if ( *((_BYTE *)this + 8) )
  {
    v8 = g_pComposition;
    v9 = *((_DWORD *)g_pComposition + 268);
    if ( v9 )
    {
      v10 = 0LL;
      v11 = v9;
      while ( 1 )
      {
        v12 = *(CCompositionLight **)(v10 + *((_QWORD *)v8 + 131));
        if ( (*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)v12 + 200LL))(v12) == *(_QWORD *)this )
          CCompositionLight::IssueLightChangedNotification(v12);
        v10 += 8LL;
        if ( !--v11 )
          break;
        v8 = g_pComposition;
      }
    }
  }
  if ( *((_BYTE *)this + 9) )
  {
    CVisual::DirtyProjectedShadowCasters(*(CVisual **)this);
LABEL_3:
    if ( *((_BYTE *)this + 9) )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(*(_QWORD *)this);
      v14 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
      for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v14; ++i )
        CProjectedShadowCaster::UpdateVisualProperty(*i, a2);
    }
  }
}
