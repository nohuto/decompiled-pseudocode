/*
 * XREFs of ?DragEnterForApplicationManagedTab@TabTransferManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x18028E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70c1c60e35f2cf7099057459f26c5cae_____lambda_70c1c60e35f2cf7099057459f26c5cae___ @ 0x18028C550 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_70c1c60e35f2c.c)
 */

__int64 __fastcall TabTransferManager::DragEnterForApplicationManagedTab(
        TabTransferManager *this,
        struct IInspectable *a2,
        struct IApplicationView *a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edi
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  TabTransferManager *v18; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v17,
         (__int64)a3);
  v5 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v23,
         (__int64)this);
  v18 = this;
  v6 = *v5;
  *v5 = 0LL;
  v19 = v6;
  v7 = *v4;
  *v4 = 0LL;
  v20 = v7;
  v8 = *((_DWORD *)this + 28);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70c1c60e35f2cf7099057459f26c5cae_____lambda_70c1c60e35f2cf7099057459f26c5cae___(
         &v22,
         &v18);
  v11 = *v9;
  *v9 = 0LL;
  v12 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v12,
      v10);
  }
  v13 = SHTaskPoolQueueTask(3LL, 2LL, v8);
  try
  {
    v14 = v13;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        222LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v15);
  }
  return result;
}
