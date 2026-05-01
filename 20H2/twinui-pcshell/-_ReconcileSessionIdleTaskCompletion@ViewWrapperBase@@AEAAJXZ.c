/*
 * XREFs of ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802D27D4
 * Callers:
 *     ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1802CD7D0 (-AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802CFB14 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1802D00F0 (-RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802D2510 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x1802D26C0 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800794E4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9___::CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9_____lambda_510cad20d9eb6c2bd86c1fc700d863e9___ @ 0x1802CAC70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02_____lambda_bb8876069d118ed8c7de1f7a35d44c02___ @ 0x1802CACE8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___--CTaskW.c)
 *     ??$?0VViewWrapperBase@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase@@@Z @ 0x1802CAD64 (--$-0VViewWrapperBase@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802CC7EC (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802CC7EC.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CCE30 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CCE5C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1802D14D8 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1802D1600 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

__int64 __fastcall ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ebx
  void **v6; // rbx
  unsigned int v7; // ebx
  void *v8; // rax
  __int64 v9; // rsi
  int v11; // edx
  unsigned int v12; // esi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int v15; // esi
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-C8h] BYREF
  ViewWrapperBase *v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  void **v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  _QWORD v22[40]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v23[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v2 = (*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 128LL))(this);
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) != 0 && *((_QWORD *)this + 34) && (unsigned int)(v2 - 3) <= 2 )
  {
    if ( (v3 & 2) == 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v23,
        (__int64)"AddSessionIdleTaskCompletion");
      v4 = *((_DWORD *)this + 37);
      v23[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v23,
        v4);
      if ( !GetWindowThreadProcessId(*((HWND *)this + 34), dwProcessId) )
      {
        v5 = -2147023496;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C3,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)0x80070578LL);
LABEL_13:
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v23);
        return (unsigned int)v5;
      }
      v6 = (void **)*((_QWORD *)this + 34);
      Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(&v16, (__int64)this);
      v19 = v16;
      v18 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      LODWORD(v21) = dwProcessId[0];
      v20 = v6;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v22,
        (__int64)v23);
      v7 = *((_DWORD *)this + 36);
      v22[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      v8 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = 0LL;
      if ( v8 )
        v9 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02_____lambda_bb8876069d118ed8c7de1f7a35d44c02___(
               (__int64)v8,
               (__int64)&v18);
      v5 = SHTaskPoolQueueTask(3LL, 2LL, v7);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D9,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v5);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_13;
      }
      *((_DWORD *)this + 24) |= 2u;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v23);
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v23,
      (__int64)"RemoveSessionIdleTaskCompletion");
    v11 = *((_DWORD *)this + 37);
    v23[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
      (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v23,
      v11);
    Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(&v16, (__int64)this);
    v19 = v16;
    v18 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v20,
      (__int64)v23);
    v12 = *((_DWORD *)this + 36);
    v20 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    v13 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 0LL;
    if ( v13 )
      v14 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9___::CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9_____lambda_510cad20d9eb6c2bd86c1fc700d863e9___(
              v13,
              &v18);
    v15 = SHTaskPoolQueueTask(3LL, 2LL, v12);
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v23);
      return (unsigned int)v15;
    }
    *((_DWORD *)this + 24) &= ~2u;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v23);
  }
  return 0LL;
}
