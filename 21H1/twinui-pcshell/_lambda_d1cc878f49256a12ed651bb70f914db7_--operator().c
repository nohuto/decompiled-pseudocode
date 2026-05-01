/*
 * XREFs of _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802CEB80
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1802CE540 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--_ScopeExitFn__lambda_d1cc.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x1802CE724 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--ThreadData--_.c)
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x1802CE8AC (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x1802CED74 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--_ea_1802CED74.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802CEFEC (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@V10@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802CDDB8 (--$remove@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHa.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1802CE218 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1802D2320 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-49h] BYREF
  __int64 v17; // [rsp+30h] [rbp-39h]
  _QWORD v18[3]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v21[64]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+67h] BYREF
  struct _Mtx_internal_imp_t *v23; // [rsp+D8h] [rbp+6Fh]
  _QWORD *v24; // [rsp+E0h] [rbp+77h]

  v2 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__,
         a1 + 2);
  v22 = v2;
  v3 = __abi_winrt_ptr_ctor(v2);
  v22 = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v3 )
  {
    v4 = (struct _Mtx_internal_imp_t *)(*a1 + 104LL);
    v23 = v4;
    v5 = _Mtx_lock(v4);
    if ( v5 )
      std::_Throw_C_error(v5);
    v6 = (_QWORD *)(*a1 + 184LL);
    v24 = v19;
    v7 = v6[4] + v6[3];
    *((_QWORD *)&v16 + 1) = 0LL;
    v17 = v7;
    *(_QWORD *)&v16 = *v6;
    v8 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
           v19,
           (__int64)&v16);
    v9 = v6[3];
    v10 = v9 + v6[4];
    v18[1] = 0LL;
    v18[2] = v10;
    v11 = *v6;
    v18[0] = *v6;
    v16 = 0LL;
    v17 = v9;
    v12 = 0LL;
    if ( v6 )
      v12 = v11;
    *(_QWORD *)&v16 = v12;
    v13 = std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
            (__int64)v21,
            (__int64 **)&v16,
            (__int64)v18,
            &v22);
    v14 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
            v20,
            v13);
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
      v6,
      &v16,
      v14,
      v8);
    v15 = _Mtx_unlock(v4);
    if ( v15 )
      std::_Throw_C_error(v15);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
