/*
 * XREFs of ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1800117FC
 * Callers:
 *     ?ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL@@@Z @ 0x1800117A8 (-ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1801E3540 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 * Callees:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18000E048 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18001186C (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800119B0 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180013430 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180013490 (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800AA948 (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

void __fastcall CProjectedShadowCaster::SetCastingVisual(CProjectedShadowScene ***this, CProjectedShadowScene **a2)
{
  CProjectedShadowScene **v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  CProjectedShadowScene **v7; // rsi
  __int64 ProjectedShadowCasters; // r14
  CProjectedShadowCaster **v9; // r8
  CProjectedShadowCaster **i; // rcx

  if ( a2 != this[7] )
  {
    if ( this[7] )
    {
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
      v4 = this[11];
      v5 = 0LL;
      v6 = (unsigned __int64)((char *)this[12] - (char *)v4 + 7) >> 3;
      if ( v4 > this[12] )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          CProjectedShadowScene::DiscardCachesForCaster(*v4, (struct CProjectedShadowCaster *)this);
          ++v5;
          ++v4;
        }
        while ( v5 != v6 );
      }
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(this + 9);
      v7 = this[7];
      if ( (*(_DWORD *)v7[28] & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this[7]);
        v9 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
        for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v9 && *i != (CProjectedShadowCaster *)this; ++i )
          ;
        if ( i != v9 )
        {
          memmove_0(i, i + 1, (char *)v9 - (char *)(i + 1));
          *(_QWORD *)(ProjectedShadowCasters + 8) -= 8LL;
          if ( ((*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            CComposition::RemoveProjectedShadowCasterVisual(v7[2], (struct CVisual *)v7);
        }
      }
    }
    this[7] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowCaster((CVisual *)a2, (struct CProjectedShadowCaster *)this);
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
    }
  }
}
