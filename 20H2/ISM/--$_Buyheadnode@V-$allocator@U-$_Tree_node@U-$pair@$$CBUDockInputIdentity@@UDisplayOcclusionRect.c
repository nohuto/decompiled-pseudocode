/*
 * XREFs of ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@@Z @ 0x180145E34
 * Callers:
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x180145DA8 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x18014683C (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x180146A1C (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180146B30 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>()
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0xD0uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
