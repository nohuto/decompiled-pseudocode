/*
 * XREFs of ?TabTransferReceived@TabTransferManager@@UEAAJUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9021e371823eada98c7d436cf04d8c07_____lambda_9021e371823eada98c7d436cf04d8c07___ @ 0x18026B240 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9021e371823ea.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall TabTransferManager::TabTransferReceived(__int64 a1, __int128 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v14,
         a1);
  v15 = a1;
  v5 = *v4;
  *v4 = 0LL;
  v16 = v5;
  v17 = *a2;
  v6 = *(_DWORD *)(a1 + 112);
  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9021e371823eada98c7d436cf04d8c07_____lambda_9021e371823eada98c7d436cf04d8c07___(
         &v13,
         (__int64)&v15);
  v9 = *v7;
  *v7 = 0LL;
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v10,
      v8);
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      317LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}
