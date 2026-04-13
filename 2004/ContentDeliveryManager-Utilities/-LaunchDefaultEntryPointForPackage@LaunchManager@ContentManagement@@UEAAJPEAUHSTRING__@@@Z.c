/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000FE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??R_lambda_12166ec632ca6f146a57bffa838bbe49_@@QEBAJXZ @ 0x18000FF7C (--R_lambda_12166ec632ca6f146a57bffa838bbe49_@@QEBAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017D50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  wil::details_abi *v5; // rcx
  __int64 v6; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v8; // rdi
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  int v13[2]; // [rsp+28h] [rbp-38h] BYREF
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  unsigned int v16[2]; // [rsp+38h] [rbp-28h] BYREF
  const char *v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int16 v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HSTRING v21; // [rsp+98h] [rbp+38h] BYREF
  HSTRING *v22; // [rsp+A0h] [rbp+40h] BYREF

  v21 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    a2,
    a3);
  v22 = &v21;
  *(_QWORD *)v16 = retaddr;
  v17 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v18 = 0LL;
  v19 = 394;
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    v4,
    v3);
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5, v6);
  v8 = ThreadLocalDataCache;
  *(_QWORD *)v13 = ThreadLocalDataCache;
  v14 = 0;
  v9 = 0;
  v15 = 0;
  if ( ThreadLocalDataCache )
  {
    v15 = *((_DWORD *)ThreadLocalDataCache + 4);
    v14 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v14;
    v9 = v15;
    v8 = *(struct wil::details_abi::ThreadLocalData **)v13;
  }
  v10 = _lambda_12166ec632ca6f146a57bffa838bbe49_::operator()(&v22);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v10,
      (__int64)v13,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v16);
  if ( v8 )
    *((_DWORD *)v8 + 4) = v9;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18A,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
