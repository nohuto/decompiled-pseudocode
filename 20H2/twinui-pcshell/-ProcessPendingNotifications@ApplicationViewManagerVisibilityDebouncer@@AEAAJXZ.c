/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18019146C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x180191450 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180022D50 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801849B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1801849B0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180184D20 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x1801908EC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180190AB0 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180190C50 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18019105C (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801911BC (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18019141C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180191888 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rdi
  ULONGLONG TickCount64; // r14
  volatile int *v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  ApplicationViewManagerVisibilityDebouncer *v13; // [rsp+30h] [rbp-29h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v14; // [rsp+38h] [rbp-21h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+48h] [rbp-11h]
  __int64 v17; // [rsp+50h] [rbp-9h]
  int v18; // [rsp+58h] [rbp-1h] BYREF
  __int64 v19; // [rsp+60h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+Fh]
  struct IApplicationView *v21; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+1Fh]
  __int64 v23; // [rsp+80h] [rbp+27h] BYREF
  __int64 v24; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct IObjectArray *v26; // [rsp+C0h] [rbp+67h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v27; // [rsp+C8h] [rbp+6Fh] BYREF

  v26 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 15, &v26);
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_23;
  v2 = v26;
  while ( 1 )
  {
    TickCount64 = GetTickCount64();
    ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
      (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v21,
      *((const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification **)this + 9));
    if ( v22 == 1 )
      break;
LABEL_6:
    v13 = (ApplicationViewManagerVisibilityDebouncer *)v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    LODWORD(v14) = 0;
    v5 = ((__int64 (__fastcall *)(struct IObjectArray *, ApplicationViewManagerVisibilityDebouncer **))v2->lpVtbl->GetCount)(
           v2,
           &v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v5);
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
      (__int64)&v15,
      (__int64)&v13,
      0);
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v13,
      (int)v14);
    while ( v15 != v18 || v17 != v20 )
    {
      v6 = v16;
      v27 = (ApplicationViewManagerVisibilityDebouncer *)v16;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(
        v6,
        v21,
        v22,
        v23);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v15;
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v15);
    }
    v7 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      (char *)this + 72,
      0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_23;
  }
  if ( TickCount64 >= v24 + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((RTL_SRWLOCK *)this, (struct IUnknown *)v21);
    goto LABEL_6;
  }
  if ( *((_QWORD *)this + 22) )
  {
LABEL_22:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_23:
    v11 = 0;
    goto LABEL_24;
  }
  v9 = v24 - TickCount64;
  v27 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
    (__int64)this,
    v4);
  v13 = this;
  v14 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  v11 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
          v10,
          (unsigned int)(v9 + 50),
          (__int64)this + 176,
          &v13);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v14);
  if ( v11 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v27);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  return (unsigned int)v11;
}
