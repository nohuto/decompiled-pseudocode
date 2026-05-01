/*
 * XREFs of wil::details::lambda_call__lambda_ee10b5a350351a7966fa5a1f56203ffa___::_lambda_call__lambda_ee10b5a350351a7966fa5a1f56203ffa___ @ 0x180274704
 * Callers:
 *     _ViewGroup::AddView_::_1_::dtor$1 @ 0x180274D7F (_ViewGroup--AddView_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@@Z @ 0x1802775E4 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_ee10b5a350351a7966fa5a1f56203ffa___::_lambda_call__lambda_ee10b5a350351a7966fa5a1f56203ffa___(
        __int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::erase(
             *(_QWORD *)a1 + 184LL,
             &v2,
             **(_QWORD **)(a1 + 8));
  }
  return result;
}
