/*
 * XREFs of ??$_Buynode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@2@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU01@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@@Z @ 0x180146350
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18014654C (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buynode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>,std::pair<DockInputIdentity const,DisplayOcclusionRect> &>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0xD0uLL);
  *((_OWORD *)result + 2) = *a3;
  *((_OWORD *)result + 3) = a3[1];
  *((_OWORD *)result + 4) = a3[2];
  *((_OWORD *)result + 5) = a3[3];
  *((_OWORD *)result + 6) = a3[4];
  *((_OWORD *)result + 7) = a3[5];
  *((_OWORD *)result + 8) = a3[6];
  *((_OWORD *)result + 9) = a3[7];
  *((_OWORD *)result + 10) = a3[8];
  *((_OWORD *)result + 11) = a3[9];
  *((_OWORD *)result + 12) = a3[10];
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
