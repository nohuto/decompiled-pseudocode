/*
 * XREFs of ??$_Insert_nohint@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@_NAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x18028AD44
 * Callers:
 *     ?CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@6@PEAPEAUIViewGroup@@@Z @ 0x18028B250 (-CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@.c)
 *     ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180295E60 (-AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEAV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@1@Z @ 0x18028ABD0 (--$_Insert_at@AEAV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tree_.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Insert_nohint<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  char v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  int v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = v9;
    if ( *a4 >= *(_QWORD *)(v9 + 32) )
    {
      v10 = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = 1;
      v9 = *(_QWORD *)v9;
    }
  }
  try
  {
    v11 = v8;
    if ( v10 )
    {
      if ( v8 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::_Insert_at<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,void *> *>(
                           a1,
                           &v19,
                           1,
                           (_QWORD *)v8,
                           v18,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v11 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          v15 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v15 + 25) )
          {
            v16 = v8;
            do
            {
              if ( v16 != *(_QWORD *)v15 )
                break;
              v11 = v15;
              v15 = *(_QWORD *)(v15 + 8);
              v16 = v11;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
          if ( !*(_BYTE *)(v11 + 25) )
            v11 = v15;
        }
        else
        {
          do
          {
            v11 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
    }
    if ( *(_QWORD *)(v11 + 32) >= *a4 )
    {
      v17 = a5;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a5 + 4);
      std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x28);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::_Insert_at<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,void *> *>(
                         a1,
                         &v19,
                         v10,
                         (_QWORD *)v8,
                         v18,
                         (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Destroy_if_node(
      v12,
      a5);
    throw;
  }
  return result;
}
