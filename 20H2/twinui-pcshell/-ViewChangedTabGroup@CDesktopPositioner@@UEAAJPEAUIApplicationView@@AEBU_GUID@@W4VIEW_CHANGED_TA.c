/*
 * XREFs of ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TAB_GROUP_FLAGS@@@Z @ 0x1803EE4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18003EEBC (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BD778 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802537FC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803EB4C4 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 */

__int64 __fastcall CDesktopPositioner::ViewChangedTabGroup(__int64 a1, struct IApplicationView *a2, __int64 a3, int a4)
{
  CDesktopPositioner *v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // r14d
  struct IViewGroup *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rbx
  int updated; // ebx
  __int64 v19; // rdx
  int v21; // eax
  struct IViewGroup *v22; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v23; // [rsp+38h] [rbp-28h] BYREF
  int v24; // [rsp+40h] [rbp-20h]
  __int128 v25; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v24 = a4;
  *(_QWORD *)&v25 = a3;
  v6 = (CDesktopPositioner *)(a1 - 128);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 56) & -(__int64)(a1 != 128));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v9 = **(struct IViewGroup ***)(a1 + 208);
  v22 = v9;
  while ( v9 != *(struct IViewGroup **)(a1 + 208) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)v9 + 6) + 64LL))(
           *((_QWORD *)v9 + 6),
           a2) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)v9 + 6) + 32LL))(
              *((_QWORD *)v9 + 6),
              a2,
              1LL);
      if ( v13 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 6) + 72LL))(*((_QWORD *)v9 + 6)) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 200) + 32LL))(
                  *(_QWORD *)(a1 + 200),
                  *((_QWORD *)v9 + 6));
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1C9,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v14);
          v17 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
                  (_QWORD *)(a1 + 208),
                  (__int64)v9,
                  v15,
                  v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17 + 6);
          std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x38);
          break;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C7,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v13);
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v22,
      v10,
      v11,
      v12);
    v9 = v22;
  }
  v23 = 0LL;
  v22 = 0LL;
  v25 = *(_OWORD *)v25;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  updated = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
              v6,
              a2,
              (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v25,
              &v22,
              (struct IApplicationView **)&v23);
  if ( updated < 0 )
  {
    v19 = 467LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)updated);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    if ( v8 >= 0 )
      LeaveCriticalSection(v7);
    return (unsigned int)updated;
  }
  if ( (v24 & 1) == 0 )
  {
    if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v23) )
    {
      v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v21);
    }
  }
  updated = CDesktopPositioner::_UpdateViewTabState(v6, a2);
  if ( updated < 0 )
  {
    v19 = 476LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
