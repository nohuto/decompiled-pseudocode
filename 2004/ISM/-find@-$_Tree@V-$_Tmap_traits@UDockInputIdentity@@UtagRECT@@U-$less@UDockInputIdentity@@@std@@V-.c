/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@std@@@std@@@2@AEBUDockInputIdentity@@@Z @ 0x1801286EC
 * Callers:
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x1801269AC (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C4D0 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180146D00 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x180146DB0 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x180146E48 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::find(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // r10
  __int64 *v4; // r9
  __int64 *v5; // rcx
  unsigned int v6; // eax
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  bool v10; // cf
  unsigned __int64 v11; // rax

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_14;
  do
  {
    v6 = *((_DWORD *)v5 + 8);
    v7 = v6 < *(_DWORD *)a3;
    if ( v6 == *(_DWORD *)a3 )
    {
      v8 = *(_QWORD *)(a3 + 8);
      v7 = v5[5] < v8;
      if ( v5[5] == v8 )
        v7 = *((_WORD *)v5 + 24) < *(_WORD *)(a3 + 16);
    }
    if ( v7 )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 )
    goto LABEL_14;
  v9 = *((_DWORD *)v4 + 8);
  v10 = *(_DWORD *)a3 < v9;
  if ( *(_DWORD *)a3 == v9 )
  {
    v11 = *(_QWORD *)(a3 + 8);
    v10 = v11 < v4[5];
    if ( v11 == v4[5] )
      v10 = *(_WORD *)(a3 + 16) < *((_WORD *)v4 + 24);
  }
  if ( v10 )
LABEL_14:
    v4 = v3;
  *a2 = v4;
  return a2;
}
