/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x18014768C
 * Callers:
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x180147270 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069708 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Eqrange@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@std@@V12@@1@AEBUDockInputIdentity@@@Z @ 0x1801252A0 (--$_Eqrange@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRe.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@2@@Z @ 0x1801473B8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRec.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18014764C (-clear@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@UDockInputIden.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 *v8; // r9
  __int64 *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Eqrange<DockInputIdentity>(
    a1,
    &v10,
    a2);
  v3 = v10;
  v4 = 0LL;
  v5 = v10;
  v12 = v10;
  while ( (_QWORD *)v5 != v11 )
  {
    ++v4;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v12);
    v5 = v12;
  }
  v6 = (_QWORD *)*a1;
  v12 = v3;
  if ( v3 == *v6 && v11 == v6 )
  {
    std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::clear(a1);
  }
  else
  {
    while ( (_QWORD *)v3 != v11 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v12);
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Extract(
             a1,
             v8);
      std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0xD0);
      v3 = v12;
    }
  }
  return v4;
}
