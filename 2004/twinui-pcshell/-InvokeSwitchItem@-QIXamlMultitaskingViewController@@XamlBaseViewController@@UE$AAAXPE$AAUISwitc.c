/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180326160
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800FA6C0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180320758 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EBB4C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EC570 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform@@XZ @ 0x1802EF068 (-get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___ @ 0x1803234E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::_lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x180324430 (_lambda_152963d5211cf6149a80abe334e76dfa_--_lambda_152963d5211cf6149a80abe334e76dfa_.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x180324CA4 (_lambda_152963d5211cf6149a80abe334e76dfa_--__lambda_152963d5211cf6149a80abe334e76dfa_.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180325FC8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemGroupingState@3456@XZ @ 0x180328F54 (-get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA-AW4SwitchIt.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64, __int64 *); // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  IUnknown *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, __int64, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  __int64 v19[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::GroupingState::get(a2) == 2 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
    v18 = v5;
    v6 = __abi_winrt_cast_to(1, v5, (__int64)&_uuidof__AVShellTab_Tabs_ComposableShell_Internal_Windows__);
    v17 = v6;
    __abi_winrt_ptr_assign(&v21, v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
    v4 = v21;
    if ( v21 )
    {
      v7 = *(_QWORD *)(a1 + 88);
      v8 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 24LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v20);
      v9 = Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
      v18 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v9;
      v8(v7, v9, &v20);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v20);
    XamlBaseViewController::GetAppViewFromSwitchItem(v10, a2, &v20);
  }
  if ( v20 )
  {
    v11 = *(IUnknown **)(a1 + 56);
    v17 = (__int64)v11;
    if ( v11 )
      ((void (__fastcall *)(IUnknown *))v11->lpVtbl->AddRef)(v11);
    v12 = __abi_winrt_cast_to(
            0,
            *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 96),
            (__int64)&_uuidof__AUITabController_Tabs_ComposableShell_Internal_Windows__);
    v13 = __abi_winrt_ptr_ctor(v12);
    v18 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v13;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CoAllowSetForegroundWindow(v11, 0LL);
    v14 = lambda_152963d5211cf6149a80abe334e76dfa_::_lambda_152963d5211cf6149a80abe334e76dfa_(
            v19,
            &v17,
            &v20,
            (__int64 *)&v18,
            &v21);
    Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___(v15, v14);
    lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_(v19);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
