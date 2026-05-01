/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18005D300
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18005B618 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18005D258 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1802DEB90 (-AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1802DF5B0 (-RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005EEA8 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802CD0DC (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802CD0DC.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CD720 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CD74C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1802D1DC8 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1802D1EF0 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e49cfaad752a3bee6aa14298cd2c931___ @ 0x1802DCA00 (Windows--Internal--ComTaskPool--QueueTask__lambda_5e49cfaad752a3bee6aa14298cd2c931___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d5a2e35645378a0caf28c8561966fc73___ @ 0x1802DCA90 (Windows--Internal--ComTaskPool--QueueTask__lambda_d5a2e35645378a0caf28c8561966fc73___.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  int v2; // eax
  HWND v3; // rsi
  bool v4; // cl
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  DWORD dwProcessId; // [rsp+20h] [rbp-2C8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-2C0h] BYREF
  WindowWrapperBase *v16; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-2B0h] BYREF
  void **v18; // [rsp+40h] [rbp-2A8h] BYREF
  DWORD v19; // [rsp+48h] [rbp-2A0h]
  _QWORD v20[40]; // [rsp+50h] [rbp-298h] BYREF
  _QWORD v21[40]; // [rsp+190h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v2 = (*(__int64 (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 136LL))(this);
  v3 = (HWND)*((int *)this + 76);
  v4 = (unsigned int)(v2 - 3) <= 2;
  v5 = *((_DWORD *)this + 47);
  if ( (v5 & 1) != 0 && *((_DWORD *)this + 76) && v4 )
  {
    if ( (v5 & 2) == 0 )
    {
      v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v21);
      v21[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v21,
        v6);
      if ( !GetWindowThreadProcessId(v3, &dwProcessId) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB17,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)0x80070578LL,
          dwProcessId);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v15,
        (__int64)this);
      v16 = this;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v17,
        v15);
      v18 = (void **)v3;
      v19 = dwProcessId;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v20);
      v20[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_5e49cfaad752a3bee6aa14298cd2c931___(
             v8,
             v7,
             *((unsigned int *)this + 64),
             &v16);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB2D,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v9,
          dwProcessId);
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v20);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      *((_DWORD *)this + 47) |= 2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v21);
    }
  }
  else if ( (v5 & 2) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v21);
    v21[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
      (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v21,
      v10);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v15,
      (__int64)this);
    v16 = this;
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v17,
      v15);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v18);
    v18 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_d5a2e35645378a0caf28c8561966fc73___(
            v12,
            v11,
            *((unsigned int *)this + 64),
            &v16);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB44,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v13,
        dwProcessId);
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    *((_DWORD *)this + 47) &= ~2u;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v21);
  }
}
