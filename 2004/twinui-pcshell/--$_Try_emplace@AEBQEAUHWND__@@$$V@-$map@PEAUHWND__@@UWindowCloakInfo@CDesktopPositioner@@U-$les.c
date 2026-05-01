/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180043254
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800438BC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048A50 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x180043368 (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU-$_Tree_no.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  int v5; // r14d
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v5 = (int)a1;
  v6 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_8;
  v9 = *a3;
  do
  {
    if ( v8[4] >= v9 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == v6 || v9 < v7[4] )
  {
LABEL_8:
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(48LL);
    *(_QWORD *)(v10 + 32) = *a3;
    *(_WORD *)(v10 + 41) = 0;
    *(_WORD *)(v10 + 40) = 0;
    *(_BYTE *)(v10 + 42) = 0;
    *(_QWORD *)v10 = v6;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)(v10 + 16) = v6;
    *(_WORD *)(v10 + 24) = 0;
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_hint<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
      v5,
      (unsigned int)&v12,
      (_DWORD)v7,
      v10 + 32,
      v10);
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
