/*
 * XREFs of ??$_Buynode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@std@@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@2@@?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU01@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x180434CBC
 * Callers:
 *     ?UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180436D9C (-UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafet.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>::_Buynode<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>,IWinRTApplicationView * &,std::shared_ptr<UwpAppViewInfo> &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax

  v6 = a2;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v7 + 4,
    *a3);
  v7[5] = 0LL;
  v7[6] = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = a2;
  }
  v7[5] = *a4;
  v7[6] = a4[1];
  *v7 = v6;
  v7[1] = v6;
  v7[2] = v6;
  *((_WORD *)v7 + 12) = 0;
  return v7;
}
