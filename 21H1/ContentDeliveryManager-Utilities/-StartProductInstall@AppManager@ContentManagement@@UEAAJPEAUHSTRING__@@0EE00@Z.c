/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180058C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x180057354 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005A78C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        char a5,
        HSTRING a6,
        HSTRING a7)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  wil::details_abi *v10; // rcx
  __int64 v11; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v13; // rdi
  int v14; // esi
  HSTRING *v15; // r9
  int StoreId; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  HSTRING string[2]; // [rsp+58h] [rbp-31h] BYREF
  int v22[2]; // [rsp+68h] [rbp-21h] BYREF
  int v23; // [rsp+70h] [rbp-19h]
  int v24; // [rsp+74h] [rbp-15h]
  unsigned int v25[2]; // [rsp+78h] [rbp-11h] BYREF
  const char *v26; // [rsp+80h] [rbp-9h]
  __int64 v27; // [rsp+88h] [rbp-1h]
  __int16 v28; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]
  HSTRING string1; // [rsp+E0h] [rbp+57h]
  HSTRING string2; // [rsp+E8h] [rbp+5Fh]

  string2 = a3;
  string1 = a2;
  string[1] = (HSTRING)-2LL;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    a2,
    a3);
  *(_QWORD *)v25 = retaddr;
  v26 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v27 = 0LL;
  v28 = 336;
  LOBYTE(v8) = 1;
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    v9,
    v8);
  LOBYTE(v10) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v10, v11);
  v13 = ThreadLocalDataCache;
  *(_QWORD *)v22 = ThreadLocalDataCache;
  v23 = 0;
  v14 = 0;
  v24 = 0;
  if ( ThreadLocalDataCache )
  {
    v24 = *((_DWORD *)ThreadLocalDataCache + 4);
    v23 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v23;
    v14 = v24;
    v13 = *(struct wil::details_abi::ThreadLocalData **)v22;
  }
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  StoreId = CreativeFramework::StoreHelpers::GenerateStoreId(string1, string2, string, v15);
  v19 = StoreId;
  if ( StoreId >= 0 )
  {
    LOBYTE(v18) = a5;
    LOBYTE(v17) = a4;
    v19 = (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, __int64, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
            this,
            string[0],
            v17,
            v18,
            a6,
            0LL,
            0LL,
            a7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)StoreId);
  }
  WindowsDeleteString(string[0]);
  string[0] = 0LL;
  if ( v19 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v19,
      (__int64)v22,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v25);
  if ( v13 )
    *((_DWORD *)v13 + 4) = v14;
  if ( v19 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x150,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
