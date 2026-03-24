/*
 * XREFs of ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800244A8
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180044294 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800A047C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000A490 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180011D60 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180024534 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180024580 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18009FF88 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800CB360 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x1801E48A8 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 */

void __fastcall CVisual::ReleaseVisualTreeData(CVisual *this, struct CVisualTreeData *a2)
{
  __int64 ProjectedShadowCasters; // rax
  __int64 v5; // rbp
  __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (**((_DWORD **)this + 28) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v5 = 0LL;
    v6 = *(__int64 **)ProjectedShadowCasters;
    v7 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        v8 = *v6;
        v12 = *((_QWORD *)a2 + 40);
        v9 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
               (__int64 *)(v8 + 72),
               &v12);
        if ( v9 == *(__int64 **)(v10 + 72) || v11 < v9[4] )
          v9 = *(__int64 **)(v10 + 72);
        if ( v9 != *(__int64 **)(v10 + 72) )
          std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
            v10 + 72,
            &v12);
        ++v6;
        ++v5;
      }
      while ( v5 != v7 );
    }
  }
  CTreeData::Clear(a2);
  *((_QWORD *)a2 + 40) = 0LL;
  if ( CVisual::GetUnusedTreeData(this) )
    CVisualTreeData::`vector deleting destructor'(a2, 1u);
  else
    CVisual::SetUnusedTreeData(this, a2);
}
