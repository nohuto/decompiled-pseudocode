/*
 * XREFs of ?OnTabDropped@TabTransferManager@@AEAAJPEAUIInspectable@@PEAUITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fa5311f677dfb1ca9719d5bf83446d7_____lambda_6fa5311f677dfb1ca9719d5bf83446d7___ @ 0x18026B120 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fa5311f677df.c)
 */

__int64 __fastcall TabTransferManager::OnTabDropped(
        TabTransferManager *this,
        struct IInspectable *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // edi
  const char *v13; // r9
  __int64 result; // rax
  TabTransferManager *v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs *v17; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs *))(*(_QWORD *)a3 + 8LL))(a3);
    v5 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v20,
           (__int64)this);
    v15 = this;
    v6 = *v5;
    *v5 = 0LL;
    v16 = v6;
    v21 = 0LL;
    v17 = a3;
    v7 = *((_DWORD *)this + 28);
    v8 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fa5311f677dfb1ca9719d5bf83446d7_____lambda_6fa5311f677dfb1ca9719d5bf83446d7___(
           &v19,
           &v15);
    v10 = *v8;
    *v8 = 0LL;
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v11,
        v9);
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v7);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        262LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x109,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v13);
  }
  return result;
}
