/*
 * XREFs of ??R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ @ 0x18022ADAC
 * Callers:
 *     ??1?$ScopeExitFn@V_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@@details@wil@@QEAA@XZ @ 0x18022A70C (--1-$ScopeExitFn@V_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@@details@wil@@QEAA@XZ.c)
 *     ?AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z @ 0x18022B4C0 (-AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180231FCC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180234234 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 */

void __fastcall _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rax
  _DWORD *Ptr; // r10
  __int64 v5; // r11
  __int64 *v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 + 2;
  AcquireSRWLockExclusive(v2);
  v3 = a1[1];
  if ( *(_DWORD *)v3->Ptr )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
      &(*a1)[5],
      &v7,
      v3->Ptr);
    if ( v7 != *(_QWORD *)(v5 + 40) )
    {
      v6 = (__int64 *)std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
                        v5 + 40,
                        v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v6 + 5);
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x30);
      Ptr = a1[1]->Ptr;
    }
    *Ptr = 0;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
