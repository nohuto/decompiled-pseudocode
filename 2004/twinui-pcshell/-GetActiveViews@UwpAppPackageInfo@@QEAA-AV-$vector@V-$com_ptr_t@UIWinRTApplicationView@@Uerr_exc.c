/*
 * XREFs of ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1804599EC
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BB110 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1802678FC (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpAppPackageInfo::GetActiveViews(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbx
  __int64 *v5; // r8
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v3 = *(__int64 **)(a1 + 32);
  v4 = (__int64 *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4 + 4;
    if ( *(_DWORD *)v4[5] != 1 )
    {
      if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(a2 + 8) )
      {
        std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const &>(
          (__int64 **)a2,
          *(__int64 **)(a2 + 8),
          v5);
      }
      else
      {
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          *(_QWORD **)(a2 + 8),
          *v5);
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v6 = (__int64 **)v4[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  return a2;
}
