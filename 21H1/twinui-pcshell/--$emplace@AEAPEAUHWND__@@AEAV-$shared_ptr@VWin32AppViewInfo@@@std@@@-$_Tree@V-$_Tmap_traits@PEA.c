/*
 * XREFs of ??$emplace@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x1804380A8
 * Callers:
 *     ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18043A918 (-UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x18042A540 (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAU-$_Tre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::emplace<HWND__ * &,std::shared_ptr<Win32AppViewInfo> &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 v12; // [rsp+60h] [rbp+8h]

  v8 = *a1;
  v12 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v9[4] = *a3;
  v9[5] = 0LL;
  v9[6] = 0LL;
  v10 = a4[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v8 = v12;
  }
  v9[5] = *a4;
  v9[6] = a4[1];
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Insert_nohint<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>> &,std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *> *>(
    a1,
    a2,
    (__int64)v9,
    v9 + 4,
    (std::_Ref_count_base **)v9);
  return a2;
}
