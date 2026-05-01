/*
 * XREFs of ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18028FB64
 * Callers:
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18028EA0C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18028FA20 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800713B8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AB64C (--$query@UITabDragHandler@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AB698 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180179C58 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18017BD24 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180268FC8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026A23C (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026E408 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180278A64 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18027E928 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18027E928.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_e0ff0c218d6e4b12793471debe4cf99e___ @ 0x18028D418 (ShellPositionerHelpers--PerformCallbackOnView__lambda_e0ff0c218d6e4b12793471debe4cf99e___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_476f18e24aa1fbee26857ac5b809e782___ @ 0x18028D638 (Windows--Internal--ComTaskPool--QueueTask__lambda_476f18e24aa1fbee26857ac5b809e782___.c)
 *     ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x18028D6C0 (--$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z.c)
 *     ?ResetTransferState@TabTransferManager@@AEAAXXZ @ 0x1802907B8 (-ResetTransferState@TabTransferManager@@AEAAXXZ.c)
 *     ?StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180290F1C (-StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TabTransferManager::PerformComplete(TabTransferManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *, __int64 **); // rbx
  int v4; // eax
  struct IApplicationView *v5; // rdx
  __int64 v6; // rax
  bool v7; // r14
  __int64 (__fastcall ***v8)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 CoreWindowForView; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *, __int64 *); // rdi
  int v17; // eax
  char v18; // bl
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 (__fastcall ***v22)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  void *v23; // rbx
  int v24; // eax
  __int64 *v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  const char *v33; // r9
  __int64 *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // edx
  __int64 *v38; // [rsp+38h] [rbp-D0h] BYREF
  void *v39; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v43[3]; // [rsp+70h] [rbp-98h] BYREF
  int v44[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+98h] [rbp-70h]
  void *v46; // [rsp+A0h] [rbp-68h]
  __int128 v47; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v48[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v48,
    (__int64)"TabViewManager_TabTransferCompleted");
  v48[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::`vftable';
  *(_OWORD *)&v41[1] = *((_OWORD *)this + 12);
  TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted *)v48,
    (struct _GUID *)&v41[1]);
  LODWORD(v40) = 64;
  TabViewManagerTraceLogging::TabTransferManager_SetTransferState<unsigned int>((unsigned int *)&v40);
  *((_DWORD *)this + 71) |= 0x40u;
  v38 = 0LL;
  v2 = *((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 **))(*(_QWORD *)v2 + 96LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v38);
  *(_OWORD *)&v41[1] = *((_OWORD *)this + 12);
  v4 = v3(v2, &v41[1], &v38);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      560LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !v38 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      562LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v6 = *((_QWORD *)this + 28) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)this + 29) - *(_QWORD *)GUID_NULL.Data4;
  v7 = v6 == 0;
  v8 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 32);
  if ( v8 )
  {
    if ( *((_BYTE *)this + 252) )
    {
      CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(v8, v5);
      if ( CoreWindowForView )
      {
        if ( *((_BYTE *)this + 253) || (*((_DWORD *)this + 71) & 0x100) != 0 )
        {
          v10 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
                  &v41[1],
                  (__int64)this);
          v11 = *v10;
          *v10 = 0LL;
          *(_QWORD *)v44 = v11;
          wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v44[2],
            (__int64)v38);
          v45 = CoreWindowForView;
          v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_476f18e24aa1fbee26857ac5b809e782___(
                  v13,
                  v12,
                  *((_DWORD *)this + 28),
                  (__int64 *)v44);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44[2]);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v44);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41[1]);
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              585LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
              (const char *)(unsigned int)v14);
            __debugbreak();
          }
        }
      }
    }
  }
  if ( (*((_BYTE *)this + 284) & 2) != 0 )
  {
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
      (struct IWeakReference **)this + 8,
      (void **)&v41[1]);
    v40 = 0LL;
    v15 = v41[1];
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v41[1] + 24LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v40);
    v17 = v16(v15, v38, &v40);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        594LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    if ( !*((_BYTE *)this + 254) || !*((_BYTE *)this + 252) || v40 )
      goto LABEL_29;
    v18 = 1;
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabDragHandler>(
      (struct IWeakReference **)this + 8,
      &v39);
    (*(void (__fastcall **)(void *, __int64 *, _QWORD))(*(_QWORD *)v39 + 24LL))(v39, v38, *((_QWORD *)this + 32));
    v47 = 0LL;
    v19 = (__int64 *)*((_QWORD *)this + 10);
    v20 = *v19;
    *(_OWORD *)&v43[1] = *((_OWORD *)this + 13);
    *(_OWORD *)v44 = *((_OWORD *)this + 12);
    v21 = (*(__int64 (__fastcall **)(__int64 *, int *, _QWORD *, __int128 *))(v20 + 192))(v19, v44, &v43[1], &v47);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        602LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
    while ( *((_BYTE *)this + 252) )
    {
      if ( v18 )
        break;
      v22 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 33);
      if ( v22 != *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 34) )
        break;
      TryGetApplicationViewTabManager(&v39, v22, "NotifyGroupChanged");
      v23 = v39;
      if ( !v39 )
        goto LABEL_35;
      CRPCTimeout::CRPCTimeout((CRPCTimeout *)v44, 0);
      v46 = v23;
      v24 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v23 + 48LL))(v23);
      if ( v24 >= 0 )
        goto LABEL_34;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        627LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v24);
LABEL_29:
      v18 = 0;
      v25 = (__int64 *)*((_QWORD *)this + 10);
      if ( v7 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(*v25 + 88))(v25, v38, 0LL);
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            607LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
            (const char *)(unsigned int)v26);
          __debugbreak();
        }
      }
      else
      {
        *(_OWORD *)v44 = 0LL;
        v27 = *v25;
        *(_OWORD *)&v43[1] = *((_OWORD *)this + 14);
        v47 = *((_OWORD *)this + 12);
        v28 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD *, _QWORD, int *))(v27 + 200))(
                v25,
                &v47,
                &v43[1],
                *((unsigned int *)this + 60),
                v44);
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            612LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
            (const char *)(unsigned int)v28);
LABEL_34:
          CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v44);
          v23 = v39;
LABEL_35:
          if ( v23 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
          break;
        }
      }
    }
    if ( v7 )
    {
      v29 = *((_QWORD *)this + 33);
      if ( v29 )
      {
        v39 = this;
        v30 = ShellPositionerHelpers::PerformCallbackOnView__lambda_e0ff0c218d6e4b12793471debe4cf99e___(
                *((IUnknown **)this + 12),
                v29,
                &v39);
        if ( v30 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            652LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
            (const char *)(unsigned int)v30);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41[1]);
  }
  TabTransferManager::ResetTransferState(this);
  v41[0] = 0LL;
  v31 = *v38;
  v41[0] = 0LL;
  v32 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v31 + 168))(v38, v41);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      660LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v32);
    __debugbreak();
  }
  if ( !v41[0] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      661LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      v33);
    __debugbreak();
  }
  v42 = 0LL;
  v34 = (__int64 *)*((_QWORD *)this + 10);
  v35 = *v34;
  v42 = 0LL;
  v36 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(v35 + 144))(v34, v41[0], v38, &v42);
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      663LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v36);
    __debugbreak();
  }
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v48, v37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v41);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v38);
  v48[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v48);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v48);
}
