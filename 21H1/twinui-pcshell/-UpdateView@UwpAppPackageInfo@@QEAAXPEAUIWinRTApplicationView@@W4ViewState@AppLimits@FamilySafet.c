/*
 * XREFs of ?UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180436D9C
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180436A50 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     ??$_Buynode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@std@@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@2@@?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU01@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x180434CBC (--$_Buynode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exc.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x180435454 (--$_Insert_nohint@AEAU-$pair@$$CBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpAppPackageInfo::UpdateView(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-20h]
  char v12[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = (__int64 *)(a1 + 32);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v13,
    a2);
  v5 = *v4;
  v6 = *(_QWORD *)(*v4 + 8);
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *(_QWORD *)(v6 + 32) >= v13 )
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  if ( v5 == *v4 || v13 < *(_QWORD *)(v5 + 32) )
    v5 = *v4;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  if ( v5 == *v4 )
  {
    v7 = (std::_Ref_count_base *)operator new(0x18uLL);
    v13 = (unsigned __int64)v7;
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<Win32AppViewInfo>::`vftable';
    *((_DWORD *)v7 + 4) = a3;
    v10 = (_DWORD *)((char *)v7 + 16);
    v11 = v7;
    v8 = std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>::_Buynode<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>,IWinRTApplicationView * &,std::shared_ptr<UwpAppViewInfo> &>(
           (__int64)v4,
           *v4,
           &v14,
           &v10);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>::_Insert_nohint<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>> &,std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *> *>(
      v4,
      (__int64)v12,
      v9,
      v8 + 4,
      (__int64)v8);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  else
  {
    **(_DWORD **)(v5 + 40) = a3;
  }
}
