/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180300AFC
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800D67B0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180300508 (CreationThreadDispatcher--RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180300900 (_lambda_beeaa99da247ec9f188a411312d86a25_--__lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v3 = __abi_winrt_ptr_ctor(a2);
  v4 = __abi_winrt_ptr_ctor(a1);
  v9 = __abi_winrt_ptr_ctor(v4);
  v10 = __abi_winrt_ptr_ctor(v3);
  v11 = __abi_winrt_ptr_ctor(a1);
  v5 = *(_QWORD *)(a1 + 88);
  v8[0] = __abi_winrt_ptr_ctor(v9);
  v8[1] = __abi_winrt_ptr_ctor(v10);
  v8[2] = __abi_winrt_ptr_ctor(v11);
  v6 = CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___(v5, (volatile int *)v8);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      41LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v6);
  result = lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(&v9);
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
