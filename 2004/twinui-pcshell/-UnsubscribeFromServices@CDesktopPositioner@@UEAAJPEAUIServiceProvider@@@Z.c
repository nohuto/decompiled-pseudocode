/*
 * XREFs of ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803EEB70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1803E9514 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Inte.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::UnsubscribeFromServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  char *v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+28h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_DWORD *)this + 86) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 104LL))(*((_QWORD *)this + 29));
    *((_DWORD *)this + 86) = 0;
  }
  if ( *((_DWORD *)this + 87) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 80LL))(*((_QWORD *)this + 30));
    *((_DWORD *)this + 87) = 0;
  }
  if ( *((_DWORD *)this + 89) )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(
           *((_QWORD *)this + 25),
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v19);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 203LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      return v4;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, *((unsigned int *)this + 89));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 204LL;
      goto LABEL_10;
    }
    *((_DWORD *)this + 89) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 1LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v10 = (char *)this + 296;
    v11 = (__int64 *)*((_QWORD *)this + 37);
    v12 = *v11;
    v19 = *v11;
    while ( (__int64 *)v12 != v11 )
    {
      v20 = *(_OWORD *)(v12 + 32);
      v13 = *(_QWORD *)(v12 + 48);
      v21 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 36) + 32LL))(*((_QWORD *)this + 36), v13);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDA,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        &v19,
        v15,
        v16,
        v17);
      v12 = v19;
    }
    v18 = *(_QWORD **)v10;
    std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>(
      (__int64)this + 296,
      (__int64)this + 296,
      *(_QWORD *)(*(_QWORD *)v10 + 8LL));
    v18[1] = v18;
    *v18 = v18;
    v18[2] = v18;
    *((_QWORD *)this + 38) = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 25);
  return 0LL;
}
