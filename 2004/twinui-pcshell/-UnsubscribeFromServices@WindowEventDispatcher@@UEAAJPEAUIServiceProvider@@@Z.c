/*
 * XREFs of ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802BA150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802169EC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1802C91A0 (-Shutdown@ConnectedStandbyHelper@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnsubscribeFromServices(
        WindowEventDispatcher *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  ConnectedStandbyHelper *v5; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IServiceProviderVtbl *v9; // rax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  std::_Ref_count_base *v13[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 23);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    v5 = (ConnectedStandbyHelper *)*((_QWORD *)this + 28);
    if ( v5 )
    {
      ConnectedStandbyHelper::Shutdown(v5);
      *(_OWORD *)v13 = 0LL;
      std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 28, (__int64 *)v13);
      if ( v13[1] )
        std::_Ref_count_base::_Decref(v13[1]);
    }
    if ( *((_DWORD *)this + 85) )
    {
      lpVtbl = a2->lpVtbl;
      v15 = 0LL;
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
             a2,
             &IID_IImmersiveSessionIdleDetector,
             &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
             &v15);
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, *((unsigned int *)this + 85));
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE2,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v8);
        *((_DWORD *)this + 85) = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v7);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    }
    if ( *((_DWORD *)this + 84) )
    {
      v9 = a2->lpVtbl;
      v15 = 0LL;
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v9->QueryService)(
              a2,
              &SID_ImmersiveShellHookService,
              &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
              &v15);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          234LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v10);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, *((unsigned int *)this + 84));
      *((_DWORD *)this + 84) = 0;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    }
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF2,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v11);
  }
  return result;
}
