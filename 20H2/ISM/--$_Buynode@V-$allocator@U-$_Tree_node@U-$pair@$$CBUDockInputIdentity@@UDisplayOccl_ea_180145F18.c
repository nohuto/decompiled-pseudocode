/*
 * XREFs of ??$_Buynode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@AEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU01@AEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180145F18
 * Callers:
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180146C70 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buynode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>,DockInputIdentity const &,DisplayOcclusionRect const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0xD0uLL);
  *((_OWORD *)result + 2) = *(_OWORD *)a3;
  result[6] = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(result + 7) = *(_OWORD *)a4;
  *(_OWORD *)(result + 9) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(result + 11) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(result + 13) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(result + 15) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(result + 17) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(result + 19) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(result + 21) = *(_OWORD *)(a4 + 112);
  *(_OWORD *)(result + 23) = *(_OWORD *)(a4 + 128);
  *((_DWORD *)result + 50) = *(_DWORD *)(a4 + 144);
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
