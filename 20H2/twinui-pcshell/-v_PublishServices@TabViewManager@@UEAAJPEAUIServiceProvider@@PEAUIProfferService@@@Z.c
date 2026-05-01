/*
 * XREFs of ?v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802813B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007C198 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU23456@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU34567@@Z @ 0x18026209C (--$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableSh.c)
 *     ??$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Z @ 0x180263FEC (--$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180280564 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::v_PublishServices(
        TabViewManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  int v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-D8h] BYREF
  char *v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+78h] [rbp-88h]
  _OWORD v16[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  __int128 v19; // [rsp+D0h] [rbp-30h]
  __int64 *v20; // [rsp+E0h] [rbp-20h]
  __int64 v21; // [rsp+E8h] [rbp-18h]
  __int128 v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  *(_QWORD *)v10 = a2;
  TabViewManagerTraceLogging::WatchCurrentThread((wil::ActivityThreadWatcher *)v13, "TabViewManager_v_PublishServices");
  v11 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TabAppPolicySettings,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,IServiceProvider * &>(
         &v11,
         (__int64 *)v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28A,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_8;
  }
  *(_QWORD *)v10 = 0LL;
  v6 = (char *)this - 48;
  if ( this != (TabViewManager *)48 )
    v6 = (char *)this + 112;
  v12 = v6;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<BrokeredViewTabConverterImpl,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(
         (BrokeredViewTabConverterImpl **)v10,
         (__int64 *)&v12);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 653LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
LABEL_8:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    if ( v15 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
    goto LABEL_15;
  }
  v16[0] = xmmword_180536518;
  v16[1] = 0LL;
  v16[2] = xmmword_180536528;
  v17 = *(_QWORD *)v10;
  v18 = 0LL;
  v19 = xmmword_180536538;
  v20 = v11;
  v21 = 0LL;
  v22 = xmmword_1805364F8;
  v23 = *((_QWORD *)this + 164);
  v24 = 0LL;
  v7 = CImmersiveShellComponent::RegisterServiceInformation(
         this,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v16,
         4LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 662LL;
    goto LABEL_7;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
  v5 = 0;
LABEL_15:
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v13);
  return v5;
}
