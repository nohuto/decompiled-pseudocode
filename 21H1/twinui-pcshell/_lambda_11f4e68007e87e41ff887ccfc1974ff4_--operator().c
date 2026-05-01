/*
 * XREFs of _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x18026C008
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::Run @ 0x18026EBF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180070C98 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009D534 (--$query@UITabDragHandler@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801363F8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180155718 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180157904 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180247318 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180256DE4 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18025CC04 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026BEDC (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18026CD7C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18026DD90 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x18026F340 (-StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator()(TabTransferManager **a1)
{
  struct _GUID *v2; // r14
  RTL_SRWLOCK *v3; // rsi
  struct IApplicationView *v4; // rdx
  int CoreWindowForView; // r15d
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  void **v9; // rax
  RTL_SRWLOCK *v10; // rbx
  int v11; // edx
  __int64 v12; // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  TabTransferManager *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  TabTransferManager *v20; // rcx
  __int64 v21; // rax
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24[7]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  struct _GUID v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v2 = (struct _GUID *)(a1 + 5);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"TabViewManager_TabTransferStarted");
  v30[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::`vftable';
  v29 = *v2;
  TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)v30,
    &v29);
  v3 = (RTL_SRWLOCK *)((char *)*a1 + 48);
  AcquireSRWLockExclusive(v3);
  *(_QWORD *)&v29.Data1 = v3;
  if ( *((_DWORD *)*a1 + 71) )
    TabTransferManager::PerformCancel(*a1, 1);
  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a1[8],
                        v4);
  v6 = (*(__int64 (__fastcall **)(TabTransferManager *, _QWORD *))(*(_QWORD *)a1[7] + 48LL))(a1[7], (_QWORD *)*a1 + 26);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 486LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_34;
  }
  v6 = (*(__int64 (__fastcall **)(TabTransferManager *, _QWORD *, struct _GUID *))(*(_QWORD *)a1[4] + 104LL))(
         a1[4],
         (_QWORD *)*a1 + 26,
         v2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 488LL;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(TabTransferManager *, _QWORD *))(*(_QWORD *)a1[4] + 112LL))(a1[4], (_QWORD *)*a1 + 26);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 489LL;
    goto LABEL_9;
  }
  v25 = 0LL;
  v9 = wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabDragHandler>(
         (struct IWeakReference **)*a1 + 8,
         (void **)&v27);
  (*(void (__fastcall **)(void *, TabTransferManager *, unsigned __int64 *))(*(_QWORD *)*v9 + 40LL))(*v9, a1[8], &v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)*a1 + 32,
    (__int64)a1[8]);
  v10 = (RTL_SRWLOCK *)((char *)*a1 + 56);
  AcquireSRWLockExclusive(v10);
  *((struct _GUID *)*a1 + 12) = *v2;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  TabTransferManager::AdvanceTransfer(*a1, 1LL);
  v23 = 0;
  TryGetApplicationViewTabManager(&v26, (HWND)CoreWindowForView, "OnTabTransferStarting");
  v12 = v26;
  if ( v26 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)&v27, 0);
    v28 = v12;
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 96LL))(v12, &v23);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&v27);
    if ( v7 < 0 )
    {
      v13 = (unsigned int)v7;
      v14 = 508LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)v13);
      goto LABEL_32;
    }
    *((_BYTE *)*a1 + 252) = v23 != 0;
    v15 = v25;
    if ( !v23 || v25 <= 1 )
    {
      v23 = 0;
      goto LABEL_25;
    }
    v23 = 1;
    *((_BYTE *)*a1 + 253) = 1;
    v16 = v26;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)&v27, 0);
    v28 = v16;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, TabTransferManager *, char *))(*(_QWORD *)v16 + 80LL))(
           v16,
           0LL,
           a1[2],
           v24);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&v27);
    if ( v7 < 0 )
    {
      v13 = (unsigned int)v7;
      v14 = 518LL;
      goto LABEL_29;
    }
    if ( v24[0] )
    {
      v17 = *a1;
      v18 = *(_QWORD *)*a1;
      v27 = *v2;
      v19 = (*(__int64 (__fastcall **)(TabTransferManager *, struct _GUID *))(v18 + 72))(v17, &v27);
      v7 = v19;
      if ( v19 < 0 )
      {
        v14 = 523LL;
LABEL_28:
        v13 = (unsigned int)v19;
        goto LABEL_29;
      }
    }
  }
  if ( v23 )
    goto LABEL_31;
  v15 = v25;
LABEL_25:
  v20 = *a1;
  if ( v15 <= 1 )
  {
    TabTransferManager::AdvanceTransfer(v20, 2LL);
  }
  else
  {
    v21 = *(_QWORD *)v20;
    v27 = *v2;
    v19 = (*(__int64 (__fastcall **)(TabTransferManager *, struct _GUID *))(v21 + 72))(v20, &v27);
    v7 = v19;
    if ( v19 < 0 )
    {
      v14 = 534LL;
      goto LABEL_28;
    }
  }
LABEL_31:
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v30, v11);
  v7 = 0;
LABEL_32:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_34:
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::~TabViewManager_TabTransferStarted((TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)v30);
  return (unsigned int)v7;
}
