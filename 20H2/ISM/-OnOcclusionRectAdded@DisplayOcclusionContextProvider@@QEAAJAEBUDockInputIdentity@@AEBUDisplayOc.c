/*
 * XREFs of ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180146C70
 * Callers:
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18012691C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@std@@@std@@@2@AEBUDockInputIdentity@@@Z @ 0x18012865C (-find@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIdentity@@@std@@V-.c)
 *     ??$_Buynode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@AEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU01@AEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180145F18 (--$_Buynode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOccl_ea_180145F18.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x180146548 (--$_Insert_nohint@AEAU-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU-$_Tree_no.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x180146A1C (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 */

__int64 __fastcall DisplayOcclusionContextProvider::OnOcclusionRectAdded(
        DisplayOcclusionContextProvider *this,
        const struct DockInputIdentity *a2,
        const struct DisplayOcclusionRect *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // r8
  const char *v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 88);
  if ( *std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::find(
          (__int64 *)this + 11,
          &v15,
          (__int64)a2) != *((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      51LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      v7);
    __debugbreak();
  }
  v8 = std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buynode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>,DockInputIdentity const &,DisplayOcclusionRect const &>(
         (__int64)v3,
         *v3,
         v6,
         (__int64)a3);
  std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_nohint<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
    v3,
    (__int64)v13,
    v9,
    (__int64)(v8 + 4),
    v8);
  v10 = DisplayOcclusionContextProvider::Broadcast(this);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
