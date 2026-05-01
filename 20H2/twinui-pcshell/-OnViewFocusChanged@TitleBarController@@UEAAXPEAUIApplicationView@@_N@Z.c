/*
 * XREFs of ?OnViewFocusChanged@TitleBarController@@UEAAXPEAUIApplicationView@@_N@Z @ 0x1802875B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180071530.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2f5ba80620eaa3e32c23738988a6a60f___ @ 0x180284AB0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2f5ba80620eaa3e32c23738988a6a60f___.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x180285370 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 */

void __fastcall TitleBarController::OnViewFocusChanged(TitleBarController *this, struct IApplicationView *a2, char a3)
{
  int v5; // esi
  HWND ForegroundWindow; // r9
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+38h] [rbp-8h]
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF
  struct IUnknown *v17; // [rsp+78h] [rbp+38h] BYREF

  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IUnknown **))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v17);
  if ( v17 )
  {
    if ( a3 )
      goto LABEL_9;
    AcquireSRWLockShared((PSRWLOCK)this + 9);
    v5 = SHIsSameObject(v17, *((struct IUnknown **)this + 26));
    if ( this != (TitleBarController *)-72LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 9);
    if ( !v5
      || (ForegroundWindow = GetForegroundWindow()) != 0LL
      && ((*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 17) + 104LL))(
            *((_QWORD *)this + 17),
            (unsigned int)ForegroundWindow,
            &v16) < 0
       || !(_BYTE)v16) )
    {
LABEL_9:
      v7 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
             &v16,
             (__int64)this - 8);
      v12 = v8;
      v9 = *v7;
      *v7 = 0LL;
      v13 = v9;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v14,
        (__int64)v17);
      v15 = a3;
      Windows::Internal::ComTaskPool::QueueTask__lambda_2f5ba80620eaa3e32c23738988a6a60f___(
        v11,
        v10,
        *((_DWORD *)this + 50),
        (__int64)&v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v13);
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v16);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
}
