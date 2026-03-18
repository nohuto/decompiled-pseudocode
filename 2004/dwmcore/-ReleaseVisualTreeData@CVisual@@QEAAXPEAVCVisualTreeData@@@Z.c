/*
 * XREFs of ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180024088
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180035BA0 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800A36AC (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1800066C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000C3A0 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180024114 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180024160 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800A3040 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C7610 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x1801E5C48 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
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
