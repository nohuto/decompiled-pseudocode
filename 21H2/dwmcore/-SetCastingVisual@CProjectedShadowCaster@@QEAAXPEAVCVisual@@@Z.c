/*
 * XREFs of ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180201D40
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1802012E8 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL@@@Z @ 0x180201BBC (-ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 * Callees:
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180049460 (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1801F699C (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180201868 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180202354 (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1802363B8 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::SetCastingVisual(CProjectedShadowCaster *this, CComposition **a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rdi
  __int64 v6; // rdi
  __int64 ProjectedShadowCasters; // r14
  CProjectedShadowCaster **v8; // r8
  CProjectedShadowCaster **j; // rcx

  if ( a2 != *((CComposition ***)this + 8) )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CProjectedShadowCaster::InvalidateMaskContent(this);
      v4 = (CProjectedShadowScene **)*((_QWORD *)this + 13);
      for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 12); i != v4; ++i )
        CProjectedShadowScene::DiscardCachesForCaster(*i, this);
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear((char *)this + 80);
      v6 = *((_QWORD *)this + 8);
      if ( (**(_DWORD **)(v6 + 232) & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(*((_QWORD *)this + 8));
        v8 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
        for ( j = *(CProjectedShadowCaster ***)ProjectedShadowCasters; j != v8; ++j )
        {
          if ( *j == this )
          {
            memmove_0(j, j + 1, (char *)v8 - (char *)(j + 1));
            *(_QWORD *)(ProjectedShadowCasters + 8) -= 8LL;
            if ( ((*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
              CComposition::RemoveProjectedShadowCasterVisual(*(CComposition **)(v6 + 16), (struct CVisual *)v6);
            break;
          }
        }
      }
    }
    *((_QWORD *)this + 8) = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowCaster(a2, this);
      CProjectedShadowCaster::InvalidateMaskContent(this);
    }
  }
}
